#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Leer el nombre y apellido de una persona
    imprimir el nombre completo */

char nom[30];
char ape[30];

printf("Dime tu nombre");
scanf("%s", nom);
printf("Dime tu apellido");
scanf("%s",ape);
printf("tu nombre completo es %s %s", nom, ape);
    return 0;
}
