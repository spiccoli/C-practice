/*
Ejercicio 7 abril 2024, Ingresar un número y si el número es mayor a 100, escribir enla pantalla “el número es mayor a 100”.
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    double num;
    printf("Ingrese un numero mayor a 100\n");
    scanf("%lf", &num);
    if (num >= 100 )
    {
        printf("el numero es mayor o igual a 100\n");
    }
    else
    {
    printf("el numero ingresado NO es mayor o igual que 100\n");
    }

    return 0;
}
