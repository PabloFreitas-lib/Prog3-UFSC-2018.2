/*
-------------------------------------------------------------------------------
 * -> Apresentacao do plano de ensino
-------------------------------------------------------------------------------
 * ------------------P1---------------
 * Introducao a C++
 * Encapsulamento
 * Construtores/Destrutores
 * -----------------P2----------------
 * Heranca
 * Polimorfismo
 * ------------------P3----------------
 * Templates
 * Sobrecarga de Operadores
 * ------------------------------------
 * */

/*
 * -----------------------------------------------------------------------
 --> Arquivo *.hpp

class NomeDaClasse
{
    public:
        prototipo de funcao 1;
        prototipo de funcao 2;
        .
        .
        .
        prototipo de funcao n;
        
    private:
        atributos;
};
-------------------------------------------------------------------------
--> Arquivo *.cpp ou *.cc
    Tipo NomeDaClasse :: nomeFuncao(parametro1,parametro2,...,parametroN)
    {
        intrucoes;
    }
    
        */
-------------------------------------------------------------------------------
// GradeBook.h
/*
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
    GradeBook gradeBook1("Introduction to C++ Programming");
    GradeBook gradeBook2("Data Structures in C++");
    cout << "1- gradeBook1 created for course : " << gradeBook1.getCourseName() << ".\n2- gradeBook2 created for course : " << gradeBook2.getCourseName() << "."<< endl;
    return(0);
*/
//-----------------------------------------------------------------------------
/*
 * ---------------------------ALOCACAO DINAMICA--------------------------------

 Comandos:
 -->New
 -->Delete
 tipo *ptr = new tipo[tam];
 
 ex:

float *ptrFloat = new float[5];
(TIPO) *(nome_var) = new tipo[tam];

ex2:

float *ptrFloat = new float[5];
class GradeBook *ptrGB = new clas GradeBook[3];
------------------------------------DICA---------------------------------------
    --> typedef class GradeBook GradeBook_t;
    --> GradeBook_t *ptrGB = new GradeBook_t[7];
    
    typedef class GradeBook
    {
    ....
    ....
    .....
    };
--------------------------DELETAR MEM ALOCADA----------------------------------

delete[] ptr; p/(array)
delete ptr; p/(ponteiro)
-------------------------------------------------------------------------------
