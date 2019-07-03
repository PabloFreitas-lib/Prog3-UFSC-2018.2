/*
 * Construa um programa (main) que aloque em tempo de execução (dinamicamente) uma matriz de
ordem m x n (linha por coluna).
Agora, aproveite este programa para construir uma função que recebendo os parametros m e n aloque
uma matriz de ordem m x n e retorne um ponteiro para esta matriz alocada.*
*/

#include <iostream>

using namespace std;

int ** matriz(int l, int c){

    int **ptr = new int*[c];
    for(int i =0 ; i < c ; i++){
     ptr[i] = new int[l];
    }
    if(ptr!=NULL)
        cout << "Alocacao feita com sucesso! " << "\n";
    return(ptr);
}

void destroy (int ** ptr,int n,int m)
{
    for(int i=0;i<m;i++)
    delete []ptr[i];
    delete []ptr;
}

int main(void)
{
int m,n;
 cout << "Entre com Linhas X Colunas " << "\n";
 cin >> m >> n;
 int **ptr = matriz(n,m);
 destroy(ptr,n,m);
 return(0);
}



   //valgrind --leak-check=yes ./ptr
   // g++ *.cpp -o ptr -g -Wall;./ptr
