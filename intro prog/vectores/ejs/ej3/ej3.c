#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
1 Ingresar datos y cargar un vector de 50 elementos, calcular
a. la suma de todos los elementos
b. el producto de todos los elementos
c. mostrar del vector el elemento 50 al 1
d. imprimir las componentes de indice par
e. imprimir las componentes de indice impar
*/

// a mi el profe me dijo que busque la manera de imprimir que impares y que pares entraron y en orden 
// sin asignar memoria!!!! cosa q despues de probar
// mil horas no lo pude conseguir de otra manera que esta (asignando memoria con calloc)...


#define SIZE 5


int main(int argc, char const *argv[])
{
int vector[SIZE] = {0};
int sumatotal = 0, productoTotal = 1;
int contadorPar = 0, contadorImpar = 0;

char* numeroPar = (char*)calloc(50, sizeof(char));
char* numeroImpar = (char*)calloc(50, sizeof(char));
char* temp = (char*)calloc(50, sizeof(char));
char espacio[2] = {' '};


for (int i = 0; i < SIZE; i++)
{
    printf("Ingrese dato N %d/%d\n", i + 1, SIZE);
    scanf("%d", &vector[i]);
    sumatotal += vector[i];
    productoTotal *= vector[i];
    if (vector[i] % 2 == 0){
    contadorPar++;
    sprintf(temp, "%d", vector[i]);
    strcat(numeroPar, temp);
    strcat(numeroPar, espacio);
    }else{
    contadorImpar++;
    sprintf(temp, "%d", vector[i]);
    strcat(numeroImpar, temp);
    strcat(numeroImpar, espacio);
    }
}
free(numeroPar);
free(numeroImpar);
free(temp);



printf("Los numeros pares son: %s\n", numeroPar);
printf("Los numeros impares son: %s\n", numeroImpar);
printf("La suma de todos los elementos es de: %d \n", sumatotal);
printf("El producto de todos los elementos es de: %d \n", productoTotal);
printf("La cantidad de pares es de: %d \n", contadorPar);
printf("La cantidad de impares es de: %d \n", contadorImpar);

return 0;
}
