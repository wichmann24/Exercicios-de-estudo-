#include <iostream>
using namespace std;

int main(){

  float nota1, nota2, nota3;

  cout << "digite a primeira nota: ";
  cin >> nota1;
  cout << "digite a segunda nota: ";
  cin >> nota2;
  cout << "digite a terceira nota: ";
  cin >> nota3;

  if(nota1 > nota2 && nota1 > nota3){
    cout << "a media ponderada e: " << (5*nota1 + 2.5*nota2 + 2.5*nota3)/ 2.5 + 5 + 2.5;
  }
  else if(nota2 > nota1 && nota2 > nota3){
    cout << "a media ponderada e: " << (5*nota2 + 2.5*nota1 + 2.5*nota3)/ 2.5 + 5 + 2.5; 
  }
  else if(nota3 > nota1 && nota3 > nota2){
    cout << "a media ponderada e: " << (5*nota3 + 2.5*nota2 + 2.5*nota1)/ 2.5 + 5 + 2.5;
  }
return 0;
}