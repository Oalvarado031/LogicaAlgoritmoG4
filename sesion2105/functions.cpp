#include <iostream>
#include "variables.h"

using namespace std;


void addReg();
void showReg();
int menu();

int main(){
    menu();
}
void addReg(){
    cout << "\nDatos del estudiante " << endl;
    cout << "CIF: ";
    scanf(" %[^\n]", people[pos].cif);
    cout << "Nombres: ";
    scanf(" %[^\n]", people[pos].name);
    cout << "Apeliidos: ";
    scanf(" %[^\n]", people[pos].lastName);
    cout << "Year: ";
    scanf("%d", &people[pos].year);
    pos++;
}

void showReg(){
    for (int i = 0; i < pos; i++)
    {   
        cout <<"\n*******************************\n";
        printf("Nombre: %s %s \nYear: %d"
        , people[i].name, people[i].lastName
        , people[i].year);
        cout <<"\n*******************************";
    }
    
}

int menu(){
    int op = 0;
    do {
        cout << "1. Agregar \n";
        cout << "2. Mostrar \n";
        cout << "3. Salir \n";
        cin >> op;

        switch (op)
        {
        case 1:
            addReg();
            system("pause");
            break;
        case 2:
            showReg();
            system("pause");
            break;
        case 3:
            break;
        default:
            break;
        }
    } while (op != 3);
}