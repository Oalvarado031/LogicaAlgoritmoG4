#include <iostream>

using namespace std;

int main() {
    int numeros[5];
    int i = 0;

    cout << "Ingresa 5 números enteros:\n";
    while (i < 5) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
        i++;
    }

    i = 0;
    while (i < 4) {
        int j = 0;
        while (j < 4 - i) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    cout << "Números ordenados en forma ascendente:\n";
    i = 0;
    while (i < 5) {
        cout << numeros[i] << " ";
        i++;
    }
    cout << endl;

    return 0;
}
