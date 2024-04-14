#include <iostream>
using namespace std;
int main() {
  int num;

  cout << "Fale um numero: ";
  cin >> num;
  if (num > 0){
    cout << "O numero é positivo";
  }
  else if(num < 0){
    cout << "O numero é negativo";
  }
  else{
    cout << "O numero é zero";
  }
  return 0;
}