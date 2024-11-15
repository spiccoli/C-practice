/*
Crear una estructura llamada “jugador”, que almacene la siguiente información
sobre jugadores de fútbol:
nombre, equipo, cantidad de partidos jugados, cantidad de goles convertidos
Escribir un programa que:
▪ ingrese los datos y los grabe en un archivo
▪ al finalizar la carga, vuelva a leer todo el archivo para mostrar el nombre
del jugador, su promedio y el equipo al que pertenece.
Validar todo lo que sea necesario. La carga finaliza cuando el usuario no quiere
ingresar más jugadores (para esto preguntar por S/N).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_TEAM_LEN 50

typedef struct {
    char nombre[MAX_NAME_LEN];
    char equipo[MAX_TEAM_LEN];
    int cantidadPartidos;
    int cantidadGoles;
} Jugador;

void ingresarDatos(Jugador *jugador) {
    printf("Ingrese nombre: ");
    scanf("%s", jugador->nombre);
    printf("Ingrese equipo: ");
    scanf("%s", jugador->equipo);
    printf("Ingrese cantidad de partidos jugados: ");
    scanf("%d", &jugador->cantidadPartidos);
    printf("Ingrese cantidad de goles convertidos: ");
    scanf("%d", &jugador->cantidadGoles);
}

void escribirArchivo(Jugador *jugadores, int cantidad) {
    FILE *archivo = fopen("jugadores.dat", "wb");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }
    fwrite(jugadores, sizeof(Jugador), cantidad, archivo);
    fclose(archivo);
}

void leerArchivo() {
    FILE *archivo = fopen("jugadores.dat", "rb");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }
    
    Jugador jugador;
    while (fread(&jugador, sizeof(Jugador), 1, archivo)) {
        float promedioGoles = (float)jugador.cantidadGoles / jugador.cantidadPartidos;
        printf("Nombre: %s, Equipo: %s, Promedio de Goles: %.2f\n", jugador.nombre, jugador.equipo, promedioGoles);
    }
    
    fclose(archivo);
}

int main() {
    Jugador jugadores[100];
    int cantidadJugadores = 0;
    char continuar;

    do {
        ingresarDatos(&jugadores[cantidadJugadores]);
        cantidadJugadores++;
        printf("¿Desea ingresar otro jugador? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    escribirArchivo(jugadores, cantidadJugadores);
    leerArchivo();

    return 0;
}
