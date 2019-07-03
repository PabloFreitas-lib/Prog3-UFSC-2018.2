#include <iostream>
#include <string>
#include "mapa.hpp"
#include "funcoes.hpp"
using namespace std;
//Usar enum para as posições

Mapa::Mapa(){
         // Zera a matriz
        for(int i=0; i<20; i++)
            std::fill_n(tabuleiro[i], 38, 0);
        //Preenche a matriz com o tabuleiro
        preenche_mapa(tabuleiro, "    A   B   C   D   E   F   G   H    \n", 0);
        preenche_mapa(tabuleiro, "  +---+---+---+---+---+---+---+---+  \n", 1);
        preenche_mapa(tabuleiro, "1 | R | C | B | Q | K | B | C | R | 1", 2);
        preenche_mapa(tabuleiro, "  +---+---+---+---+---+---+---+---+  ", 3);
        preenche_mapa(tabuleiro, "2 | P | P | P | P | P | P | P | P | 2", 4);
        preenche_mapa(tabuleiro, "  +---+---+---+---+---+---+---+---+  ", 5);
        preenche_mapa(tabuleiro, "3 |   |   |   |   |   |   |   |   | 3", 6);
        preenche_mapa(tabuleiro, "  +---+---+---+---+---+---+---+---+  ", 7);
        preenche_mapa(tabuleiro, "4 |   |   |   |   |   |   |   |   | 4", 8);
        preenche_mapa(tabuleiro, "  +---+---+---+---+---+---+---+---+  ", 9);
        preenche_mapa(tabuleiro, "5 |   |   |   |   |   |   |   |   | 5", 10);
        preenche_mapa(tabuleiro, "  +---+---+---+---+---+---+---+---+  ", 11);
        preenche_mapa(tabuleiro, "6 |   |   |   |   |   |   |   |   | 6", 12);
        preenche_mapa(tabuleiro, "  +---+---+---+---+---+---+---+---+  ", 13);
        preenche_mapa(tabuleiro, "7 | p | p | p | p | p | p | p | p | 7", 14);
        preenche_mapa(tabuleiro, "  +---+---+---+---+---+---+---+---+  ", 15);
        preenche_mapa(tabuleiro, "8 | r | c | b | q | k | b | c | r | 8", 16);
        preenche_mapa(tabuleiro, "  +---+---+---+---+---+---+---+---+  ", 17);
        preenche_mapa(tabuleiro, "    A   B   C   D   E   F   G   H    \n", 18);
    }
Mapa::~Mapa(){
}

char Mapa::retorna_caractere(int linha, int coluna){
    return(tabuleiro[linha][coluna]);
}
    



