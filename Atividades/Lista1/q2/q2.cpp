/*
 * Faça uma função que receba um valor n e crie dinamicamente um vetor de n elementos e retorne
um ponteiro.

Crie uma função que receba um ponteiro para um vetor e um valor n e imprima os n
elementos desse vetor.

Construa também uma função que receba um ponteiro para um vetor e libere
esta área de memória.

Ao final, crie uma função principal que leia um valor n e chame a função criada
acima.

Depois, a função principal deve ler os n elementos desse vetor.
Então, a função principal deve chamar a função de impressão dos n elementos do vetor criado e, finalmente, liberar a memória
alocada através da função criada para liberação.
*/

#include <iostream>
using namespace std;

int * create(int n)
{
    int *ptr = new int[n];
    return(ptr);
}
void display(int *vetor,int n)
{
    
    for(int i=0 ; i < n ; i++ ){
        cout << i << " -->" << endl;
            cin >> vetor[i];    
    }
    for(int i=0 ; i < n ; i++ ){
        cout << "Vetor["<< i <<"]: "<< vetor[i] << " .\n" << endl;    
    }
}

void destroy(int *ptr)
{
    delete []ptr;
}


int main(void)
{
   int n;
   cout << " Entre com o tamanho do vetor " << endl;
   cin >> n;
   int *ptr = create(n);
   display(ptr,n);
   destroy(ptr);
   
return(0);
}
