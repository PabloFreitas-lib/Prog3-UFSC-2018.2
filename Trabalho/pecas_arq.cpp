#include "pecas_arq.hpp"


void Peao_arq::Movimento(const char dados_do_arquivo[], char &casa_inicial_char, char &casa_final_char, int &casa_inicial_int, int &casa_final_int, Mapa &ma, int rodada){
    if(rodada % 2 == 0){
        if(dados_do_arquivo[3] != 'x'){
            casa_final_char = dados_do_arquivo[2];
            casa_inicial_char = dados_do_arquivo[2];
            casa_final_int = dados_do_arquivo[3] - 48;
            if(ma.retorna_caractere(posicao_vert(casa_final_int - 1), posicao_hor(casa_final_char)) == 'P')
                casa_inicial_int = casa_final_int - 1;
            else
                casa_inicial_int = casa_final_int - 2;
        }
        if(dados_do_arquivo[3] == 'x'){
            casa_final_char = dados_do_arquivo[4];
            casa_inicial_char = dados_do_arquivo[2];
            casa_final_int = dados_do_arquivo[5] - 48;
            casa_inicial_int = casa_final_int - 1;
        }
    }else{
        if(dados_do_arquivo[5] != 'x'){
            casa_final_char = dados_do_arquivo[4];
            casa_inicial_char = dados_do_arquivo[4];
            casa_final_int = dados_do_arquivo[5] - 48;
            if(ma.retorna_caractere(posicao_vert(casa_final_int + 1), posicao_hor(casa_final_char)) == 'p')
                casa_inicial_int = casa_final_int + 1;
            else
                casa_inicial_int = casa_final_int + 2;
        }
        if(dados_do_arquivo[5] == 'x'){
            casa_final_char = dados_do_arquivo[6];
            casa_inicial_char = dados_do_arquivo[4];
            casa_final_int = dados_do_arquivo[7] - 48;
            casa_inicial_int = casa_final_int + 1;
        }
    }
}

void Cavalo_arq::Movimento(const char dados_do_arquivo[], char &casa_inicial_char, char &casa_final_char, int &casa_inicial_int, int &casa_final_int, Mapa &ma, int rodada){
        char A = 'c';
        if(rodada % 2 == 0)
            A = 'C';
        if(rodada % 2 == 0){
            if(dados_do_arquivo[3] != 'x'){
                casa_final_char = dados_do_arquivo[3];
                casa_final_int = dados_do_arquivo[4] - 48;
            }else{
                casa_final_char = dados_do_arquivo[4];
                casa_final_int = dados_do_arquivo[5] - 48;
            }
        }else{
            if(dados_do_arquivo[5] != 'x'){
                casa_final_char = dados_do_arquivo[5];
                casa_final_int = dados_do_arquivo[6] - 48;
            }else{
                casa_final_char = dados_do_arquivo[6];
                casa_final_int = dados_do_arquivo[7] - 48;
            }
        }
            // Esquerda-Esquerda-Cima
            if(posicao_vert(casa_final_int - 1) > 0 && posicao_hor(casa_final_char - 2) > 0){
                if(ma.retorna_caractere(posicao_vert(casa_final_int - 1), posicao_hor(casa_final_char - 2)) == A){
                    casa_inicial_int = casa_final_int - 1;
                    casa_inicial_char = casa_final_char - 2;
                }
            // Direita-Direita-Cima
            }if(posicao_vert(casa_final_int - 1) > 0 && posicao_hor(casa_final_char + 2) < 38){
                if(ma.retorna_caractere(posicao_vert(casa_final_int - 1), posicao_hor(casa_final_char + 2)) == A){
                    casa_inicial_int = casa_final_int - 1;
                    casa_inicial_char = casa_final_char + 2;
                }
            // Direita-Direita-Baixo
            }if(posicao_vert(casa_final_int + 1) < 20 && posicao_hor(casa_final_char + 2) < 38){
                if(ma.retorna_caractere(posicao_vert(casa_final_int + 1), posicao_hor(casa_final_char + 2)) == A){
                    casa_inicial_int = casa_final_int + 1;
                    casa_inicial_char = casa_final_char + 2;
                }
            // Esquerda-Esqueda-Baixo
            }if(posicao_vert(casa_final_int + 1) < 20 && posicao_hor(casa_final_char - 2) > 0){
                if(ma.retorna_caractere(posicao_vert(casa_final_int + 1), posicao_hor(casa_final_char - 2)) == A){
                    casa_inicial_int = casa_final_int + 1;
                    casa_inicial_char = casa_final_char - 2;
                }
            // Baixo-Baixo-Esquerda
            }if(posicao_vert(casa_final_int + 2) < 20 && posicao_hor(casa_final_char - 1) > 0){
                if(ma.retorna_caractere(posicao_vert(casa_final_int + 2), posicao_hor(casa_final_char - 1)) == A){
                    casa_inicial_int = casa_final_int + 2;
                    casa_inicial_char = casa_final_char - 1;
                }
            // Baixo-Baixo-Direita
            }if(posicao_vert(casa_final_int + 2) < 20 && posicao_hor(casa_final_char + 1) < 38){
                if(ma.retorna_caractere(posicao_vert(casa_final_int + 2), posicao_hor(casa_final_char + 1)) == A){
                    casa_inicial_int = casa_final_int + 2;
                    casa_inicial_char = casa_final_char + 1;
                }
            // Cima-Cima-Esquerda
            }if(posicao_vert(casa_final_int - 2) >0 && posicao_hor(casa_final_char - 1) > 0){
                if(ma.retorna_caractere(posicao_vert(casa_final_int - 2), posicao_hor(casa_final_char - 1)) == A){
                    casa_inicial_int = casa_final_int - 2;
                    casa_inicial_char = casa_final_char - 1;
                }
            // Cima-Cima-Direita
            }if(posicao_vert(casa_final_int - 2) > 0 && posicao_hor(casa_final_char + 1) < 38){
                if(ma.retorna_caractere(posicao_vert(casa_final_int - 2), posicao_hor(casa_final_char + 1)) == A){
                    casa_inicial_int = casa_final_int - 2;
                    casa_inicial_char = casa_final_char + 1;
                }
            }
}

