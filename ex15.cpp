#include <iostream>
using namespace std;
int main(){
   double altura_pessoa;
   double sombra_pessoa;
   double sombra_predio;
   double altura_predio;
   
   cout << "Fale a sua altura: ";
   cin >> altura_pessoa;
   cout << "Fale a comprimento da sua sombra: ";
   cin >> sombra_pessoa;
   cout << "Fale a comprimento da sombra predio: ";
   cin >> sombra_predio;
   altura_predio = (sombra_predio * altura_pessoa) / sombra_pessoa;
   
   cout << "A altura do predio: " << altura_predio;
   
   return 0;
}