#include <iostream>
using namespace std;
int main(){
    float nota1, nota2, nota3, nota4;
    float bimestre1, bimestre2;
    float semestre;
    
    cout << "Fale uma nota: ";
    cin >> nota1;
    cout << "Fale outra nota: ";
    cin >> nota2;
    cout << "Fale mais uma nota: ";
    cin >> nota3;
    cout << "Fale a ultima nota: ";
    cin >> nota4;
    bimestre1 = (nota1 + nota2) / 2;
    bimestre2 = (nota3 + nota4) / 2;
    semestre = (bimestre1 + bimestre2) / 2;
    
    cout << "Sua nota do semestre vai ser: " << semestre;
    
    return 0;
}