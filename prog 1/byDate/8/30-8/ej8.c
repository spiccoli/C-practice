/*
Hecho por Schvabbauer Schek y Piccoli
*/
#include <stdio.h>

#define MAXAULAS 30

typedef struct
{
    int siCableada;
    char sector;
    int existe;
} Aula;
int sinConexion = 0;

void crearAula(Aula aulas[])
{
    static int contadorAulas = 0;
    if (contadorAulas < MAXAULAS) {
        printf("Ingrese si esta cableada el aula | 1 = si | 0 = no \n");
        scanf("%d", &aulas[contadorAulas].siCableada);
        getchar();
        printf("Ingrese el sector | j = jardin | p = primaria | s = secundaria\n");
        scanf("%c", &aulas[contadorAulas].sector);
        getchar();
        aulas[contadorAulas].existe = 1;
        if (!aulas[contadorAulas].siCableada) {
            sinConexion++;
        }
        contadorAulas++;
    }
}

void mostrarAulas(Aula aulas[]){
    for (int i = 0; i < MAXAULAS; i++)
    {
        if (aulas[i].existe == 1)
        {
            printf("Aula numero %d | sector %c | tiene conexion %d \n", i+1, aulas[i].sector, aulas[i].siCableada);
        }
    }
    printf("%d\n", sinConexion);
}

int main(int argc, char const *argv[]) {
    Aula aulas[30];
    

    for (int i = 0; i < MAXAULAS; i++)
    {
        aulas[i].existe = 0;
    }
    
    int flag = 1;
    while (flag)
    {
        crearAula(aulas);
        printf("---------------------\n");
        printf("Ingrese 0 para terminar\n");
        scanf("%d", &flag);
        printf("---------------------\n");

    }
    mostrarAulas(aulas);
    
    return 0;
}