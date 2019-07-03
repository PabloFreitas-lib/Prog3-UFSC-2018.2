#include <iostream>

using namespace std;

#define COLOR_RED		cout << "\x1B[31m";
#define COLOR_RST		cout << "\x1B[0m";
#define error_msg(msg) {COLOR_RED cerr << msg << " " << __FILE__ << ":" << __LINE__ << endl; COLOR_RST}

#define COLUNAS	2
#define LINHAS	4

int** criaMatriz(int lin=LINHAS,int col=COLUNAS);
void deletaMatriz(int** & mat, int col=COLUNAS);
void imprimeMatriz(int** mat, int lin=LINHAS, int col=COLUNAS);
void inicializaMatriz(int** & mat, int lin=LINHAS, int col=COLUNAS);

int main(void)
{
    //int** matriz = criaMatriz();
    inicializaMatriz(matriz);
    imprimeMatriz(matriz);
    deletaMatriz(matriz);
    return 0;
}

int** criaMatriz(int col, int lin)
{
    int** mat = NULL;
    try
    {
        mat = new int*[lin]; // criou as linhas (vazias)
    }
    catch(exception & e)
    {
        error_msg("Nao foi possivel alocar a matriz");
        cout << "Exception: " << e.what() << endl;
        return NULL;
    }
    for(int i=0; i<col; i++)
    {
        try
        {
            mat[i] = new int[col]; // criou uma coluna (vazia)
        }
        catch(exception & e)
        {
            error_msg("Nao foi possivel alocar uma das colunas da matriz");
            cout << "Exception: " << e.what() << endl;
            for(int j=0; j<i; j++)
            {
                delete [] mat[j];   // deleta todas as colunas antes criadas (libera a memoria)
            }
            delete [] mat;
            return NULL;
        }
    }
    return mat;
}

void deletaMatriz(int** & mat, int col)
{
    for(int i=0; i<col; i++)
    {
        delete [] mat[i];
    }
    delete [] mat;
    mat = NULL;
}

void imprimeMatriz(int** mat, int lin, int col)
{
    for(int i=0; i<lin; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << " " << mat[i][j];
        }
        cout << endl;
    }
}

void inicializaMatriz(int** & mat, int lin, int col)
{
    cout << "Entre com valores dos elementos da matriz. De cima para baixa, da esquerda para direita: " << endl;
    for(int i=0; i<lin; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> mat[i][j];
        }
    }
}
