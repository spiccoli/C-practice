/*
Ejercicio 4 marzo 2024, sumar dos numeros, PICCOLI SANTIAGO

Mostrar por pantalla el cuadrado de un número ingresado porteclado.
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numeroingresado, numerosaliente;
    printf("ingrese numero entero para realizar su potencia a la 2\n");
    scanf("%d", &numeroingresado);
    numerosaliente = numeroingresado * numeroingresado;
    printf("%d\n", numerosaliente);

    return 0;
}
