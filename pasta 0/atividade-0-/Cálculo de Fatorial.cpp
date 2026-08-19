#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Digite um número inteiro positivo: ";
    cin >> n;

    cout << "Fatores primos de " << n << ": ";

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }

    cout << endl;
    return 0;
}