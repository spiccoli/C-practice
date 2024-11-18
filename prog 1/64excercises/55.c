/*
Escribir un programa donde:
- se ingresen por teclado 5 pares de coordenadas x, y que representan
puntos en el plano
- al finalizar la carga, informe cuántos puntos se encuentran en el primer
cuadrante
- luego de la cantidad, informe un listado con los puntos del primer
cuadrante en forma de columnas
v1) con 2 arreglos
v2) con 1 matriz
v3) con arreglos de estructura
v4) con puntero a memoria dinámica
v5) con archivo
*/
#include <stdio.h>

#define N 5

typedef struct {
    int x;
    int y;
} Point;

void savePoints(Point points[], int n) {
    FILE *file = fopen("points.dat", "wb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    fwrite(points, sizeof(Point), n, file);
    fclose(file);
}

void loadPoints(Point points[], int n) {
    FILE *file = fopen("points.dat", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    fread(points, sizeof(Point), n, file);
    fclose(file);
}

int countFirstQuadrantPoints(Point points[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (points[i].x > 0 && points[i].y > 0) {
            count++;
        }
    }
    return count;
}

void listFirstQuadrantPoints(Point points[], int n) {
    printf("Points in the first quadrant:\n");
    for (int i = 0; i < n; ++i) {
        if (points[i].x > 0 && points[i].y > 0) {
            printf("(%d, %d)\n", points[i].x, points[i].y);
        }
    }
}

int main() {
    Point points[N];

    // Input points
    for (int i = 0; i < N; ++i) {
        printf("Enter x and y for point %d: ", i + 1);
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    // Save points to file
    savePoints(points, N);

    // Load points from file
    loadPoints(points, N);

    // Count and list points in the first quadrant
    int count = countFirstQuadrantPoints(points, N);
    printf("Number of points in the first quadrant: %d\n", count);
    if (count > 0) {
        listFirstQuadrantPoints(points, N);
    }

    return 0;
}
