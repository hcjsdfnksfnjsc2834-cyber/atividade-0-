#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int contador = 0;

    cout << "Digite um texto: ";
    getline(cin, texto);

    for (int i = 0; i < texto.length(); i++) {
        contador++;
    }

    cout << "A string tem " << contador << " caracteres." << endl;

    return 0;
}