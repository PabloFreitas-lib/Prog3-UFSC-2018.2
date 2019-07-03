 #include <iostream>

 using namespace std;

 char * setName();

 int main (void)
 {
   char* str = setName();
   cout << str;
   return 0;
 }

 char* setName (void)
 {
   static char name[80]; 	//crio como static
   cout << "Entre com seu nome: ";
   cin.getline (name, 80);
   return name;
 }









