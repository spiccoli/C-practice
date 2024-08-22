//Ingresar valores hasta uno = 0, indicar e imprimir la cantidad de números ingresados y su promedio

#include <stdio.h>

int main(){

    int numero,promedio;
    int Contadornumeros = 0;
    int sumaTotalnumeros = 0;
    int i = 0;
    do
    {
        i++;
        printf("Ingrese el numero %d (ingrese 0 para finalizar)\n", i);
        scanf("%d",&numero);
        Contadornumeros++;
        sumaTotalnumeros += numero;
    } while (numero != 0);
    
    promedio = sumaTotalnumeros / Contadornumeros;

    printf("La cantidad de numeros ingresados es de: %d\n", Contadornumeros);
    printf("La suma total entre los numeros es de: %d\n", sumaTotalnumeros);
    printf("El numero promedio es: %d\n", promedio);

    return 0;
}