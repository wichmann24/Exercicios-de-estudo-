#include <iostream>
using namespace std;
int main(){
    int idade;
    int dias;
    int meses;
    int anos;
    
    cout << "Fale sua idade em dias: ";
    cin >> idade;
    anos = idade / 365;
    meses = (idade % 365) / 30;
    dias = (idade % 365) % 30;
    
    cout << "Sua idade em dias: " << dias << "\n";
    cout << "Sua idade em meses: " << meses << "\n";
    cout << "SUa idade em anos: " << anos << "\n";
    
    return 0;
}