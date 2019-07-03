#include "SafeArray.hpp"

int main()
{
    SafeArray array1(3);
    cout << "Entre com os valores p/ array:" << endl;
    cin >> array1;
    cout << "array1 = " << array1;

    cout << "posição 1 é: " << array1[1] << endl;
    cout << "posição -1 é: " << array1[-1] << endl;
    cout << "posição 4 é: " << array1[4] << endl;

    SafeArray array2(3);
    cout << "array1 = " << array1;
    cout << "array2 = " << array2;
    cout << "Arrays iguais? " << ((array1 == array2)? " sim" : " não") << endl;
    cout << "Arrays diferentes? " << ((array1 != array2)? " sim" : " não") << endl;

    array2 = array1;
    cout << "array1 = " << array1;
    cout << "array2 = " << array2;
    cout << "Arrays iguais? " << ((array1 == array2)? " sim" : " não") << endl;
    cout << "Arrays diferentes? " << ((array1 != array2)? " sim" : " não") << endl;

    SafeArray array3(array2);
    cout << "array3 = " << array3;
    cout << "array2 = " << array2;
    cout << "Arrays iguais? " << ((array3 == array2)? " sim" : " não") << endl;
    cout << "Arrays diferentes? " << ((array3 != array2)? " sim" : " não") << endl;

    return 0;
}
