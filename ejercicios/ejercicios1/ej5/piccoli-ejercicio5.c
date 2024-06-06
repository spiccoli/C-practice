/*
Ejercicio 5 marzo 2024, sumar dos numeros, PICCOLI SANTIAGO

Mostrar por pantalla la superficie de un triángulo sabiendo que:
superficie = base x altura/2La base y la altura son dos números de tipo DOUBLE(resolver sin validar los datos ingresados) 
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    double altura, base, superficie;
    
    printf("ingrese base\n");
    scanf("%lf", &base);
    printf("ingrese altura\n");
    scanf("%lf", &altura);
    superficie = base * altura /2;
    printf("la superficie es %lf\n", superficie); 
    return 0;
}
