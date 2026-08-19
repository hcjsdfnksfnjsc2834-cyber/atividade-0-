#include <iostream>
using namespace std;

int main() {
    int opcao;
    double temperatura, resultado;

    cout << "=== Conversor de Temperatura ===" << endl;
    cout << "1 - Celsius para Fahrenheit" << endl;
    cout << "2 - Fahrenheit para Celsius" << endl;
    cout << "Escolha uma opção: ";
    cin >> opcao;

    cout << "Digite a temperatura: ";
    cin >> temperatura;

    if (opcao == 1) {
        resultado = (temperatura * 9.0 / 5.0) + 32;
        cout << temperatura << "°C equivale a " << resultado << "°F" << endl;
    } 
    else if (opcao == 2) {
        resultado = (temperatura - 32) * 5.0 / 9.0;
        cout << temperatura << "°F equivale a " << resultado << "°C" << endl;
    } 
    else {
        cout << "Opção inválida!" << endl;
    }

    return 0;
}