void Torre_arq::Movimento(const char dados_do_arquivo[], char &casa_inicial_char, char &casa_final_char, int &casa_inicial_int, int &casa_final_int, Mapa &ma, int rodada){
    char A = 'r';
    if(rodada % 2 == 0)
        A = 'R';
    int i = 0;
    
    if(rodada % 2 == 0){
        if(dados_do_arquivo[3] != 'x'){
            casa_final_char = dados_do_arquivo[3];
            casa_final_int = dados_do_arquivo[4] - 48;
        }else{
            casa_final_char = dados_do_arquivo[4];
            casa_final_int = dados_do_arquivo[5] - 48;
        }
    }else{
        if(dados_do_arquivo[5] != 'x'){
            casa_final_char = dados_do_arquivo[5];
            casa_final_int = dados_do_arquivo[6] - 48;
        }else{
            casa_final_char = dados_do_arquivo[6];
            casa_final_int = dados_do_arquivo[7] - 48;
        }
    }
    // Direita
    for(i = posicao_hor(casa_final_char) + 4; i <= posicao_hor('h'); i += 4){
        if(ma.retorna_caractere(posicao_vert(casa_final_int ), i) != ' '){
            if(ma.retorna_caractere(posicao_vert(casa_final_int), i) == A){
                casa_inicial_char = ((i / 4) + 96);
                casa_inicial_int = casa_final_int;
                return;
            }else{
                break;
            }
        }
    }
    
    // Esquerda
    for(i = posicao_hor(casa_final_char) - 4; i >= posicao_hor('a'); i -= 4){
        if(ma.retorna_caractere(posicao_vert(casa_final_int ), i) != ' '){
            if(ma.retorna_caractere(posicao_vert(casa_final_int), i) == A){
                casa_inicial_char = ((i / 4) + 96);
                casa_inicial_int = casa_final_int;
                return;
            }else{
                break;
            }
        }
    }
    
    // Baixo
    for(i = posicao_vert(casa_final_int) + 2; i <= posicao_vert(8); i += 2){
        if(ma.retorna_caractere(i, posicao_hor(casa_final_char)) != ' '){
            if(ma.retorna_caractere(i, posicao_hor(casa_final_char)) == A){
                casa_inicial_char = casa_final_char;
                casa_inicial_int = i / 2;
                return;
            }else{
                break;
            }
        }
    }
    
    // Cima
    for(i = posicao_vert(casa_final_int) - 2; i >= posicao_vert(1); i -= 2){
        if(ma.retorna_caractere(i, posicao_hor(casa_final_char)) != ' '){
            if(ma.retorna_caractere(i, posicao_hor(casa_final_char)) == A){
                casa_inicial_char = casa_final_char;
                casa_inicial_int = i / 2;
                return;
            }else{
                break;
            }
        }
    }
    
}

