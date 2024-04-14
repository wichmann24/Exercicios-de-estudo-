#include <iostream>
using namespace std;
int main() {

  double renda_mensal;
  double emprestimo_solic;
  double prestaçoes;

  cout << "Me diga sua renda mensal: ";
  cin >> renda_mensal;
  cout << "Qual o valor do emprestimo solicitado: ";
  cin >> emprestimo_solic;
  cout << "Quantas prestações: ";
  cin >> prestaçoes;

  if (emprestimo_solic <= renda_mensal * 10 &&
      (emprestimo_solic / renda_mensal) <= prestaçoes * 0.3) {
    cout << "\nSeu emprestimo foi concedido!";
  } else {
    cout << "\nSeu emprestimo não foi concedido!";
  }
  return 0;
}