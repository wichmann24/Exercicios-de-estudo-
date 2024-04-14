#include <iostream>
using namespace std;
int main(){
    
    int velocidade1;
    int velocidade2;
    
    cout << "Fale uma velocidade em m/s: ";
    cin >> velocidade1;
    velocidade2 = velocidade1 * 3.6;
    
    cout << "A velocida em km/h: " << velocidade2;
    
    return 0;
}
