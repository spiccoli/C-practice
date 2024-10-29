#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PERSONAS 100

typedef enum { MANTENIMIENTO, SEGURIDAD, MENSAJERO } Rol;

typedef struct {
    char nombre[50];
    char apellido[50];
    Rol rol;
    int zona_asignada;
} Persona;

typedef struct {
    int capacidad_maxima;
    int capacidad_actual;
    int personas_a_cargo;
    Persona personas[2];
} Zona;

void definir_capacidad_zonas(Zona zonas[]) {
    for (int i = 0; i < 4; i++) {
        printf("Definir capacidad máxima para la zona %d: ", i + 1);
        scanf("%d", &zonas[i].capacidad_maxima);
        zonas[i].capacidad_actual = 0;
        zonas[i].personas_a_cargo = 0;
    }
}

void crear_persona(Persona personas[], int *total_personas) {
    if (*total_personas >= MAX_PERSONAS) {
        printf("No se pueden crear más personas.\n");
        return;
    }
    Persona p;
    printf("Nombre: ");
    scanf("%s", p.nombre);
    printf("Apellido: ");
    scanf("%s", p.apellido);
    printf("Rol (0: Mantenimiento, 1: Seguridad, 2: Mensajero): ");
    scanf("%d", (int*)&p.rol);
    p.zona_asignada = -1;
    personas[(*total_personas)++] = p;
}

void asignar_persona(Zona zonas[], Persona personas[], int total_personas) {
    int id_persona, id_zona;
    printf("ID de la persona a asignar: ");
    scanf("%d", &id_persona);
    printf("ID de la zona a asignar: ");
    scanf("%d", &id_zona);
    if (id_persona < 0 || id_persona >= total_personas || id_zona < 0 || id_zona >= 4) {
        printf("ID inválido.\n");
        return;
    }
    if (zonas[id_zona].personas_a_cargo >= 2) {
        printf("La zona ya tiene el máximo de personas a cargo.\n");
        return;
    }
    personas[id_persona].zona_asignada = id_zona;
    zonas[id_zona].personas[zonas[id_zona].personas_a_cargo++] = personas[id_persona];
}

void asignar_zombies(Zona zonas[]) {
    int id_zona, cantidad;
    printf("ID de la zona: ");
    scanf("%d", &id_zona);
    printf("Cantidad de zombies a asignar: ");
    scanf("%d", &cantidad);
    if (id_zona < 0 || id_zona >= 4 || cantidad < 0 || zonas[id_zona].capacidad_actual + cantidad > zonas[id_zona].capacidad_maxima) {
        printf("Asignación inválida.\n");
        return;
    }
    zonas[id_zona].capacidad_actual += cantidad;
}

void imprimir_personas(Persona personas[], int total_personas) {
    for (int i = 0; i < total_personas; i++) {
        printf("Persona %d: %s %s, Rol: %d, Zona asignada: %d\n", i, personas[i].nombre, personas[i].apellido, personas[i].rol, personas[i].zona_asignada);
    }
}

void informar_zonas_no_seguras(Zona zonas[]) {
    for (int i = 0; i < 4; i++) {
        int mantenimiento = 0;
        for (int j = 0; j < zonas[i].personas_a_cargo; j++) {
            if (zonas[i].personas[j].rol == MANTENIMIENTO) {
                mantenimiento = 1;
                break;
            }
        }
        if (zonas[i].capacidad_actual < zonas[i].capacidad_maxima * 0.25 || zonas[i].personas_a_cargo < 2 || !mantenimiento) {
            printf("La zona %d no es segura.\n", i + 1);
        }
    }
}

int main() {
    Zona zonas[4];
    Persona personas[MAX_PERSONAS];
    int total_personas = 0;
    int opcion;
    do {
        printf("Menú:\n");
        printf("1- Definir capacidad de zonas\n");
        printf("2- Crear Personas\n");
        printf("3- Asignar Personas\n");
        printf("4- Asignar zombies\n");
        printf("5- Imprimir todas los detalles de las personas\n");
        printf("6- Informar zonas que aún no son seguras\n");
        printf("0- Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1: definir_capacidad_zonas(zonas); break;
            case 2: crear_persona(personas, &total_personas); break;
            case 3: asignar_persona(zonas, personas, total_personas); break;
            case 4: asignar_zombies(zonas); break;
            case 5: imprimir_personas(personas, total_personas); break;
            case 6: informar_zonas_no_seguras(zonas); break;
        }
    } while (opcion != 0);
    return 0;
}
