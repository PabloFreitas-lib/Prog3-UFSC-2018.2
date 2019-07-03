#ifndef MAPA_HPP
#define MAPA_HPP

#include <iostream>
#include <string>

using namespace std;

class Mapa{
    friend bool teste(const char &, const int &, const int &, const int &, const int &, Mapa &);
    friend void imprime_mapa(const Mapa &);
    friend void preenche_mapa(char m[20][38], string text, int lin);
    friend class Pecas;
    friend class Bispo;
    friend class Cavalo;
    friend class Peao;
    friend class Rainha;
    friend class Rei;
    friend class Torre;
    friend class Pecas_arq;
    friend class Peao_arq;
public:
    Mapa();
    ~Mapa();
    char retorna_caractere(int, int);
private:
    char tabuleiro[20][38];
    int linhas;
    int colunas;

};


/*
 * Mapa:
     1234567891234567891234567891234567891  = 38 (\n)
   1     A   B   C   D   E   F   G   H    \n
   2   +---+---+---+---+---+---+---+---+  \n
   3 1 | R | C | B | Q | K | B | C | R | 1\n
   4   +---+---+---+---+---+---+---+---+  \n
   5 2 | P | P | P | P | P | P | P | P | 2\n
   6   +---+---+---+---+---+---+---+---+  \n
   7 3 |   |   |   |   |   |   |   |   | 3\n
   8   +---+---+---+---+---+---+---+---+  \n
   9 4 |   |   |   |   |   |   |   |   | 4\n
   1   +---+---+---+---+---+---+---+---+  \n
   2 5 |   |   |   |   |   |   |   |   | 5\n
   3   +---+---+---+---+---+---+---+---+  \n
   4 6 |   |   |   |   |   |   |   |   | 6\n
   5   +---+---+---+---+---+---+---+---+  \n
   6 7 | P | P | P | P | P | P | P | P | 7\n
   7   +---+---+---+---+---+---+---+---+  \n
   8 8 | R | C | B | Q | K | B | C | R | 8\n
   9   +---+---+---+---+---+---+---+---+  \n
   1     A   B   C   D   E   F   G   H    \n
   =
   19

   Posições na matriz
   A1 = [2][4]; A2 = [4][4] ... A8 = [16][4]
   B1 = [2][8]; B2 = [4][8] ... B8 = [16][8]
   C1 = [2][12]; C2 = [4][12] ... C8 = [16][12]
   ...           ...          ...
   H1 = [2][32]; H2 = [4][32] ... H8 = [16][32]R
   */

/*
 * Menu:  
 *  ___       ___           ____            _________       ___________       ___________    _______________
 *  \  \     /  /          /    \          |   ____   \    |  ______   |     |   ________|  |_________      |
 *   \  \   /  /          /  /\  \         |  |    \   \   |  |     |  |     |  |                     )    )
 *    \  \ /  /          /  /  \  \        |  |     \   )  |  |     |  |     |  |                   (    (
 *     \     /          /  /____\  \       |  |      )  |  |  |_____|  |     |  |________          )    ) 
 *     /     \         /  ________  \      |  |      )  |  |  |_____   |     |   ________|       (    (
 *    /  / \  \       /  /        \  \     |  |     /   )  |  |     \  \     |  |               )    ) 
 *   /  /   \  \     /  /          \  \    |  |____/   /   |  |      \  \    |  |________     (    (________
 *  /  /     \  \   /  /            \  \   |          /    |  |       \  \   |           |   |              |
 * '--'       '--' '--'              '--'  '---------'     '--'        '--'  '-----------'   '--------------'
 */

#endif
