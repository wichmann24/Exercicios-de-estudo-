#include <iostream>
using namespace std;
int main(){
    int lado;
    int perimetro;
    int area;
    
    cout << "Fale os lados do quadrado: ";
    cin >> lado;
    perimetro = 4 * lado;
    area = lado * lado;
    
    cout << "A área do quadrado: " << area << endl;
    cout << "O perímetro de quadrado: " << perimetro;
    
    return 0;
}