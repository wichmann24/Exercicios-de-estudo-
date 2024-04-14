#include <iostream>
using namespace std;
int main(){
    int numero;
    int sucessor;
    
    cout << "Fale um numero: ";
    cin >> numero;
    sucessor = numero + 1;
    
    cout << "O sucessor de " << numero << " é " << sucessor;
    
    return 0;
}