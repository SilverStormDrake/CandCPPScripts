#include <iostream>

using namespace std;

int main(){

    int a = 7;
    int *pa = &a; 

    cout << pa << endl; // Endereço
    cout << *pa << endl; // Valor no Endereço
    
    return 0;
}