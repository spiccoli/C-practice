/*
Escribe una función que reciba un array de enteros y su tamaño, y devuelva la
suma de sus elementos usando punteros.
Utilizar aritmética de punteros para moverse en el arreglo.
No manejar el array como un arreglo con [ ] sino siempre con punteros
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5  
int myFunction(int *arr, int s) {
    int sum =0;
    for (int i = 0; i < s; i++) {
        sum += *(arr+i);
    }
return sum;
}

int main() {
int array[5] = {120,123,534,356,673};
printf("%d",myFunction(array,SIZE));
return 0;
}