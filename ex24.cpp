#include <iostream>
using namespace std;
int main() {
  
  int num1, num2, num3;

  cout << "Fale o primeiro numero: ";
  cin >> num1;
  cout << "Fale o segundo numero: ";
  cin >> num2;
  cout << "Fale o ultimo numero: ";
  cin >> num3;

  if (num1 > num2 && num1 > num3){
    cout << "O numero " << num1 << " é o maior!";
  }
  else if(num2 > num1 && num2 > num3){
    cout << "O numero " << num2 << " é o maior!";
  }
  else if(num3 > num2 && num3 > num1){
    cout << "O numero " << num3 << " é o maior!";
  }
  else{
    cout << "Numeros iguais!";
  }
  return 0;
}