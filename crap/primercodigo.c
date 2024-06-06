/*Ejercicio 3 marzo 2024, sumar dos numeros, PICCOLI SANTIAGO*/

#include <stdio.h>
int main()
{
    /* leer dos numeros */
    int n1,n2,suma;
    printf("Ingrese 2 numeros\n");
    scanf("%d", &n1);
    scanf("%d", &n2); 
    /* calcular suma */
    suma = n1+n2;
    /* mostrar los resultados :) */
    printf("La suma es %d\n", suma);
    return 0;
}
