/*
Realizar un programa que lea por teclado un número ENTERO y luego muestre
por pantalla los 10 primeros múltiplos, utilizando MEMORIA DINÁMICA.

Para ello desarrollar un algoritmo donde:
● se pida al usuario el primer número (ENTERO POSITIVO O NEGATIVO
pero NO CERO) DONE

● se guarde todos los múltiplos generados en un conjunto de 10 elementos
en MEMORIA DINÁMICA

● al finalizar se muestre por pantalla el conjunto
Utilizar aritmética de punteros (ambas formas p+i y p++)
*/
#include <stdio.h>
#include <stdlib.h>  // Para usar malloc

int main() {
    int num;

    // Pedir al usuario un número entero distinto de cero
    do {
        printf("Introduce un número entero (distinto de 0): ");
        scanf("%d", &num);
    } while (num == 0);  // Repetir si el número es 0

    // Reservar memoria dinámica para 10 múltiplos
    int* multiples = (int*)malloc(10 * sizeof(int));

    // Verificar si la memoria fue asignada correctamente
    if (multiples == NULL) {
        printf("Error al asignar memoria.\n");
        return 1; // Salir si no se pudo asignar memoria
    }

    // Generar los 10 primeros múltiplos y almacenarlos en la memoria dinámica
    for (int i = 0; i < 10; i++) {
        *(multiples + i) = num * (i + 1);  // Aritmética de punteros (p+i)
    }

    // Mostrar los múltiplos usando aritmética de punteros
    printf("Los 10 primeros múltiplos de %d son:\n", num);
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(multiples + i));  // Aritmética de punteros (p++)
    }

    // Liberar la memoria asignada dinámicamente
    free(multiples);

    return 0;
}

