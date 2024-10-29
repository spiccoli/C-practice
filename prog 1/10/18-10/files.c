/*
Se ingresan y graban en un archivo la información sobre
empleados. Preguntar si se continúa (S/N) después de
cada empleado.
nombre, dirección (calle, nro, localidad), edad, sexo (F o
M).

Se pide realizar 3 listados por pantalla:
▪ listar los empleados menores de 25 años
▪ listar los empleados que viven en Pilar
▪ listar los empleados que viven en Pilar y son menores
de 25 años

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[50];
    char calle[50];
    int numero;
    char localidad[50];
    int edad;
    char sexo;
} Empleado;

void ingresarEmpleado(FILE *file) {
    Empleado empleado;
    char continuar;
    do {
        printf("Ingrese el nombre: ");
        scanf("%s", empleado.nombre);
        printf("Ingrese la calle: ");
        scanf("%s", empleado.calle);
        printf("Ingrese el numero: ");
        scanf("%d", &empleado.numero);
        printf("Ingrese la localidad: ");
        scanf("%s", empleado.localidad);
        printf("Ingrese la edad: ");
        scanf("%d", &empleado.edad);
        printf("Ingrese el sexo (F/M): ");
        scanf(" %c", &empleado.sexo);

        fwrite(&empleado, sizeof(Empleado), 1, file);
        printf("Desea continuar? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');
}

void listarMenoresDe25(FILE *file) {
    Empleado empleado;
    rewind(file);
    printf("Empleados menores de 25 años:\n");
    while (fread(&empleado, sizeof(Empleado), 1, file)) {
        if (empleado.edad < 25) {
            printf("Nombre: %s, Edad: %d\n", empleado.nombre, empleado.edad);
        }
    }
}

void listarEnPilar(FILE *file) {
    Empleado empleado;
    rewind(file);
    printf("Empleados que viven en Pilar:\n");
    while (fread(&empleado, sizeof(Empleado), 1, file)) {
        if (strcmp(empleado.localidad, "Pilar") == 0) {
            printf("Nombre: %s, Localidad: %s\n", empleado.nombre, empleado.localidad);
        } else if (strcmp(empleado.localidad, "pilar") == 0) {
            printf("Nombre: %s, Localidad: %s\n", empleado.nombre, empleado.localidad);
        } 
    }
}


void listarEnPilarYMenoresDe25(FILE *file) {
    Empleado empleado;
    rewind(file);
    printf("Empleados que viven en Pilar y son menores de 25 años:\n");
    while (fread(&empleado, sizeof(Empleado), 1, file)) {
        if (strcmp(empleado.localidad, "Pilar" || "pilar") == 0 && empleado.edad < 25) {
            printf("Nombre: %s, Localidad: %s, Edad: %d\n", empleado.nombre, empleado.localidad, empleado.edad);
        }
    }
}

int main() {
    FILE *file;
    file = fopen("empleados.dat", "wb+");
    if (!file) {
        printf("Error al abrir el archivo.\n");
    } else
    {
        ingresarEmpleado(file);
        rewind(file); // Ensures the file is read from the beginning for the listings
        listarMenoresDe25(file);
        listarEnPilar(file);
        listarEnPilarYMenoresDe25(file);
        fclose(file);
    }
    return 0;
}
