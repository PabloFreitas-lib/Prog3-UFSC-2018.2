/**
* Exemplo de como trabalhar com exceptions
* Exceptions são um recurso da linguagem que permite identificar um comportamento atípico de um programa e tratá-lo
* Neste exemplo é forçado um erro na alocação dinâmica de memória a fim de mostrar como o programa se comporta com e sem o tratamento de excessões
*/
//---------------------------------------------------------------------------------------------------------------------------------------------------------------
/// Chamada das bibliotecas
#include <iostream>
#include <exception>

using namespace std; /// Permite utilizar dos recursos da biblioteca padrão de forma simplificada (cin, cout, cerr, clog etc)
//---------------------------------------------------------------------------------------------------------------------------------------------------------------
/// Protótipos das funções
int * alocacaoComExcessao(void);
int * alocacaoSemExcessao(void);
void destroi(int * &myarray);

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

int * alocacaoComExcessao(void)
{
    int * myarray = NULL;
    /// o bloco de instruções subsequente ao comando "try" corresponde aos comandos que o programa tentará executar
    try
    {
        /// tenta uma alocação
        /// comente a linha 56 ou 57 para comutar entre uma má alocação e boa alocação
        //int* myarray= new int[500000000000000000000000000000000000000000000000000000];
        myarray = new int[5];
    }
    /// o comando "catch (exception & e)" regasta a exceção, que o será dada pelo SO, dessa forma pode-se saber qual foi a exceção e assim aplicar uma ação
    catch (exception & e)
    {
        cout << "Standard exception: " << e.what() << endl; /// neste caso só está sendo impresso na tela
        return NULL; /// retorna nulo caso não seja possível a alocação dinâmica
    }
    return myarray;
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------
int * alocacaoSemExcessao(void)
{
    return new int[5];
}

/// Função utilizada para liberar espaço de memória
void destroi(int * & myarray)
{
    /// compile com o valgrind e observe o erro de alocação de memória causado pelo uso simples do delete
    //  delete myarray;
    delete [] myarray;
    myarray = NULL;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------
int main (void)
{
    int * myarray1 = alocacaoComExcessao();
    if(myarray1 != NULL)
    {
        for(int i=0; i<5; i++)
        {
            myarray1[i] = 5-i;
        }

        for(int i=0; i<5; i++)
        {
            cout << myarray1[i] << " ";
        }
    }
    cout << endl;
    destroi(myarray1);

    /// observe que até esse ponto, independente da ocorrência de uma excessão, o programa continua a funcionar e retorna 0 para o SO
    /// comente a linha 38 para testar a alocação sem tratamento de excessão
    return 0;

    int * myarray2 = alocacaoSemExcessao();
    alocacaoSemExcessao();
    destroi(myarray2);

    /// sem o tratamento de excessão o programa não executa os comandos até aqui, no caso da ocorrência de uma excessão; o que ocorre é que a execução é abortada na alocação dinâmica fracassada
    return 0;
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------