void Bispo_arq::Movimento(const char dados_do_arquivo[], char &casa_inicial_char, char &casa_final_char, int &casa_inicial_int, int &casa_final_int, Mapa &ma, int rodada){
   char A = 'b';
    if(rodada % 2 == 0)
        A = 'B';
    int i = 0;
    int j = 0;
    
    if(rodada % 2 == 0){
        if(dados_do_arquivo[3] != 'x'){
            casa_final_char = dados_do_arquivo[3];
            casa_final_int = dados_do_arquivo[4] - 48;
        }else{
            casa_final_char = dados_do_arquivo[4];
            casa_final_int = dados_do_arquivo[5] - 48;
        }
    }else{
        if(dados_do_arquivo[5] != 'x'){
            casa_final_char = dados_do_arquivo[5];
            casa_final_int = dados_do_arquivo[6] - 48;
        }else{
            casa_final_char = dados_do_arquivo[6];
            casa_final_int = dados_do_arquivo[7] - 48;
        }
    }
    
    // Cima-Direita
    j = posicao_vert(casa_final_int) - 2;
    for(i = posicao_hor(casa_final_char) + 4; i <= posicao_hor('h'); i += 4){
        if(j / 2 > 0){
            if(ma.retorna_caractere(j, i) != ' '){
                if(ma.retorna_caractere(j, i) == A){
                    casa_inicial_char = ((i / 4) + 96);
                    casa_inicial_int = j / 2;
                    return;
                }else{
                    break;
                }
            }
        }
        j -= 2;
    }
    
    // Baixo-Direita
    j = posicao_vert(casa_final_int) + 2;
    for(i = posicao_hor(casa_final_char) + 4; i <= posicao_hor('h'); i += 4){
        if(j / 2 < 18){
            if(ma.retorna_caractere(j, i) != ' '){
                if(ma.retorna_caractere(j, i) == A){
                    casa_inicial_char = ((i / 4) + 96);
                    casa_inicial_int = j / 2;
                    return;
                }else{
                    break;
                }
            }
        }
        j += 2;
    }
    
    // Cima-Esquerda
    j = posicao_vert(casa_final_int) - 2;
    for(i = posicao_hor(casa_final_char) - 4; i >= posicao_hor('a'); i -= 4){
        if(j / 2 > 0){
            if(ma.retorna_caractere(j, i) != ' '){
                if(ma.retorna_caractere(j, i) == A){
                    casa_inicial_char = ((i / 4) + 96);
                    casa_inicial_int = j / 2;
                    return;
                }else{
                    break;
                }
            }
        }
        j -= 2;
    }
    
    // Baixo-Esquerda
    j = posicao_vert(casa_final_int) + 2;
    for(i = posicao_hor(casa_final_char) - 4; i >= posicao_hor('a'); i -= 4){
        if(j / 2 < 18){
            if(ma.retorna_caractere(j, i) != ' '){
                if(ma.retorna_caractere(j, i) == A){
                    casa_inicial_char = ((i / 4) + 96);
                    casa_inicial_int = j / 2;
                    return;
                }else{
                    break;
                }
            }
        }
        j += 2;
    }
    
}

