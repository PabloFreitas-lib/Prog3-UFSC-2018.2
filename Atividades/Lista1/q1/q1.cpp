/*
 * Faça um programa que leia um valor n e crie dinamicamente um vetor de n elementos e passe esse
vetor para uma função que vai ler os elementos desse vetor. Depois, no programa principal, o vetor
preenchido deve ser impresso. Além disso, antes de finalizar o programa, deve-se liberar a área de
memória alocada.*/

#include <iostream>
#include <string>
using namespace std;

void setVetor(int *num,int n)
{
    for(int i =0 ; i < n; i++){
        cout << "Posicao " << i <<" ." << endl;
        cin >> num[i];
    }
}
void display(int *vetor,int n){
    for(int i=0; i< n;i++){
    cout << "Numeros em sequencia : " << vetor[i] <<" .\n" << endl;
    }
}

int main(void)
{
    int n;
    cout << "Entre com o valor do tamanho do vetor" << endl;
    cin >> n;

    int *vetor = new int[n];
    cout << "Entre com os valores do vetor" << endl;
    setVetor(vetor,n);
    
    display(vetor,n);
    
    delete [] vetor;

return(0);
}
