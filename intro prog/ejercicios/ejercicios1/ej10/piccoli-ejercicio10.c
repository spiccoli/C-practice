/*
Ejercicio 10, abril.

Superficie triángulo (con validación una vez)
Escribir el algoritmo que calcule la superficie de un triángulo a partir del 
ingreso de su base y su altura.

Condición que b y h sean mayores a 0.
SUPERFICIE = B*H/2
*/

#include <stdio.h>

int main()
{
    double base, altura, superficie;

    printf("Ingrese la base: ");
    scanf("%lf", &base);
    while (base <= 0)
    {
        printf("La base debe ser mayor que cero. Reingrese la base: ");
        scanf("%lf", &base);
    }

    printf("Ingrese la altura: ");
    scanf("%lf", &altura);
    while (altura <= 0)
    {
        printf("La altura debe ser mayor que cero. Reingrese la altura: ");
        scanf("%lf", &altura);
    }

    superficie = base * altura / 2;
    printf("La superficie es %lf\n", superficie);

    return 0;
}