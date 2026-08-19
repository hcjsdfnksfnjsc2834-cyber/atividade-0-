#include <iostream>
using namespace std;

int main() {
    int numeros[5];
    int soma = 0;

   
    for (int i = 0; i < 5; i++) {
        cout << "Digite o número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++) {
        soma = soma + numeros[i];
    }

    cout << "A soma total é: " << soma << endl;

    return 0;
}