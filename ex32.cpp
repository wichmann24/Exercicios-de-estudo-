#include <iostream>
using namespace std;
int main() {
  
  char caracter;

  cout << "Fale qualquel caracter: ";
  cin >> caracter;

  if(caracter >= 'a' && caracter <= 'z' || caracter >= 'A' && caracter <= 'Z'){
    if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' || caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U'){
      cout << "/ " << caracter << " / é vogal!";
    }
  else{
    cout << "/ " << caracter << " / é consoante!";
  }
  }
  else if(caracter >= '0'){
    cout << "É um numero!";
  }
  else{
    cout << "/ " << caracter << " / é um simbolo!";
  }
  return 0;
}