void Rei_arq::Movimento(const char dados_do_arquivo[], char &casa_inicial_char, char &casa_final_char, int &casa_inicial_int, int &casa_final_int, Mapa &ma, int rodada){
    char A = 'k';
    if(rodada % 2 == 0)
        A = 'K';
    int i = 0;
    int j = 0;
    
    if(rodada % 2 == 0){
        if(dados_do_arquivo[3] != 'x'){
            casa_final_char = dados_do_arquivo[3];
            casa_final_int = dados_do_arquivo[4] - 48;
        }else{
            casa_final_char = dados_do_arquivo[4];
            casa_final_int = dados_do_arquivo[5] - 48;
        }
    }else{
        if(dados_do_arquivo[5] != 'x'){
            casa_final_char = dados_do_arquivo[5];
            casa_final_int = dados_do_arquivo[6] - 48;
        }else{
            casa_final_char = dados_do_arquivo[6];
            casa_final_int = dados_do_arquivo[7] - 48;
        }
    }
    
    // Direita
    for(i = posicao_hor(casa_final_char) + 4; i <= posicao_hor('h'); i += 4){
        if(ma.retorna_caractere(posicao_vert(casa_final_int ), i) != ' '){
            if(ma.retorna_caractere(posicao_vert(casa_final_int), i) == A){
                casa_inicial_char = ((i / 4) + 96);
                casa_inicial_int = casa_final_int;
                return;
            }else{
                break;
            }
        }
    }
    
    // Esquerda
    for(i = posicao_hor(casa_final_char) - 4; i >= posicao_hor('a'); i -= 4){
        if(ma.retorna_caractere(posicao_vert(casa_final_int ), i) != ' '){
            if(ma.retorna_caractere(posicao_vert(casa_final_int), i) == A){
                casa_inicial_char = ((i / 4) + 96);
                casa_inicial_int = casa_final_int;
                return;
            }else{
                break;
            }
        }
    }
    
    // Baixo
    for(i = posicao_vert(casa_final_int) + 2; i <= posicao_vert(8); i += 2){
        if(ma.retorna_caractere(i, posicao_hor(casa_final_char)) != ' '){
            if(ma.retorna_caractere(i, posicao_hor(casa_final_char)) == A){
                casa_inicial_char = casa_final_char;
                casa_inicial_int = i / 2;
                return;
            }else{
                break;
            }
        }
    }
    
    // Cima
    for(i = posicao_vert(casa_final_int) - 2; i >= posicao_vert(1); i -= 2){
        if(ma.retorna_caractere(i, posicao_hor(casa_final_char)) != ' '){
            if(ma.retorna_caractere(i, posicao_hor(casa_final_char)) == A){
                casa_inicial_char = casa_final_char;
                casa_inicial_int = i / 2;
                return;
            }else{
                break;
            }
        }
    }
    
    // Cima-Direita
    j = posicao_vert(casa_final_int) - 2;
    for(i = posicao_hor(casa_final_char) + 4; i <= posicao_hor('h'); i += 4){
        if(j / 2 > 0){
            if(ma.retorna_caractere(j, i) != ' '){
                if(ma.retorna_caractere(j, i) == A){
                    casa_inicial_char = ((i / 4) + 96);
                    casa_inicial_int = j / 2;
                    return;
                }else{
                    break;
                }
            }
        }
        j -= 2;
    }
    
    // Baixo-Direita
    j = posicao_vert(casa_final_int) + 2;
    for(i = posicao_hor(casa_final_char) + 4; i <= posicao_hor('h'); i += 4){
        if(j / 2 < 18){
            if(ma.retorna_caractere(j, i) != ' '){
                if(ma.retorna_caractere(j, i) == A){
                    casa_inicial_char = ((i / 4) + 96);
                    casa_inicial_int = j / 2;
                    return;
                }else{
                    break;
                }
            }
        }
        j += 2;
    }
    
    // Cima-Esquerda
    j = posicao_vert(casa_final_int) - 2;
    for(i = posicao_hor(casa_final_char) - 4; i >= posicao_hor('a'); i -= 4){
        if(j / 2 > 0){
            if(ma.retorna_caractere(j, i) != ' '){
                if(ma.retorna_caractere(j, i) == A){
                    casa_inicial_char = ((i / 4) + 96);
                    casa_inicial_int = j / 2;
                    return;
                }else{
                    break;
                }
            }
        }
        j -= 2;
    }
    
    // Baixo-Esquerda
    j = posicao_vert(casa_final_int) + 2;
    for(i = posicao_hor(casa_final_char) - 4; i >= posicao_hor('a'); i -= 4){
        if(j / 2 < 18){
            if(ma.retorna_caractere(j, i) != ' '){
                if(ma.retorna_caractere(j, i) == A){
                    casa_inicial_char = ((i / 4) + 96);
                    casa_inicial_int = j / 2;
                    return;
                }else{
                    break;
                }
            }
        }
        j += 2;
    }
}

