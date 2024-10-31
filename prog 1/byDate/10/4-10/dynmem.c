/*
Escribir un programa donde:
- se ingrese por teclado un número ENTERO POSITIVO y luego se
genere una serie HASTA otro número también ingresado por
teclado (límite inferior y superior de la serie)
- el límite inferior NO puede ser CERO X
- el límite superior debe ser mayor al inferior X

- la cantidad máxima de números guardados será 10

- la serie cumple con la condición de: cada número es el DOBLE
que su anterior
- al finalizar muestre por pantalla todo el conjunto de números
*/
#include <stdio.h>
#include <stdlib.h>

void ingresarLimites(int*, int*); // limite inferior y superior
int* calcularSeries(int*, int*, int*); // 
void mostrarSerie(int*, int);

#define MAX_NUMEROS 10

int main(int argc, char const *argv[]){
    int limiteInf;
    int limiteSup;
    int sizeSerie = 0;

    ingresarLimites(&limiteInf, &limiteSup);
    int *serie = calcularSeries(&limiteInf, &limiteSup, &sizeSerie);

    mostrarSerie(serie, sizeSerie);
    free(serie);
    return 0;
}

void ingresarLimites(int *inf, int *sup){
    do {
        printf("Ingrese el limite inferior mayor a 0: \n");
        scanf("%d", inf);
        printf("Ingrese el limite superior mayor que el limite inferior: \n");
        scanf("%d", sup);
    } while (*(inf) <= 0 || *(sup) <= *(inf));
}

int* calcularSeries(int* inf, int* sup, int* sizeS) {
    int* serie = (int*)malloc(MAX_NUMEROS * sizeof(int)); // Asignamos memoria para la serie
    if (serie == NULL) { // chequeamos  si pudo asignar
        printf("Error al asignar memoria\n");
        exit(1);
    }
    
    int i = 0;
    int valor = *inf;
    while (valor <= *sup && i < MAX_NUMEROS) {
        *(serie + i) = valor;
        i++;
        valor *= 2;
    }

    *sizeS = i; // lo uso cuando imprima
    return serie;
}

void mostrarSerie(int* serie, int sizeS) {
    printf("Serie: \n");
    for(int i = 0; i < sizeS; i++) {
        printf("%d ", serie[i]);
    }
    printf("\n");
}
