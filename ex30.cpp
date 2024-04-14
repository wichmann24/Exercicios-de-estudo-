#include <iostream>
#define alcool  1.90
#define gasolina 2.70
using namespace std;
int main() {
  
  char escolha;
  float litro;
  float desconto;
  float soma_litro;
  
  cout << "Escolha sua gasolina";
  cout << "\n[A] = alcool \n[B] = gasolina\n";
  cin >> escolha;
  
  switch(escolha){
    case 'a':
    case 'A':
      cout << "Quantos litros você vai querer de alcool: ";
      cin >> litro;
      soma_litro = alcool * litro;
      
      if(litro <= 25){
        desconto = (2 * soma_litro) / 100;
        cout << "\nO valor ficou: " << soma_litro << " R$" << " com desconto de: " << desconto << " R$";
      }
      else if(litro > 25){
        desconto = (4 * soma_litro) / 100;
        cout << "\nO valor ficou: " << soma_litro << " R$" << " com desconto de: " << desconto << " R$";
      }
    break;
    case 'b':
    case 'B':
      cout << "Quantos litro você vai querer de gasolina: ";
      cin >> litro;
      soma_litro = gasolina * litro;
      
      if(litro <= 25){
        desconto = (3 * soma_litro) / 100;
        cout << "\nO valor ficou: " << soma_litro << " R$" << " com desconto de: " << desconto << " R$";
      }
      else if (litro > 25){
        desconto = (5 * soma_litro) / 100;
        cout << "\nO valor ficou: " << soma_litro << " R$" << " com desconto de: " << desconto << " R$";
      }
  }
  return 0;
}