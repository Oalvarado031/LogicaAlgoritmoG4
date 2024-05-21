#include <iostream>

#define MAX 10

using namespace std;

int grades[MAX];
int position = 0;
int nota_mas_alta = 0;
int nota_mas_baja = 0;

int menu();
void start();
void addGrade();
void showGrades();
void notaMasAlta();
void notaMasBaja();

int menu(){
    int option;
    cout << "1. Ingrese notas" << endl;
    cout << "2. Mostrar notas" << endl;
    cout << "3. Nota mas alta" << endl;
    cout << "4. Nota mas baja" << endl;
    cout << "5. Promedio" << endl;
    cout << "6. Salir" << endl;
    cout << "Ingrese una opcion" << endl;
    cin >> option;
    return option;
}

void start(){
    int option;
    do {
        option = menu();
        switch(option){
            case 1:
                addGrade();
                break;
            case 2:
                showGrades();
                break;
            case 3:
                notaMasAlta();
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                cout << "Salir" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    } while (option != 6);
}

void addGrade(){
    if(position < MAX){
        cout << "Ingrese nota" << endl;
        cin >> grades[position];
        position++;
    } else {
        cout << "No hay mas espacio" << endl;
    }
}

void showGrades(){
    cout << "Mostrar notas" << endl;
    for (int i = 0; i < position; i++){
        cout << "Nota " << i + 1 << ": " << grades[i] << endl;
    }
}

void notaMasAlta(){
    for (int i = 0; i < position; i++)
    {
        if (grades[i] > nota_mas_alta)
        {
            nota_mas_alta = grades[i];
        } 
    }
    cout << "La nota mas alta es: " << nota_mas_alta << endl;
}

void notaMasBaja(){
    for (int i = 0; i < position; i++)
    {
        nota_mas_baja = grades[i];
        
        if (grades[i] > nota_mas_alta)
        {
            nota_mas_alta = grades[i];
        } 
    }
    cout << "La nota mas baja es: " << nota_mas_alta << endl;
}

int main(){
    start();
    return 0;
}
