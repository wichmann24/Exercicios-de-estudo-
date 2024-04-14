#include <iostream>
using namespace std;
int main(){
    int lado1;
    int lado2;
    int lado3;
    int perimetro;
    
    cout << "Fale um lado do triangulo: ";
    cin >> lado1;
    cout << "Fale outro lado do triangulo: ";
    cin >> lado2;
    cout << "Fale o ultimo lado do triangulo: ";
    cin >> lado3;
    perimetro = lado1 + lado2 + lado3;
    
    cout << "O perímetro do triangulo: " << perimetro;
    
    return 0;
}