void Rainha_arq::Movimento(const char dados_do_arquivo[], char &casa_inicial_char, char &casa_final_char, int &casa_inicial_int, int &casa_final_int, Mapa &ma, int rodada){
    char A = 'q';
    if(rodada % 2 == 0)
        A = 'Q';
    int i = 0;
    int j = 0;
    
    if(rodada % 2 == 0){
        if(dados_do_arquivo[3] != 'x'){
            casa_final_char = dados_do_arquivo[3];
            casa_final_int = dados_do_arquivo[4] - 48;
        }else{
            casa_final_char = dados_do_arquivo[4];
            casa_final_int = dados_do_arquivo[5] - 48;
        }
    }else{
        if(dados_do_arquivo[5] != 'x'){
            casa_final_char = dados_do_arquivo[5];
            casa_final_int = dados_do_arquivo[6] - 48;
        }else{
            casa_final_char = dados_do_arquivo[6];
            casa_final_int = dados_do_arquivo[7] - 48;
        }
    }
    
    // Direita
    for(i = posicao_hor(casa_final_char) + 4; i <= posicao_hor('h'); i += 4){
        if(ma.retorna_caractere(posicao_vert(casa_final_int ), i) != ' '){
            if(ma.retorna_caractere(posicao_vert(casa_final_int), i) == A){
                casa_inicial_char = ((i / 4) + 96);
                casa_inicial_int = casa_final_int;
                return;
            }else{
                break;
            }
        }
    }
    
    // Esquerda
    for(i = posicao_hor(casa_final_char) - 4; i >= posicao_hor('a'); i -= 4){
        if(ma.retorna_caractere(posicao_vert(casa_final_int ), i) != ' '){
            if(ma.retorna_caractere(posicao_vert(casa_final_int), i) == A){
                casa_inicial_char = ((i / 4) + 96);
                casa_inicial_int = casa_final_int;
                return;
            }else{
                break;
            }
        }
    }
    
    // Baixo
    for(i = posicao_vert(casa_final_int) + 2; i <= posicao_vert(8); i += 2){
        if(ma.retorna_caractere(i, posicao_hor(casa_final_char)) != ' '){
            if(ma.retorna_caractere(i, posicao_hor(casa_final_char)) == A){
                casa_inicial_char = casa_final_char;
                casa_inicial_int = i / 2;
                return;
            }else{
                break;
            }
        }
    }
    
    // Cima
    for(i = posicao_vert(casa_final_int) - 2; i >= posicao_vert(1); i -= 2){
        if(ma.retorna_caractere(i, posicao_hor(casa_final_char)) != ' '){
            if(ma.retorna_caractere(i, posicao_hor(casa_final_char)) == A){
                casa_inicial_char = casa_final_char;
                casa_inicial_int = i / 2;
                return;
            }else{
                break;
            }
        }
    }
    
    // Cima-Direita
    j = posicao_vert(casa_final_int) - 2;
    for(i = posicao_hor(casa_final_char) + 4; i <= posicao_hor('h'); i += 4){
        if(j / 2 > 0){
            if(ma.retorna_caractere(j, i) != ' '){
                if(ma.retorna_caractere(j, i) == A){
                    casa_inicial_char = ((i / 4) + 96);
                    casa_inicial_int = j / 2;
                    return;
                }else{
                    break;
                }
            }
        }
        j -= 2;
    }
    
    // Baixo-Direita
    j = posicao_vert(casa_final_int) + 2;
    for(i = posicao_hor(casa_final_char) + 4; i <= posicao_hor('h'); i += 4){
        if(j / 2 < 18){
            if(ma.retorna_caractere(j, i) != ' '){
                if(ma.retorna_caractere(j, i) == A){
                    casa_inicial_char = ((i / 4) + 96);
                    casa_inicial_int = j / 2;
                    return;
                }else{
                    break;
                }
            }
        }
        j += 2;
    }
    
    // Cima-Esquerda
    j = posicao_vert(casa_final_int) - 2;
    for(i = posicao_hor(casa_final_char) - 4; i >= posicao_hor('a'); i -= 4){
        if(j / 2 > 0){
            if(ma.retorna_caractere(j, i) != ' '){
                if(ma.retorna_caractere(j, i) == A){
                    casa_inicial_char = ((i / 4) + 96);
                    casa_inicial_int = j / 2;
                    return;
                }else{
                    break;
                }
            }
        }
        j -= 2;
    }
    
    // Baixo-Esquerda
    j = posicao_vert(casa_final_int) + 2;
    for(i = posicao_hor(casa_final_char) - 4; i >= posicao_hor('a'); i -= 4){
        if(j / 2 < 18){
            if(ma.retorna_caractere(j, i) != ' '){
                if(ma.retorna_caractere(j, i) == A){
                    casa_inicial_char = ((i / 4) + 96);
                    casa_inicial_int = j / 2;
                    return;
                }else{
                    break;
                }
            }
        }
        j += 2;
    }
    
}
//Thales eh gay
