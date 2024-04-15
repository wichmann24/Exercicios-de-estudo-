#include <iostream>
using namespace std;
int main() {

    int escolha;
    int area_pulve;
    double desconto_area;
    double desconto_valor;
    double valor_total;

    cout << "Informe a �rea de pulveriza��o: ";
    cin >> area_pulve;

    cout << "\nFa�a sua escolha de pulveriza��o:";
    cout << "\n[1] Ervas daninhas (R$ 50,00 por acre)";
    cout << "\n[2] Gafanhotos (R$ 100,00 por acre)";
    cout << "\n[3] Broca (R$ 150,00 por acre)";
    cout << "\n[4] Todas as alternativas (R$ 250,00 por acre)";
    cin >> escolha;

    switch (escolha) {
    case 1:
        cout << "\nSua escolha foi ervas daninhas";
        valor_total = area_pulve * 50.0;
        break;
    case 2:
        cout << "\nSua escolha foi gafanhotos";
        valor_total = area_pulve * 100.0;
        break;
    case 3:
        cout << "\nSua escolha foi broca";
        valor_total = area_pulve * 150.0;
        break;
    case 4:
        cout << "\nSua escolha foram todas as alternativas";
        valor_total = area_pulve * 250.0;
        break;
    default:
        cout << "\nAlternativa inv�lida";
        return 1;
    }
    if (area_pulve > 1000) {
        desconto_area = valor_total * 0.05;
        valor_total -= desconto_area;
    }
    if (valor_total > 750) {
        desconto_valor = (valor_total - 750) * 0.1;
        valor_total -= desconto_valor;
    }
    cout << "\n\nO valor total a ser pago �: R$ " << valor_total;
    return 0;
}

