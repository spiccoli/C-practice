/*
Escribir un programa donde:
- se ingrese por teclado un número ENTERO POSITIVO y luego se genere
una serie HASTA otro número también ingresado por teclado (límite
inferior y superior de la serie)
- el límite inferior NO puede ser CERO
- el límite superior debe ser mayor al inferior
- la cantidad máxima de números guardados será 10
- la serie cumple con la condición de: cada número es el DOBLE que su
anterior
- al finalizar muestre por pantalla todo el conjunto de números
v3. como pide el ejercicio
v2. guardar serie en un arreglo de enteros
v1. imprimir serie directamente sin guardar
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void inputBounds(int *low,int *upp){
    do {
        printf("enter your lower bound(not 0): ");
        scanf("%d", low);
    } while (*low == 0);
    do {
        printf("enter your upper bound: ");
        scanf("%d", upp);
    } while (*upp <= *low);
}

int main(){
int lowerBound, upperBound;
inputBounds(&lowerBound,&upperBound);
int *set = (int*)calloc(SIZE, sizeof(int));
int counter = 0;
for (int i = 0; i < SIZE; i++)
{
    *(set + 0) = lowerBound;
    if (*(set + i)*2 <= upperBound){
        *(set + i + 1) = *(set + i)*2;
    }
}
for (int i = 0; i < SIZE; i++)
{
    if (*(set + i) != 0)
    {
        printf("%d ", *(set + i));
    }
}
return 0;
}