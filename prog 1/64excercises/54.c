/*
Basado en un ejercicio anterior:
Superficie de N triángulos, ingresada la base y altura de cada uno de ellos.
Recordar que la superficie de un triángulo es base * altura /2
Resolver:
v1) sin vector
v2) con 2 vectores
v3) con 1 matriz
v3) con estructura, sin vector
v4) con vector de estructura
v5) con puntero a memoria dinámica
v6) con archivo

V6:
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float base;
    float altura;
    float superficie;
} Triangulo;

void escribirArchivo(Triangulo *triangulos, int N) {
    FILE *archivo = fopen("triangulos.dat", "wb");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }
    fwrite(triangulos, sizeof(Triangulo), N, archivo);
    fclose(archivo);
}

void leerArchivo(int N) {
    FILE *archivo = fopen("triangulos.dat", "rb");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }
    
    Triangulo *triangulos = (Triangulo *)malloc(N * sizeof(Triangulo));
    if (triangulos == NULL) {
        printf("Error al asignar memoria.\n");
        return;
    }
    fread(triangulos, sizeof(Triangulo), N, archivo);
    fclose(archivo);
    
    for (int i = 0; i < N; i++) {
        printf("La superficie del triángulo %d es: %.2f\n", i + 1, triangulos[i].superficie);
    }
    
    free(triangulos);
}

int main() {
    int N;
    printf("Ingrese el número de triángulos: ");
    scanf("%d", &N);

    Triangulo *triangulos = (Triangulo *)malloc(N * sizeof(Triangulo));
    if (triangulos == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        printf("Ingrese la base del triángulo %d: ", i + 1);
        scanf("%f", &triangulos[i].base);
        printf("Ingrese la altura del triángulo %d: ", i + 1);
        scanf("%f", &triangulos[i].altura);
        triangulos[i].superficie = (triangulos[i].base * triangulos[i].altura) / 2;
    }

    escribirArchivo(triangulos, N);
    leerArchivo(N);

    free(triangulos);

    return 0;
}
