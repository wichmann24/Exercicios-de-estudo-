#include <iostream>
using namespace std;
int main(){
    float r1, r2, r3, resistencia_equivalente;
    float resistencia_paralelo

  
    cout << "Digite o valor da resistência R1: ";
    cin >> r1;
    cout << "Digite o valor da resistência R2: ";
    cin >> r2;
    cout << "Digite o valor da resistência R3: ";
    cin >> r3;
    resistencia_paralelo = (r1 * r2) / (r1 + r2);
    resistencia_equivalente = resistencia_paralelo + r3;
    
    cout << "A resistência equivalente do circuito é: " << resistencia_equivalente << " ohms";

    return 0;
}

    
    
     