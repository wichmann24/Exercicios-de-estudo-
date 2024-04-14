#include <iostream>
using namespace std;
int main(){

  int valor1, valor2;
  int permuta;

  cout << "Primeiro valor: ";
  cin >> valor1;
  cout << "Segundo valor: ";
  cin >> valor2;

  permuta = valor1;
  valor1 = valor2;
  valor2 = permuta;

  cout << "A permuta foi feita o valores ficaram: " << valor1 << " e " << valor2;
  
  return 0;
}