#include <iostream>
using namespace std;
int main() {

  float nota[5];

  cout << "Fale a primeira nota: ";
  cin >> nota[0];
  cout << "Fale a segunda nota: ";
  cin >> nota[1];
  cout << "Fale a terceira nota: ";
  cin >> nota[2];
  cout << "Fale a quarta nota: ";
  cin >> nota[3];
  cout << "Fale a quinta nota: ";
  cin >> nota[4];

  if(nota[0] >= 70 && nota[1] >= 70 && nota[2] >= 70 && nota[3] >= 70 && nota[4] >= 70){
    cout << "Você passou em todos os exames";
  }
  else if(nota[0] >= 70 && nota[1] >= 70 && nota[3] >= 70){
    cout << "Você passou nos exames I, II e IV e não passou na III e V";
  }
  else if(nota[0] >= 70 && nota[1] >= 70 && (nota[2] >= 70 || nota[3] >= 70)){
    cout << "Você passou nos exames I, II, III ou IV, mas não no V";
  }
  else{
    cout << "Reprovado em todos os exames";
  }
  return 0;
}