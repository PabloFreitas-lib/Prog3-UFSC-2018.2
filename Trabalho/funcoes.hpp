#ifndef FUNCOES_HPP
#define FUNCOES_HPP

#include "mapa.hpp"
#include <iomanip> // Bilbioteca ignore

using namespace std;

// Funções da entrada (2)
// Imprime o mapa com as devidas cores
void imprime_mapa(const Mapa &);

// Auxiliar para preencher o mapa com as strings
void preenche_mapa(char [20][38], string , long unsigned int );

// Realiza a conversão da entrada numérica (1-8)
// para uma posição correspondente na matriz
int posicao_vert(const int &);

// Realiza a conversão da entrada de caractere (a-h)
// para uma posição correspondente na matriz
int posicao_hor(const char &);

// Recebe a entrada do usuário e as insere nas devidas variáveis
void entrada_usuario(char &, char &, char &, int &, int &);

// Verifica se o comando entrado está dentro do tabuleiro
bool entrada_pertence_tabuleiro(const char &, const char &, const char &, const int &, const int &);

// Movimenta uma peça (teste)
bool teste(const char &, const int &, const int &, const int &, const int &, Mapa &);

// Menu (Imprime a palavra "Xadrez"
void imprime_nome_jogo(void);

// Menu de instruções
void instrucoes_jogadores(void);

//-------------------------------------------------------------------------------------------------------//
//Funções da entrada (1)
#endif
