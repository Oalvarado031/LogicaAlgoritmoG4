#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Leer un numero y decir si es par o impar */
int num;
printf("Dime un numero: \n");
scanf("%d", &num);
if (num % 2 == 0){
    system("color a1");
    printf("El numero %d es par\n", num);
}else{
    system("color e2");
    printf("El numero %d Es impar\n"), num;
}
    return 0;
}
