/*
Sumar dos vectores elemento a elemento dejando el resultado de la suma en un
tercer vector.
Realizar la carga de los dos primeros por teclado. Definir una única función que
realice la carga de un vector y llamar a dicha función dos veces.
Plantear otra función que reciba tres vectores y proceda a sumar elemento a
elemento los dos primeros vectores y dejando el resultado de la suma en el
tercer vector.
Imprimir los tres vectores.
v1) con 3 arreglos
v2) con 3 conjuntos en memoria dinámica
*/
#include <stdio.h>
#include <stdlib.h>

// Function to load a vector with values from the user
void loadVector(int* vector, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
}

// Function to sum two vectors element-wise and store the result in a third vector
void sumVectors(const int* vector1, const int* vector2, int* result, int size) {
    for (int i = 0; i < size; i++) {
        result[i] = vector1[i] + vector2[i];
    }
}

// Function to print a vector
void printVector(const int* vector, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

int main() {
    int size;

    // Prompt user for size of the vectors
    printf("Enter the size of the vectors: ");
    scanf("%d", &size);

    // Allocate memory dynamically for the vectors
    int* vector1 = (int*)malloc(size * sizeof(int));
    int* vector2 = (int*)malloc(size * sizeof(int));
    int* result = (int*)malloc(size * sizeof(int));

    if (vector1 == NULL || vector2 == NULL || result == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

    // Load vectors with values
    printf("Enter elements for vector 1:\n");
    loadVector(vector1, size);
    printf("Enter elements for vector 2:\n");
    loadVector(vector2, size);

    // Sum the vectors
    sumVectors(vector1, vector2, result, size);

    // Print the vectors
    printf("Vector 1: ");
    printVector(vector1, size);
    printf("Vector 2: ");
    printVector(vector2, size);
    printf("Result (Sum): ");
    printVector(result, size);

    // Free the allocated memory
    free(vector1);
    free(vector2);
    free(result);

    return 0;
}
