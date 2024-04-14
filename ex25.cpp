#include <iostream>
using namespace std;
int main() {
  
  int mes;

  cout << "Fale o mês de 1 a 12: ";
  cin >> mes;

  switch(mes){
    case 1:
      cout << "Janeiro 31 dias";
      break;
    case 2:
      cout << "Fevereiro 29 dias";
      break;
    case 3:
      cout << "Março 31 dias";
      break;
    case 4:
      cout << "Abril 30 dias";
      break;
    case 5:
      cout << "Maio 31 dias";
      break;
    case 6:
      cout << "Junho 30 dias";
      break;
    case 7:
      cout << "Julho 31 dias";
      break;
    case 8:
      cout << "Agosto 31 dias";
      break;
    case 9:
      cout << "Setembro 30 dias";
      break;
    case 10:
      cout << "Outubro 31 dias";
      break;
    case 11:
      cout << "Novembro 30 dias";
      break;
    case 12:
      cout << "Dezembro 31 dias";
      break;
    default:
      cout << "Numero invalida";
  }
return 0; 
}