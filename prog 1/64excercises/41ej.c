/*
Se registraron todos los gastos realizados y la información se guardó en UN
ARREGLO con los MONTOS de cada gasto.
Desarrollar una FUNCIÓN que averigüe cuantos gastos fueron MAYORES AL
PROMEDIO para alertar y poder revisar los gastos. Para ello:
● recibe como parámetros el arreglo con los montos y la cantidad N
● devuelve la CANTIDAD de gastos mayores al promedio
● no lee ni imprime nada
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


int calcAboveAverageSpending(float arr[], int n) {
    float total = 0;
    int counter = 0;
    for (int i = 0; i < SIZE; i++) {
        total += arr[i];
    }
    float avg = total / SIZE;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > avg) {
            counter++;
        }
    }
    return counter;
}

int main() {
float spending[SIZE] = {1230,4123,5123,6433,2345};
printf("%d",calcAboveAverageSpending(spending, SIZE));
return 0;
}


