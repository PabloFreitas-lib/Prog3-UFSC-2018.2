#include "mapa.hpp"
#include "funcoes.hpp"
#include "pecas.hpp"
#include "pecas_arq.hpp"
#include <string>
#include <chrono>
#include <thread>
#include <vector>
#include <iomanip>

int main(void){
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds
    system("rm Comandos.txt");
    //static_cast<int>(A)
    //sleep_for(nanoseconds(1000000000));
    
    //---------------------------------------------------------------------------------//
    // Declaracao das variaveis
    // Gerais
    Mapa ma; // Classe usada para trabalhar com o tabuleiro
    int vez_jogador_x = 0; // Verifica qual jogador realiza o movimento
    int apresenta_erro = 0; // Indica se ocorreu algum erro e o mapa nao deve ser reimpresso
    FILE *arq; // Trabalha com a escrita do arquivo
    FILE *arq_user; // Arquivo entrado pelo jogador
    int verifica_modo = -1; // Modo de jogo (leitura[1], PvP[2], instruções[3])
    
    
    // Entradas do usuario
    char piece; // Peca entrada pelo jogador ('P'a3 a4)
    char casa_inicial_char; // Primeira casa alfabetica entrada (posicao inicial) (P'a'3 a4)
    char casa_final_char; // Ultima casa alfabetica entrada (posicao final) (Pa3 a'4')
    int casa_inicial_int = -123; // Primeira casa numerica entrada (posicao inicial) (Pa'3' a4)
    int casa_final_int; // Ultima casa numerica entrada (posicao final) (Pa3 a'4')
    
    
    //Testes
    Pecas *pecinhas;
    vector < Pecas * > pecas_entrada(6);
    
    Peao peao_entrada;
    Torre torre_entrada;
    Bispo bispo_entrada;
    Cavalo cavalo_entrada;
    Rainha rainha_entrada;
    Rei rei_entrada;
    
    pecas_entrada[0]= &peao_entrada;
    pecas_entrada[1]= &torre_entrada;
    pecas_entrada[2]= &bispo_entrada;
    pecas_entrada[3]= &cavalo_entrada;
    pecas_entrada[4]= &rainha_entrada;
    pecas_entrada[5]= &rei_entrada;
    
    //Testes arq
    char nome_do_arquivo[20]; // Nome do arquivo do usuario
    char dados_do_arquivo[20]; // Dados lidos do arquivo
    char aux_dados[20]; // Auxiliar para arrumar o arquivo quando a jogada passa de 9
    int contador_ajeita_arquivo = 0; // Contador auxiliar para arrumar o vetor de dados
    int alguma_coisa = 0; // Contador auxiliar para arrumar o vetor de dados
    int contador_arquivo_pvp = 1; // Contador para salvar o arquivo
    std::fill_n(dados_do_arquivo, 20, 0);
    std::fill_n(nome_do_arquivo, 20, 0);
    
    vector < Pecas_arq * > pecas_arquivo(6);
    Peao_arq testa_peao;
    Cavalo_arq testa_cavalo;
    Torre_arq testa_torre;
    Bispo_arq testa_bispo;
    Rei_arq testa_rei;
    Rainha_arq testa_rainha;
    
    // Define as posicoes para o polimorfismo
    pecas_arquivo[0] = &testa_peao;
    pecas_arquivo[1] = &testa_cavalo;
    pecas_arquivo[2] = &testa_torre;
    pecas_arquivo[3] = &testa_bispo;
    pecas_arquivo[4] = &testa_rei;
    pecas_arquivo[5] = &testa_rainha;
    
    //---------------------------------------------------------------------------------//
    // Corpo do código
    // Imprime o menu
    goto_menu: // Marco de pulo para o goto
    system("clear");
    imprime_nome_jogo();
    cin >> verifica_modo;
    while(verifica_modo != 1 && verifica_modo != 2 &&verifica_modo != 3){
        system("clear");
        imprime_nome_jogo();
        cout << "Entrada invalida. Por favor, entre com um opcao valida.\n" << "\t\t\t\t\t\t    -> ";
        cin >> verifica_modo;
    }
    
    //---------------------------------------------------------------------------------//
    // Leitura de arquivo
    if(verifica_modo == 1){
        // Entrada e abertura do arquivo
        cout << "\n\t\t\t\t\t\t    Por favor, entre com o nome do arquivo [Entradas.txt]:" << endl;
        cout << "\n\t\t\t\t\t\t    -> ";
        cin >> nome_do_arquivo;
        arq_user = fopen(nome_do_arquivo, "r");
        system("clear");
        
        // Loop de leitura do arquivo
        while(fscanf(arq_user, "%s", dados_do_arquivo) != EOF){
            if(dados_do_arquivo[1] != '.'){
                while(dados_do_arquivo[contador_ajeita_arquivo] != '\0'){
                    contador_ajeita_arquivo++;
                }
                for(alguma_coisa = 0; alguma_coisa < contador_ajeita_arquivo; alguma_coisa++){
                    aux_dados[alguma_coisa] = dados_do_arquivo[alguma_coisa + 1];
                    dados_do_arquivo[alguma_coisa] = aux_dados[alguma_coisa];
                }
                contador_ajeita_arquivo = 0;
            }
            
            if(casa_inicial_int == -123){
                imprime_mapa(ma);
                cout << "\n";
                cout << "\033[0m";
            }
            sleep_for(nanoseconds(100050000));
            
            // Jogador vermelho (1)
            if(vez_jogador_x % 2 == 0){
                //0-0
                if(dados_do_arquivo[2] == '0' && dados_do_arquivo[5] != '-'){
                    teste('K', posicao_hor('e'), posicao_hor('g'), posicao_vert(1), posicao_vert(1), ma); 
                    teste('R', posicao_hor('h'), posicao_hor('f'), posicao_vert(1), posicao_vert(1), ma); 
                    goto fim_arq_le;
                }
                //0-0-0
                if(dados_do_arquivo[2] == '0' && dados_do_arquivo[5] == '-'){
                    teste('K', posicao_hor('e'), posicao_hor('c'), posicao_vert(1), posicao_vert(1), ma); 
                    teste('R', posicao_hor('a'), posicao_hor('d'), posicao_vert(1), posicao_vert(1), ma); 
                    goto fim_arq_le;
                }
                // Peão
                if(dados_do_arquivo[2] != 'R' && dados_do_arquivo[2] != 'D' && dados_do_arquivo[2] != 'T' && dados_do_arquivo[2] != 'B' && dados_do_arquivo[2] != 'C'){
                    piece = 'P';
                    pecas_arquivo[0]->Movimento(dados_do_arquivo, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int, ma, vez_jogador_x);
                }
                // Cavalo
                else if(dados_do_arquivo[2] == 'C'){
                    piece = 'C';
                    pecas_arquivo[1]->Movimento(dados_do_arquivo, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int, ma, vez_jogador_x);
                }
                // Torre
                else if(dados_do_arquivo[2] == 'T'){
                    piece = 'R';
                    pecas_arquivo[2]->Movimento(dados_do_arquivo, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int, ma, vez_jogador_x);
                }
                // Bispo
                else if(dados_do_arquivo[2] == 'B'){
                    piece = 'B';
                    pecas_arquivo[3]->Movimento(dados_do_arquivo, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int, ma, vez_jogador_x);
                }
                // Rei
                else if(dados_do_arquivo[2] == 'R'){
                    piece = 'K';
                    pecas_arquivo[4]->Movimento(dados_do_arquivo, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int, ma, vez_jogador_x);
                }
                // Dama
                else if(dados_do_arquivo[2] == 'D'){
                    piece = 'Q';
                    pecas_arquivo[5]->Movimento(dados_do_arquivo, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int, ma, vez_jogador_x);
                }
                
            // Jogador azul (2)
            }else{
                // 0-0
                if(dados_do_arquivo[4] == '0' && dados_do_arquivo[7] != '-'){
                    teste('k', posicao_hor('e'), posicao_hor('g'), posicao_vert(8), posicao_vert(8), ma); 
                    teste('r', posicao_hor('h'), posicao_hor('f'), posicao_vert(8), posicao_vert(8), ma); 
                    goto fim_arq_le;
                }
                //0-0-0
                if(dados_do_arquivo[4] == '0' && dados_do_arquivo[7] == '-'){
                    teste('k', posicao_hor('e'), posicao_hor('c'), posicao_vert(8), posicao_vert(8), ma); 
                    teste('r', posicao_hor('a'), posicao_hor('d'), posicao_vert(8), posicao_vert(8), ma); 
                    goto fim_arq_le;
                }
                //Peão
                if(dados_do_arquivo[4] != 'R' && dados_do_arquivo[4] != 'D' && dados_do_arquivo[4] != 'T' && dados_do_arquivo[4] != 'B' && dados_do_arquivo[4] != 'C'){
                    piece = 'p';
                    pecas_arquivo[0]->Movimento(dados_do_arquivo, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int, ma, vez_jogador_x);
                }
                // Cavalo
                else if(dados_do_arquivo[4] == 'C'){
                    piece = 'c';
                    pecas_arquivo[1]->Movimento(dados_do_arquivo, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int, ma, vez_jogador_x);
                }
                // Torre
                else if(dados_do_arquivo[4] == 'T'){
                    piece = 'r';
                    pecas_arquivo[2]->Movimento(dados_do_arquivo, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int, ma, vez_jogador_x);
                }
                // Bispo
                else if(dados_do_arquivo[4] == 'B'){
                    piece = 'b';
                    pecas_arquivo[3]->Movimento(dados_do_arquivo, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int, ma, vez_jogador_x);
                }
                // Rei
                else if(dados_do_arquivo[4] == 'R'){
                    piece = 'k';
                    pecas_arquivo[4]->Movimento(dados_do_arquivo, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int, ma, vez_jogador_x);
                }
                // Dama
                else if(dados_do_arquivo[4] == 'D'){
                    piece = 'q';
                    pecas_arquivo[5]->Movimento(dados_do_arquivo, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int, ma, vez_jogador_x);
                }
            }
            
            
            // Realiza o movimento da peca indicada, de acordo com as variaveis adaptadas acima
            if(ma.retorna_caractere(posicao_vert(casa_final_int), posicao_hor(casa_final_char))=='k'||ma.retorna_caractere(posicao_vert(casa_final_int), posicao_hor(casa_final_char))=='K'){
                    teste(piece, posicao_hor(casa_inicial_char), posicao_hor(casa_final_char), posicao_vert(casa_inicial_int), posicao_vert(casa_final_int), ma);
                    system("clear");
                    imprime_mapa(ma);
                    if(vez_jogador_x%2==0)
                        cout<<"\n\t\t\t\t\tJogador vermelho venceu!\n\n"<<endl;
                    else
                        cout<<"\n\t\t\t\t\tJogador azul venceu!\n\n"<<endl;
                    fclose(arq_user);
                    return(0);
                }else
                    teste(piece, posicao_hor(casa_inicial_char), posicao_hor(casa_final_char), posicao_vert(casa_inicial_int), posicao_vert(casa_final_int), ma);
            //teste(piece, posicao_hor(casa_inicial_char), posicao_hor(casa_final_char), posicao_vert(casa_inicial_int), posicao_vert(casa_final_int), ma); 
            
            fim_arq_le:
            // Impressao do tabuleiro
            system("clear");
            imprime_mapa(ma);
            cout << "\n";
            
            // Historico da ultima jogada 
            if(vez_jogador_x % 2 == 0)
                cout << "\033[1;31m";
            else
                cout << "\033[1;34m";
            cout << "\t\t\t\t\t" << piece << casa_inicial_char << casa_inicial_int << " --> " << casa_final_char << casa_final_int << endl;
            cout << "\033[0m";
            // Troca de jogador
            vez_jogador_x++;
        }
        return(0);
    }
    
    //---------------------------------------------------------------------------------//
    // PvP
    if(verifica_modo == 2){
        arq = fopen("Comandos.txt", "w+");
        while(1){
            // Limpa o terminal e imprime o mapa a cada inicio de turno, com exceção de quando há erro
            if( !(apresenta_erro) ){
                if(vez_jogador_x > 0){
                    //Transforma p em P, por exemplo
                    if(vez_jogador_x  % 2 != 0){
                        piece = piece;
                    }else{
                        piece = piece - 32;
                    }
                    if(vez_jogador_x  % 2 != 0){
                        if(piece != 'P')
                            fprintf(arq, "%d.%c%c%d\n", contador_arquivo_pvp, piece, casa_final_char, casa_final_int);
                        else
                            fprintf(arq, "%d.%c%d\n", contador_arquivo_pvp, casa_final_char, casa_final_int);
                    }else{
                        if(piece != 'P')
                            fprintf(arq, "%d...%c%c%d\n", contador_arquivo_pvp, piece, casa_final_char, casa_final_int);
                        else
                            fprintf(arq, "%d...%c%d\n", contador_arquivo_pvp, casa_final_char, casa_final_int);
                    }
                }
                // Muda o jogador
                vez_jogador_x++;
                // Limpa o terminal
                system("clear");
                // Imprime o mapa e retorna as configurações de cor do terminal ao padrão
                imprime_mapa(ma);
                cout << "\033[0m";
            
                // Verifica de qual jogador é a vez
                if(vez_jogador_x  % 2 != 0){
                    cout << "\n\033[1;31mRed player move [(piece)(initial house) (final house)]: \033[0m";
                }else{
                    cout << "\n\033[1;34mBlue player move [(piece)(initial house) (final house): \033[0m";
                    contador_arquivo_pvp++;
                }
            }
            
            //---------------------------------------------------------------------------------//
            // Entrada
            entrada_usuario(piece, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int);
            if(piece == 'S'){
                fclose(arq);
                return(0);
            }
            //---------------------------------------------------------------------------------//
            // Arruma a peça correspondente a cada jogador (Letra inicial vira minúscula e vice-versa)
            if(vez_jogador_x  % 2 != 0){
                piece = piece;
            }else{
                piece = piece + 32;
            }
            //---------------------------------------------------------------------------------//
            //Verificação de erros
            // Verifica se a entrada é válida
            if(entrada_pertence_tabuleiro(piece, casa_inicial_char, casa_final_char, casa_inicial_int, casa_final_int)){
                // A entrada está correta; nada acontece
                apresenta_erro = 0;
            }else{
                cout << "Movimento invalido detectado. Por favor, insira uma entrada valida (e.g. Pa3 a4): ";
                apresenta_erro = 1;
            }
            
            // Caso não haja erro na entrada, verifica se há erro correspondente ao movimento
            // -> Faltam as funções que verificam o movimento... <-
            //      Por enquanto só mexe a peça de lugar
            if( !(apresenta_erro) ){
                
                if(piece == 'p' || piece == 'P'){
                    apresenta_erro = !(pecas_entrada[0]->Movimento(casa_final_int,posicao_hor(casa_final_char) / 4,posicao_hor(casa_inicial_char) / 4, casa_inicial_int, ma,vez_jogador_x));
                }
                if(piece == 'k' || piece == 'K'){
                    apresenta_erro = !(pecas_entrada[5]->Movimento(casa_final_int,posicao_hor(casa_final_char) / 4,posicao_hor(casa_inicial_char) / 4, casa_inicial_int, ma,vez_jogador_x));
                }
                if(piece == 'r' || piece == 'R'){
                    apresenta_erro = !(pecas_entrada[1]->Movimento(casa_final_int,posicao_hor(casa_final_char) / 4,posicao_hor(casa_inicial_char) / 4, casa_inicial_int, ma,vez_jogador_x));
                }
                if(piece == 'q' || piece == 'Q'){
                    apresenta_erro = !(pecas_entrada[4]->Movimento(casa_final_int,posicao_hor(casa_final_char) / 4,posicao_hor(casa_inicial_char) / 4, casa_inicial_int, ma,vez_jogador_x));
                }
                if(piece == 'c' || piece == 'C'){
                    apresenta_erro = !(pecas_entrada[3]->Movimento(casa_final_int,posicao_hor(casa_final_char) / 4,posicao_hor(casa_inicial_char) / 4, casa_inicial_int, ma,vez_jogador_x));
                }
                if(piece == 'b' || piece == 'B'){
                    apresenta_erro = !(pecas_entrada[2]->Movimento(casa_final_int,posicao_hor(casa_final_char) / 4,posicao_hor(casa_inicial_char) / 4, casa_inicial_int, ma,vez_jogador_x));
                }
                if(apresenta_erro){
                    cout << "Movimento invalido detectado. Por favor, insira uma entrada valida (e.g. Pa3 a4): ";
                    //fclose(arq);
                    //return(0);
                }else{
                    if(ma.retorna_caractere(posicao_vert(casa_final_int), posicao_hor(casa_final_char))=='k'||ma.retorna_caractere(posicao_vert(casa_final_int), posicao_hor(casa_final_char))=='K'){
                        teste(piece, posicao_hor(casa_inicial_char), posicao_hor(casa_final_char), posicao_vert(casa_inicial_int), posicao_vert(casa_final_int), ma);
                        system("clear");
                        imprime_mapa(ma);
                        if(vez_jogador_x%2!=0)
                            cout<<"\n\t\t\t\t\tJogador vermelho venceu!\n\n"<<endl;
                        else
                            cout<<"\n\t\t\t\t\tJogador azul venceu!\n\n"<<endl;
                        fprintf(arq, "%d. %c%c%d %c%d ", vez_jogador_x, piece, casa_inicial_char, casa_inicial_int, casa_final_char, casa_final_int);
                        fclose(arq);
                        return(0);
                    }else
                        teste(piece, posicao_hor(casa_inicial_char), posicao_hor(casa_final_char), posicao_vert(casa_inicial_int), posicao_vert(casa_final_int), ma);
                }
            }
            //---------------------------------------------------------------------------------//
            //cout << posicao_hor(casa_inicial_char) << endl << posicao_vert(casa_inicial_int) << endl;
        }
    }
    
    //---------------------------------------------------------------------------------//
    // Instrucoes
    if(verifica_modo == 3){    
        system("clear");
        instrucoes_jogadores();
        goto goto_menu;
    }
    //---------------------------------------------------------------------------------//
}
