#include <iostream>
using namespace std;
int main() {

  char letra;

  cout << "Digite um letra: ";
  cin >> letra;

  switch(letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      cout << "/ " << letra << " / é vogal";
      break;
    default:
    cout << "/ " << letra << " / é consoante";
  }
  return 0;
}