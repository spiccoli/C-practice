/*
Ejercicio 6 abril 2024, Ingresar un número y si el número es mayor a 100, escribir enla pantalla “el número es mayor a 100”.
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Ingrese un numero mayor a 100\n");
    scanf("%d", &num);
    if (num > 100 )
    {
        printf("el numero es mayor a 100\n");
    }

    return 0;
}
