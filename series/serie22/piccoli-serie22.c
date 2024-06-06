/*
piccoli

Calcular la suma de los primeros N números enteros. 
El valor de N se ingresa por teclado.

Por ej.: si N fuera 3, sería la suma de 1+2+3
Validar que N sea positivo mayor a cero.

*/


#include <stdio.h>
int main(int argc, char const *argv[])
{
    double numero;
    printf("defina su numero\n");
    scanf("%lf", &numero);

    while (numero<=0)
    {
        puts("el numero debe ser mayor a 0, redefina su numero");
        scanf("%lf", &numero); 
    }
    
    float sumaDeNumeros = (numero*(numero+1))/2;
    printf("%.2lf", sumaDeNumeros);

    return 0;
}
