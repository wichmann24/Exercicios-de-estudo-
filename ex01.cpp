#include <iostream>
using namespace std;
int main() {
    int base;
    float altura;
    int perimetro;
    int area;
    
    cout << "Fale uma base: ";
    cin >> base;
    cout << "Fale uma altura: ";
    cin >> altura;
    perimetro = 2 * (base + altura);
    area = base * altura;
    
    cout << "O valor do perímetro do retângulo: " << perimetro;
    cout << "\nO valor da área do retângulo: " << area;
    
    return 0;
    
}
