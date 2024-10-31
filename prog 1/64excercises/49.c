/*
Escribir un programa que devuelva el máximo y el mínimo de un conjunto de N
números almacenados en memoria dinámica.
Una de las funciones será:
void MinMax (int *conj, int n, int *puntMin, int *puntMax)
quien recibe como parámetros: puntero al conjunto de nros, cantidad de nros,
puntero a Min y puntero a Max
No ordenar el arreglo.
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
void MinMax (int *conj, int n, int *puntMin, int *puntMax){
    *puntMin = *puntMax = *conj;
    for (int i = 0; i < n; i++) {
        if (*(conj + i) < *(puntMin)) {
            *(puntMin) = *(conj + i);
        }
        if (*(conj + i) > *(puntMax)) {
            *(puntMax) = *(conj + i);
        }
    }
}
//great name btw
void setSet(int *set, int s){
    for (int i = 0; i < s; i++)
    {
        printf("enter integer %d/%d: ", i+1, s);
        scanf("%d", set+i);
    }
}

int main(){
int *set = (int*)malloc(SIZE * sizeof(int));
int max, min = 0;
setSet(set, SIZE);
MinMax(set, SIZE, &min, &max);
printf("Max: %d | Min: %d", max, min);
return 0;
}