#include <iostream>
using namespace std;
int main() {
  double a, b;
  double raiz;

  cout << "Fale a numero dessa equação (ax + b = 0): ";
  cin >> a >> b;
  if(a == 0){
    cout << "Não é uma equação de segundo grau";
  }
  raiz = -b / a;
  cout << "A raiz dessa equação é: " << raiz << endl;
  return 0;
}