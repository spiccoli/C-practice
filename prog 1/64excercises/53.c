/*
Calcular el promedio de edad de los N invitados a una fiesta.
Versiones (de más simple a más compleja):
V1: sin funciones, sin punteros
V2: con funciones, sin punteros
V3: con funciones, con aritmética de punteros
V4: con funciones, punteros, memoria dinámica, aritmética de punteros
v5: con archivo
Hago la v5 
*/
#include <stdio.h>
#include <stdlib.h>

void ingresarEdad(int *edades, int N) {
    for (int i = 0; i < N; i++) {
        printf("Ingrese la edad del invitado %d: ", i + 1);
        scanf("%d", (edades + i));
    }
}

float calcularPromedio(int *edades, int N) {
    int suma = 0;
    for (int i = 0; i < N; i++) {
        suma += *(edades + i);
    }
    return (float)suma / N;
}

void escribirArchivo(int *edades, int N) {
    FILE *archivo = fopen("edades.dat", "wb");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }
    fwrite(edades, sizeof(int), N, archivo);
    fclose(archivo);
}

void leerArchivo(int N) {
    FILE *archivo = fopen("edades.dat", "rb");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }
    
    int *edades = (int *)malloc(N * sizeof(int));
    if (edades == NULL) {
        printf("Error al asignar memoria.\n");
        return;
    }
    fread(edades, sizeof(int), N, archivo);
    fclose(archivo);
    
    float promedio = calcularPromedio(edades, N);
    printf("El promedio de edad es: %.2f\n", promedio);
    
    free(edades);
}

int main() {
    int N;
    
    printf("Ingrese el número de invitados: ");
    scanf("%d", &N);
    
    int *edades = (int *)malloc(N * sizeof(int));
    if (edades == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    
    ingresarEdad(edades, N);
    escribirArchivo(edades, N);
    leerArchivo(N);
    
    free(edades);
    
    return 0;
}
