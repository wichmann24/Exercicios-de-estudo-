#include <iostream>
using namespace std;

int main() {

  int valor1, valor2, valor3;

  cout << "digite o primeiro valor; ";
  cin >> valor1;
  cout << "digite o segundo valor: ";
  cin >> valor2;
  cout << "digite o terceiro valor: ";
  cin >> valor3;

  if (valor1 > valor2 && valor1 > valor3) {
    cout << "a soma dos dois maiores valores é: " << valor1 + valor2;
  } else if (valor2 > valor1 && valor2 > valor3) {
    cout << "a soma dos dois maiores valores é: " << valor2 + valor3;
  } else if (valor3 > valor1 && valor3 > valor2) {
    cout << "A soma dos dois maiores valores é: " << valor3 + valor1;
  }
  return 0;
}