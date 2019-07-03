#include "Lista.hpp"
#include <iostream>
using namespace std;

int main(){
    int e[10];
    
    for( int i=0; i<10; ++i){
        e[i] = i;
    }
    
    Lista<int> Plabo(e, 10);
    
    
    return 0;
}
 
