#include <iostream>
using namespace std;
int main() {
  
  float salario;
  double valor_desconto;
  float desconto = 11;
  
  cout << "Fale o salario do funcionario: ";
  cin >> salario;

  valor_desconto = (salario * desconto) / 100;

  if(valor_desconto <= 334.29){
    cout << "O seu salario ficou: " << salario << " R$ com desconto previdenciário de: " << valor_desconto << " R$";
  }
  else{
    cout << "O seu salario ficou: " << salario << " R$ você não tem desconto!";
  }
  return 0;
}