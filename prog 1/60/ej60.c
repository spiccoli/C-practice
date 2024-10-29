/*
Realizar un programa que lea por teclado un número ENTERO y luego muestre por
pantalla los 10 primeros siguiendo el patrón: cada elemento de la serie es la suma de los
dos anteriores. El primer elemento es 0. Toda la serie será guardada en MEMORIA
DINÁMICA.

Para ello desarrollar un algoritmo donde:
● se pida al usuario el primer número (ENTERO POSITIVO O NEGATIVO pero
NO CERO)
● se guarde todos los múltiplos generados en un conjunto de 10 elementos en
MEMORIA DINÁMICA
● al finalizar se muestre por pantalla el conjunto
●
Utilizar aritmética de punteros (ambas formas p+i y p++)
*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void ingresarNumero(int *num) {
    do {
        printf("Ingrese un número ENTERO (no cero): ");
        scanf("%d", num);
    } while (*num == 0);
}

void generarSerie(int *serie, int num) {
    serie[0] = 0;
    if (SIZE > 1) {
        serie[1] = num;
        for (int i = 2; i < SIZE; i++) {
            serie[i] = *(serie + i - 1) + *(serie + i - 2);  // p+i
        }
    }
}

void mostrarSerie(int *serie) {
    printf("Serie generada:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(serie++));  // p++
    }
    printf("\n");
}

int main() {
    int *serie = (int*)malloc(SIZE * sizeof(int));
    if (serie == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    int numero;
    ingresarNumero(&numero);

    generarSerie(serie, numero);
    mostrarSerie(serie);
    free(serie);
    return 0;
}
