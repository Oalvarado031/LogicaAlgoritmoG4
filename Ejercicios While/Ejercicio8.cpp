#include <iostream>

using namespace std;

int main() {
    int count = 0;
    int pares = 0, impares = 0;
    int numeros[10] = {};

    while (count < 10) {
        cout << "Escribe numeros (maximo 10): ";
        cin >> numeros[count];
        count++;
    }
    
    int i = 0;

    while (i < count) {
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        i++;
    }

    cout << "Hay " << pares << " numeros pares";
    cout << "\nHay " << impares << " numeros impares";

    return 0;
}
