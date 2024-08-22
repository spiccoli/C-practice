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
#define LIM 10

int main(int argc, char const *argv[]){
    srand(time(NULL)); 

    int numeroIngresado;
    int numeroRandom = rand() % LIM;

    printf("Adivine el número del 0 al %d que estoy pensando:\n", LIM-1);
    scanf("%d", &numeroIngresado);

//validacion
//en programaci�n lineal estructurada los algoritmos y bloques s�lo tienen una salida
//esa salida es por l�gica 
//al quitar el break este while ser�a un loop infinito
//te dejo a vos pensar la condici�n    while (1)


//chequeo si se entro el numero correcto
    while (numeroIngresado != numeroRandom)
    {
        if (numeroIngresado > (LIM-1) || numeroIngresado < 0)
        {
            printf("El número debe estar entre 0 y %d.\n", LIM-1);
            fflush(stdin);//limpio el buffer para que no hayan errores
        }
        printf("El número %d es incorrecto. Intente de nuevo:\n", numeroIngresado);
        scanf("%d", &numeroIngresado);
    }

    printf("¡Felicitaciones! Adivinaste. El número era: %d\n", numeroRandom);

    system("pause");
    return 0;
}
