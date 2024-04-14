#include <iostream>
using namespace std;
int main(){
    int fahrenheit;
    int celsius;
    
    cout << "Fale a temperatura em fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    
    cout << "A temperatura em celsius: " << celsius << "°";
    
    return 0;
}