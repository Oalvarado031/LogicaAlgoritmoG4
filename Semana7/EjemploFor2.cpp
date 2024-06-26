#include <iostream>

using namespace std;

#define MAX 5

int numeros[MAX];
int fila;

void agregar(int num);

void mostrar();

main(){
    int cant;
    int num;

    cout << "Dime cuantos numeros desea ingresar: ";
    cin >> cant;

    for (int i = 0; i < cant; i++)
    {
        cout << "Dime un numero: ";
        cin >> num;
        agregar(num);
    }

    cout << "Mostrar elementos\n";
    mostrar();
}

void agregar(int num){
    if (fila >= MAX)
    {
        cout << "No se pueden agregar más numeros" << endl;
    } else{
        numeros[fila] = num;
        fila++;
    }
}

void mostrar(){
    if (fila == 0){
        cout << "No hay elementos" << endl;
    } else {
        for (int i = 0; i < fila; i++)
        {
            cout << numeros[i] << endl;
        }
    }
}