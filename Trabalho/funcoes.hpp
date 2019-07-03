#ifndef FUNCOES_HPP
#define FUNCOES_HPP

#include "mapa.hpp"
#include <iomanip> // Bilbioteca ignore

using namespace std;

// Fun��es da entrada (2)
// Imprime o mapa com as devidas cores
void imprime_mapa(const Mapa &);

// Auxiliar para preencher o mapa com as strings
void preenche_mapa(char [20][38], string , long unsigned int );

// Realiza a convers�o da entrada num�rica (1-8)
// para uma posi��o correspondente na matriz
int posicao_vert(const int &);

// Realiza a convers�o da entrada de caractere (a-h)
// para uma posi��o correspondente na matriz
int posicao_hor(const char &);

// Recebe a entrada do usu�rio e as insere nas devidas vari�veis
void entrada_usuario(char &, char &, char &, int &, int &);

// Verifica se o comando entrado est� dentro do tabuleiro
bool entrada_pertence_tabuleiro(const char &, const char &, const char &, const int &, const int &);

// Movimenta uma pe�a (teste)
bool teste(const char &, const int &, const int &, const int &, const int &, Mapa &);

// Menu (Imprime a palavra "Xadrez"
void imprime_nome_jogo(void);

// Menu de instru��es
void instrucoes_jogadores(void);

//-------------------------------------------------------------------------------------------------------//
//Fun��es da entrada (1)
#endif
