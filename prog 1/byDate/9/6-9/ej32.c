/*
Realizar una función para convertir
segundos en horas, minutos y segundos.
Recibe segundos y “devuelve” horas,
minutos y segundos. La función no lee ni
escribe nada.
(sólo es posible utilizando punteros)
*/
#include <stdio.h>

void convertirTiempo(int totalSegundos, int *horas, int *minutos, int *segundos) { // probar sin los parametros, array, o struct
    *horas = totalSegundos / 3600;
    totalSegundos %= 3600;
    *minutos = totalSegundos / 60;
    *segundos = totalSegundos % 60;
}

int main() {
    int totalSegundos = 90;
    int horas, minutos, segundos;

    convertirTiempo(totalSegundos, &horas, &minutos, &segundos);

    printf("%d segundos son equivalentes a %d horas, %d minutos y %d segundos.\n", totalSegundos, horas, minutos, segundos);

    return 0;
}
