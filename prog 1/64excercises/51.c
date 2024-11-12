/*
Se ingresan y graban en un archivo la información sobre empleados. Preguntar
si se continúa (S/N) después de cada empleado.
nombre, dirección (calle, nro, localidad), edad, sexo (F o M).
Se pide realizar 3 listados por pantalla:
▪ listar los empleados menores de 25 años
▪ listar los empleados que viven en Pilar
▪ listar los empleados que viven en Pilar y son menores de 25 años

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMP 100 // Número máximo de empleados

typedef struct {
    char nombre[50];
    char calle[50];
    int numero;
    char localidad[50];
    int edad;
    char sexo;
} Empleado;

void ingresarEmpleado(Empleado *emp) {
    printf("Nombre: ");
    scanf("%s", emp->nombre);
    printf("Calle: ");
    scanf("%s", emp->calle);
    printf("Número: ");
    scanf("%d", &emp->numero);
    printf("Localidad: ");
    scanf("%s", emp->localidad);
    printf("Edad: ");
    scanf("%d", &emp->edad);
    printf("Sexo (F/M): ");
    scanf(" %c", &emp->sexo);
}

void listarEmpleadosMenoresDe25(Empleado empleados[], int count) {
    printf("\nEmpleados menores de 25 años:\n");
    for (int i = 0; i < count; i++) {
        if (empleados[i].edad < 25) {
            printf("%s, %s %d, %s, %d, %c\n", empleados[i].nombre, empleados[i].calle, empleados[i].numero, empleados[i].localidad, empleados[i].edad, empleados[i].sexo);
        }
    }
}

void listarEmpleadosEnPilar(Empleado empleados[], int count) {
    printf("\nEmpleados que viven en Pilar:\n");
    for (int i = 0; i < count; i++) {
        if (strcmp(empleados[i].localidad, "Pilar") == 0) {
            printf("%s, %s %d, %s, %d, %c\n", empleados[i].nombre, empleados[i].calle, empleados[i].numero, empleados[i].localidad, empleados[i].edad, empleados[i].sexo);
        }
    }
}

void listarEmpleadosEnPilarMenoresDe25(Empleado empleados[], int count) {
    printf("\nEmpleados que viven en Pilar y son menores de 25 años:\n");
    for (int i = 0; i < count; i++) {
        if (empleados[i].edad < 25 && strcmp(empleados[i].localidad, "Pilar") == 0) {
            printf("%s, %s %d, %s, %d, %c\n", empleados[i].nombre, empleados[i].calle, empleados[i].numero, empleados[i].localidad, empleados[i].edad, empleados[i].sexo);
        }
    }
}

int main() {
    Empleado empleados[MAX_EMP];
    int count = 0;
    char continuar;

    do {
        if (count >= MAX_EMP) {
            printf("Se alcanzó el número máximo de empleados.\n");
            break;
        }
        ingresarEmpleado(&empleados[count]);
        count++;

        printf("¿Desea continuar ingresando empleados? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    listarEmpleadosMenoresDe25(empleados, count);
    listarEmpleadosEnPilar(empleados, count);
    listarEmpleadosEnPilarMenoresDe25(empleados, count);

    return 0;
}
