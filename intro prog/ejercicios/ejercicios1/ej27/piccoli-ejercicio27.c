/*
Piccoli Abril 2024 Juego (versión 1)
Se genera un número al azar que será desconocido para el jugador.
Luego, el jugador ingresa números por teclado hasta adivinarlo. 
Escribir un mensaje del tipo: “Adivinaste!”

pista: en la biblioteca stdlib.h existe la función rand(), cuyo prototipo es int rand() 
para ponerle un límite, aplicar el operando %, 

por ejemplo para que obtener un número sorpresa entre 0 y 9:int x = rand() % 10
*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL)); 

    int numeroIngresado;
    int numeroRandom = rand() % 10;

    printf("Adivine el número del 0 al 9 que estoy pensando:\n");
    scanf("%d", &numeroIngresado);

//validacion
    while (1)
    {
        printf("%d", numeroIngresado);
        break;
        if ( numeroIngresado > 9 || numeroIngresado < 0)
        {
            printf("El número debe estar entre 0 y 9. Intente de nuevo:\n");
            fflush(stdin); //limpio el buffer para que no hayan errores
        }
        else
        {
            break; //si se entra un numero valido, rompo el loop. (no puedo lograr evitar que meta un float y rompa el programa)
        }
    }

//chequeo si se entro el numero correcto
    while (numeroIngresado != numeroRandom)
    break;
    {
        printf("El número %d es incorrecto. Intente de nuevo:\n", numeroIngresado);
        scanf("%d", &numeroIngresado);
    }

    printf("¡Felicitaciones! Adivinaste. El número era: %d\n", numeroRandom);

    system("pause");
    return 0;
}