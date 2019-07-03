#include "funcoes.hpp"

//ExplicaÃ§Ãµes de cada funÃ§Ã£o na biblioteca.

void preenche_mapa(char m[20][38], string text, long unsigned int lin){
    for(long unsigned int i=0; i < 38; i++)
        m[lin][i] = text[i];
}
//-----------------------------------------------------------------------------//
int posicao_vert(const int &pos){ 
    return(pos*2);        
}
//-----------------------------------------------------------------------------//
int posicao_hor(const char &pos){   
    int operacao = pos - 96; 
    return(operacao * 4);
}
//-----------------------------------------------------------------------------//
void entrada_usuario(char &piece, char &casa_inicial_char, char &casa_final_char, int &casa_inicial_int, int &casa_final_int){
    cin >> setw(1) >> piece; // Coloca o primeiro caractere como peÃ§a
    cin >> setw(1) >> casa_inicial_char; // Coloca o segundo caractere como 'char' da posiÃ§Ã£o inicial
    cin >> setw(1) >> casa_inicial_int; // Coloca o terceiro caractere como 'int' da posiÃ§Ã£o inicial
    cin.ignore(); // Ignora o quarto caractere (espaÃ§o)
    cin >> setw(1) >> casa_final_char; // Coloca o quinto caractere como 'char' da posiÃ§Ã£o final
    cin >> setw(1) >> casa_final_int; // Coloca o sexto caractere como 'int' da posiÃ§Ã£o final
    //cout << "\n" << piece << casa_inicial_char << casa_inicial_int << ' ' << casa_final_char << casa_final_int << endl;
}
//-----------------------------------------------------------------------------//
bool entrada_pertence_tabuleiro(const char &piece, const char &casa_inicial_char, const char &casa_final_char, const int &casa_inicial_int, const int &casa_final_int){
    if((piece == 'R' || piece == 'C' || piece == 'B' || piece == 'K' || piece == 'Q' || piece == 'P' || piece == 'q' || piece == 'k' || piece == 'r' || piece == 'c' || piece == 'b' || piece == 'p') && (casa_inicial_char >= 'a' && casa_inicial_char <='h') && (casa_final_char >= 'a' && casa_final_char <= 'h') &&(casa_inicial_int >= 1 && casa_inicial_int <= 8) && (casa_final_int >= 1 && casa_final_int <=8)){
        return(1);
    }
    return(0);
}
//-----------------------------------------------------------------------------//
bool teste(const char &peca, const int &col_in, const int &col_fin, const int &lin_in, const int &lin_fin, Mapa &m){
    if(m.tabuleiro[lin_in][col_in] != peca){
        return(0);
    }else{
        m.tabuleiro[lin_in][col_in] = ' ';
        m.tabuleiro[lin_fin][col_fin] = peca;
    }
    return(1);
}
// A - 65; a - 97
//-----------------------------------------------------------------------------//
void imprime_mapa(const Mapa &m){
    /*
    * cout << "\033[1;36m";
    *          foreground background
    black        30         40
    red          31         41
    green        32         42
    yellow       33         43
    blue         34         44
    magenta      35         45
    cyan         36         46
    white        37         47
    */
    int i = 0;
    //Linha 0
    cout << "\033[0m";
    cout << "\t\t\t\t\t";
    for(i = 0; i < 38; i++){
        cout << "\033[1;30m\033[1;47m\033[7m";
        cout << m.tabuleiro[0][i];
        cout << "\033[0m";
    }
    //Linha 1
    cout << "\033[0m";
    cout << "\t\t\t\t\t";
    for(i = 0; i < 38; i++){
        if(i == 0 || i == 1 || i == 35 || i == 36 || i == 37){
            cout << "\033[0m\033[1;30m\033[1;47m\033[7m";
            cout << m.tabuleiro[1][i];
            cout << "\033[0m";
        }else{
            cout << "\033[0m\033[1;40m";
            cout << m.tabuleiro[1][i];
            cout << "\033[0m";
        }
    }
    cout << "\033[1;31m";
    cout << "  Red team:";
    cout << "\033[0m";
    //Linha 2-18 (Geral, modificar personagens depois)
    for(int j = 2; j < 18; j++){
        cout << "\033[0m";
        cout << "\t\t\t\t";
        for(i = 0; i < 37; i++){
            if(i == 0 || i == 1 || i == 35 || i == 36 || i == 37){
                cout << "\033[0m\033[1;30m\033[1;47m\033[7m";
                cout << m.tabuleiro[j][i];
                cout << "\033[0m";
            }else{
                if(m.tabuleiro[j][i] == ' ' || m.tabuleiro[j][i] == '|' || m.tabuleiro[j][i] == '-' || m.tabuleiro[j][i] == '+'){
                    cout << "\033[0m\033[1;40m";
                    cout << m.tabuleiro[j][i];
                    cout << "\033[0m";
                }else{
                    if(m.tabuleiro[j][i] == 'R' || m.tabuleiro[j][i] == 'C' || m.tabuleiro[j][i] == 'B' || m.tabuleiro[j][i] == 'K' || m.tabuleiro[j][i] == 'Q' || m.tabuleiro[j][i] == 'P'){
                        cout << "\033[0m\033[1;31m\033[1;40m";
                        cout << m.tabuleiro[j][i];
                        cout << "\033[0m";
                    }else{
                        cout << "\033[0m\033[1;34m\033[1;40m";
                        cout << m.tabuleiro[j][i];
                        cout << "\033[0m";
                    }
                }
            }
        }
        
        cout << "\033[1;31m";
        cout << endl;
        if(j == 2)
            cout << "  Q: Queen.";
        if(j == 3)
            cout << "  K: King.";
        if(j == 4)
            cout << "  R: Rook.";
        if(j == 5)
            cout << "  C: Cavalry.";
        if(j == 6)
            cout << "  B: Bishop.";
        if(j == 7)
            cout << "  P: Peon.";
        cout << "\033[1;34m";
        if(j == 8)
            cout << "               ";
        if(j == 9)
            cout << "  Blue team:";
        if(j == 10)
            cout << "  q: Queen.";
        if(j == 11)
            cout << "  k: King.";
        if(j == 12)
            cout << "  r: Rook.";
        if(j == 13)
            cout << "  c: Cavalry.";
        if(j == 14)
            cout << "  b: Bishop.";
        if(j == 15)
            cout << "  p: Peon.";
        if(j == 16)
            cout << "\t";
        if(j == 17)
            cout << "\t";
    }
    //Linha 19
    cout << "\033[0m";
    cout << "\t\t\t\t";
    for(i = 0; i < 38; i++){
        cout << "\033[1;30m\033[1;47m\033[7m";
        cout << m.tabuleiro[18][i];
        cout << "\033[0m";
    }
}
//-----------------------------------------------------------------------------//
void imprime_nome_jogo(void){
    /*
    * cout << "\033[1;36m";
    *          foreground background
    black        30         40
    red          31         41
    green        32         42
    yellow       33         43
    blue         34         44
    magenta      35         45
    cyan         36         46
    white        37         47
    */
    string n1 = "\t\t  ___       ___           ____            _________       ___________       ___________    _______________\n";
    string n2 = "\t\t  \\  \\     /  /          /    \\          |   ____   \\    |  ______   |     |   ________|  |_________      |\n";
    string n3 = "\t\t   \\  \\   /  /          /  /\\  \\         |  |    \\   \\   |  |     |  |     |  |                     )    )\n";
    string n4 = "\t\t    \\  \\ /  /          /  /  \\  \\        |  |     \\   |  |  |     |  |     |  |                   (    (\n";
    string n5 = "\t\t     \\     /          /  /____\\  \\       |  |      |  |  |  |_____|  |     |  |________          )    ) \n";
    string n6 = "\t\t     /     \\         /  ________  \\      |  |      |  |  |  |_____   |     |   ________|       (    (\n";
    string n7 = "\t\t    /  / \\  \\       /  /        \\  \\     |  |     /   /  |  |     \\  \\     |  |               )    ) \n";
    string n8 = "\t\t   /  /   \\  \\     /  /          \\  \\    |  |____/   /   |  |      \\  \\    |  |________     (    (________\n";
    string n9 = "\t\t  /  /     \\  \\   /  /            \\  \\   |          /    |  |       \\  \\   |           |   |              |\n";
    string n0 = "\t\t '--'       '--' '--'              '--'  '---------'     '--'        '--'  '-----------'   '--------------'\n";
    cout << n1 << n2 << n3 << n4 << n5 << n6 << n7 << n8 << n9 << n0;
    cout << "\n\n\n\n\n\t\t\t\t\t\t     ___________________________________ \n";
    cout << "\t\t\t\t\t\t    |Entre com uma opcao:               |\n\t\t\t\t\t\t    "
     << "|1 - Carregar um jogo de um arquivo.|\n\t\t\t\t\t\t    |2 - Jogo entre 2 jogadores.        |\n\t\t\t\t\t\t    |3 - Instrucoes.                    |\n"
     << "\t\t\t\t\t\t    |___________________________________|";
    cout << "\n\n\t\t\t\t\t\t    -> ";
}
//-----------------------------------------------------------------------------//
void instrucoes_jogadores(void){
    int entrada_usuario = 0;
    menu_instrucoes:
    system("clear");
    cout << "\033[0m\n\n\n\n\t Selecione uma opcao:\n\t\t1. Tabuleiro e pecas.\n\t\t2. Movimento das pecas.\n\t\t3. Movimentos especiais.\n\t\t4. Retornar ao menu principal.\n\t\t-> ";
    cin >> entrada_usuario;
    if(entrada_usuario == 4){
            cout << "\033[0m";
            return;
    }
    if(entrada_usuario == 1){
        system("clear");
        cout << "\n\tTabuleiro e pecas:" << endl;
        cout << "\t\t-> Quando nos falamos de pecas de cor azul ou vermelha estaremos nos referindo ao lado das pecas de cor mais \n\t\tclara ou mais escura respectivamente." << endl;
        cout << "\t\t-> Chamamos de casa cada um dos quadrados do tabuleiro." << endl;
        cout << "\t\t-> As pecas do jogo de xadrez sao (portugues/ingles):" <<endl;
        cout << "\t\t\t-> Peao(P/P)\t\t-> Torre(T/R)\n\t\t\t-> Cavalo(C/C)\t\t-> Rainha ou Dama(D/Q)\n\t\t\t-> Bispo(B/B)\t\t-> Rei(R/K)" <<endl;
        cout << "\t\t-> As pecas vermelhas sempre fazem o primeiro movimento!";
        
        cout << "\n\n\t Para retornar ao menu principal, digite 1. Caso deseje voltar ao menu de instrucoes, digite 2.\n\t\t-> ";
        cin >> entrada_usuario;
        if(entrada_usuario == 1){
            cout << "\033[0m";
            return;
        }
        else
            goto menu_instrucoes;
    }
    
    if(entrada_usuario == 2){
        system("clear");
        cout << "\n\tMovimentos:" <<endl;
        cout << "\tTorre:\n\t\t-> A torre se movimenta para frente e para tras, para a direita e para a esquerda, quantas \n\t\tcasas quiser, mas nao pode pular nenhuma outra peca." <<endl;
        cout << "\tBispo:\n\t\t-> O bispo se movimenta na diagonal mantendo-se sempre nas casas de mesma cor que se encontrava \n\t\tno inicio do jogo, podendo ir para frente e para tras, quantas casas quiser, mas nao pode pular nenhuma outra peca." << endl;
        cout << "\tCavalo:\n\t\t-> O cavalo tem um movimento especial que parece a letra L. O cavalo se movimenta 2 casas para \n\t\tfrente ou para tras e em seguida 1 casa para a direita ou para a esquerda, ou 2 casas para a direita ou para a esquerda \n\t\te em seguida 1 casa para frente ou para tras. O cavalo eh a unica peca do xadrez que pode pular outras pecas." << endl;
        cout << "\tRainha:\n\t\t-> A Rainha, tambem conhecida como Dama, eh a peça mais poderosa do xadrez, ela pode ir para frente \n\t\tou para tras, para direita ou para a esquerda, ou na diagonal, quantas casas quiser, mas nao pode pular nenhuma outra peca." << endl;
        cout << "\tRei:\n\t\t-> O Rei movimenta-se apenas 1 casa em qualquer direcao. O Rei nunca pode se movimentar para uma casa \n\t\t esteja sob ataque ou capturar uma peca que esteja defendida por uma peca adversaria. No diagrama o rei preto só pode ir para cima, pois \n\t\tindo para a esquerda ou em diagonal estara sob ataque da torre branca. Quando estudarmos os movimentos \n\t\tespeciais veremos que existe uma situação em que o rei pode andar 2 casas." << endl;
        cout << "\tPeao:\n\t\t-> O peao soh se movimenta para frente, sendo a unica peca que nao se move para tras. No primeiro \n\t\tlance de cada peao ele pode avancar 1 ou 2 casas. A partir do segundo lance de cada peao ele ira movimentar-se apenas 1 casa." << endl;
        
        cout << "\n\n\t Para retornar ao menu principal, digite 1. Caso deseje voltar ao menu de instrucoes, digite 2.\n\t\t-> ";
        cin >> entrada_usuario;
        if(entrada_usuario == 1){
            cout << "\033[0m";
            return;
        }
        else
            goto menu_instrucoes;
    }
    
    if(entrada_usuario == 3){
        system("clear");
        cout << "\n\tMovimentos Especiais:" << endl;
        cout << "\n\tRoque:";
        cout << "\n\t\t-> E um movimento que envolve a torre e o rei. Eh o unico movimento do xadrez em que você mexe duas pecas ao \n\t\tmesmo tempo e que o rei anda duas casas. O objetivo do roque eh tirar o rei do centro do tabuleiro e deixa-lo num canto \n\t\tque eh mais protegido, ao mesmo tempo colocar a torre no centro do tabuleiro para facilitar seus ataques.";
        cout << "\n\t\t-> No roque o rei anda duas casas em direção a torre e a torre pula o rei ficando ao seu lado.";
        cout << "\n\t\t-> O roque grande eh aquele que o rei anda em direcao a torre mais distante.";
        cout << "\n\t\t-> O roque pequeno eh aquele em que o rei anda em direcao à torre mais proxima.";
        cout << "\n\t\t-> Condicoes para fazer o roque:";
        cout << "\n\t\t\t-> O rei nao pode ter se movimentado nenhuma vez;";
        cout << "\n\t\t\t-> A torre com quem se quer rocar nao pode ter feito nenhum movimento;";
        cout << "\n\t\t\t-> Nao pode haver pecas entre o rei e a torre;";
        cout << "\n\t\t\t-> O rei nao pode estar em xeque;";
        cout << "\n\t\t\t-> O rei nao pode passar, nem terminar em casa que esteja sob o ataque de peca adversaria.";
        
        cout << "\n\n\t Para retornar ao menu principal, digite 1. Caso deseje voltar ao menu de instrucoes, digite 2.\n\t\t-> ";
        cin >> entrada_usuario;
        if(entrada_usuario == 1){
            cout << "\033[0m";
            return;
        }
        else
            goto menu_instrucoes;
    }
}




