/*5 alumnos, 5 cuotas, mostrar alumno con su cuota*/
#include <stdio.h>
#include <string.h>
#define SIZE 5

typedef struct {
    char nombre[21];
    float cuota;
} Alumno;

int main() {
    Alumno alumno[SIZE];

    for (int i = 0; i < SIZE; i++) {
        printf("Ingrese nombre del alumno %d\n", i + 1);
        fgets(alumno[i].nombre, sizeof(alumno[i].nombre), stdin);
        alumno[i].nombre[strcspn(alumno[i].nombre, "\n")] = '\0';
        printf("Ingrese cuota del alumno %s\n", alumno[i].nombre);
        scanf("%f", &alumno[i].cuota);
        getchar();
    }

    for (int i = 0; i < SIZE; i++) {
        printf("Alumno: %s, Cuota: %.2f\n", alumno[i].nombre, alumno[i].cuota);
    }

    return 0;
}
