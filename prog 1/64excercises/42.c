/*
En un club se tiene guardada la información de sus jugadores en UN SOLO
ARREGLO con la siguiente información: 
apellido (string), 
deporte (string),
categoría (char I/C/J que corresponde a Infantil/Cadete/Juvenil).

Desarrollar una FUNCIÓN que liste por pantalla todos los jugadores
INFANTILES del equipo de básquet y averigüe la CANTIDAD para comprar
nuevas camisetas. Para ello:

● recibe como parámetros el arreglo de jugadores del club y la cantidad N
● lista por pantalla los apellidos de todos los jugadores de basquet
infantiles
● imprime por pantalla la cantidad de los arriba listados.
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

typedef struct {
    char *surname;
    char *sport;
    char category;
}Player;

void myFunction(Player *arr, int n){
    for (int i = 0; i < n; i++) {
        if (arr[i].category == 'i' || arr[i].category == 'I') {
            if (arr[i].sport == "Basketball") {
                printf("Surname: %s ", (arr + i)->surname);    
            }
        }    
    }
}

int main(){
Player arrPlayers[SIZE] = {
    {"Smith", "Tennis", 'I'},
    {"Jones", "Soccer", 'J'},
    {"Doe", "Basketball", 'I'}
};

myFunction(arrPlayers, SIZE);

return 0;
}