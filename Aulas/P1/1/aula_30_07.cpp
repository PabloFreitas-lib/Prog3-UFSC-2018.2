/*
----------------------------------------------------------------Anotacoes de aula 31/07------------------------------------------------------------------------------------------


--> #include <stdio.h> equivale a #include <iostream> em C++

    g++ aula_30_07.cpp -o teste
    ./teste

*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*

#include <iostream>
int main(void){
    int number1,number2,sum;
    std::cout << "Entre com o primeiro inteiro: ";
    std::cin >> number1;
    std::cout << "Entre com o segundo inteiro: ";
    std::cin >> number2;
    sum = number1 + number2;
    std::cout << "A soma eh" << sum << std::endl;
    return(0);
}

*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/* Criar um programa em C++ que compare 2 inteiros. A saida devera informar se:
 --> são iguais
 --> diferentes
 --> number1 < number2
 --> number1 > number2
 --> number1 <= number2
 --> number1 >= number2
 
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*

#include <iostream>
using namespace std;
int main(void){

    int n1,n2;
    cout << "Entre com o primeiro inteiro: ";
    cin >> n1;
    cout << "Entre com o segundo inteiro: ";
    cin >> n2;
    if(n1 == n2)
    cout << n1 << " == " << n2 << endl;
    if(n1 != n2)
    cout << n1 << " != " << n2 << endl;
    if(n1 < n2)
    cout << n1 << " < " << n2 << endl;
    if(n1 > n2)
    cout << n1 << " > " << n2 << endl;
    if(n1 <= n2)
    cout << n1 << " <= " << n2 << endl;
    if(n1 >= n2)
    cout << n1 << " >= " << n2 << endl;
    
    return(0);
}
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
 * Metodos:
 * -publicos
 * -protegidos
 * -privados
 * 
 * Atributos:
 * -publicos
 * -protegidos
 * -privados
 * 
 */
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>
#include <string>

using namespace std;

class GradeBook{
    public:   
    GradeBook();  // CODIGO NAO RODA SEM ISSO
    ~GradeBook();// CODIGO NAO RODA SEM ISSO
    void setCourseName(string);
    string getCourseName(void);
    void displayMessage(void);
    
    private:
    string courseName;
};

GradeBook::GradeBook()// CODIGO NAO RODA SEM ISSO
{
}
GradeBook::~GradeBook()// CODIGO NAO RODA SEM ISSO
{
}
void GradeBook::setCourseName(string name){
    courseName = name;  
}
    
string GradeBook::getCourseName(void){
    return(courseName);
}
    
void GradeBook::displayMessage(void){
    cout << "Welcome to the Grade Book for\n " << courseName << "!" << endl;   
}
    
int main(void){
    string nameOfCourse;
    GradeBook myGradeBook;
    cout << "Please enter the course name : " << endl;
    getline(cin,nameOfCourse); // pega linha completa 
    myGradeBook.setCourseName(nameOfCourse);
    cout << endl;
    myGradeBook.displayMessage();
    cout << "Name of course:  " << myGradeBook.getCourseName() << endl;

    return(0);
}
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//                                                                          Metodo construtor


#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
    public: 

        GradeBook(string name){ // construtor com parametro de inicializacao
            setCourseName(name);   
        }
    
        void setCourseName(string name){
            courseName = name;  
        }
        
        string getCourseName(void){
            return(courseName);
        }
        
        void displayMessage(string courseName){
            cout << "Welcome to the Grade Book for\n " << courseName << "!" << endl;   
        }
    
    private:
        
        string courseName;
};

int main(void){
    GradeBook gradeBook3();
    GradeBook gradeBook1("Introduction to C++ Programming");
    GradeBook gradeBook2("Data Structures in C++");
    cout << "1- gradeBook1 created for course : " << gradeBook1.getCourseName() << ".\n2- gradeBook2 created for course : " << gradeBook2.getCourseName() << "."<< endl;
    gradeBook3.setCourseName("Teste")
    cout << "Teste" << gradeBook3.getCourseName() << endl;
    return(0);
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*                                                                   Exercicio p/casa
 * 
 * 
 * Faca um programa que contenha uma classe que representa um funcionario, registrando seu nome, salario, data de admissao e departamento.
 * Crie uma classe que representa uma empresa, registrando seu nome e CNPJ. Todos os atributos como privados. Crie metodos "set", "get" e contrutor. Faca "main() que : 
 * Crie uma empresa;
 * Adicione alguns funcionarios.
 * De aumento de 10% para um determinado departamento.
 * Fonte: Professor Carlos E batista. Adaptado.
 * */
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
