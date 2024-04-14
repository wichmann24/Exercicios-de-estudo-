#include <iostream>
using namespace std;
int main() {

  int num;
  
  cout << "A semana começa no domingo!";
  cout << "\n\nDigite um numero: ";
  cin >> num;

  if(num == 1){
    cout << "\nDomingo";
  }
  else if (num == 2){
    cout << "\nSegunda";
  }
  else if (num == 3){
    cout << "\nTerça";
  }
  else if (num == 4){
    cout << "\nQuarta";
  }
  else if (num == 5){
    cout << "\nQuinta";
  }
  else if (num == 6){
    cout << "\nSexta";
  }
  else if (num == 7){
    cout << "\nSabado";
  }
  else{
    cout << "\nSemana não existe!";
  }
  return 0;
}