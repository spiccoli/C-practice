/*
PICCOLI, Mayo, 2024, 
leer 5 numeros en un vector
en otro calcular y guardar la potencia de 2 de cada elemento
mostrar por pantalla ambos vectores
*/

#include <stdio.h>
#define SIZE 2
//funcion main
int main(){
    // 0. variables
    int vectorNumeros[SIZE]; 
    int vectorNumerosCuadrados[SIZE]; 
    int temp[SIZE];  
        // entrada
    for ( int i = 0 ; i < SIZE; i++)
    {
        printf("Ingresar numero %d/%d\n",i + 1, SIZE); 
        scanf("%d", &vectorNumeros[i]);
        temp[i] = vectorNumeros[i] * vectorNumeros[i];
        vectorNumerosCuadrados[i] = temp[i];
    }
    printf("Los numeros elevados al cuadrado son:\n");
    for (int k = 0; k < SIZE; k++)
    {
        printf("La potencia del numero %d es: %d\n",k + 1, vectorNumerosCuadrados[k]);
    }

    return 0;
}