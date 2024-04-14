#include <iostream>
#define pi 3.14
using namespace std;
int main(){
    int raio;
    float perimetro;
    float area;
    
    cout << "Fale o raio: ";
    cin >> raio;
    perimetro = 2 * pi * raio;
    area = pi * (raio * raio);
    
    cout << "O valor da área do circulo: " << area << endl;
    cout << "O valor do perímetro do circulo: " << perimetro;
    
    return 0;
}