#include <iostream>
#define pi 3.14
using namespace std;
int main(){
    int raio;
    float altura;
    double volume;
    
    cout << "Fale o raio do cilindro: ";
    cin >> raio;
    cout << "Fale a altura do cilindro: ";
    cin >> altura;
    volume = pi * (raio * raio) * altura;
    
    cout << "O volume da lata do oil: " << volume;
    
    return 0;
}