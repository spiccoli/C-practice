/*
Escribir un programa donde:
- se ingrese por teclado un número ENTERO POSITIVO y luego se
genere una serie HASTA otro número también ingresado por
teclado (límite inferior y superior de la serie)

- el límite inferior NO puede ser CERO

- el límite superior debe ser mayor al inferior

- la cantidad máxima de números guardados será 10

- la serie cumple con la condición de: cada número es el DOBLE
que su anterior

- al finalizar muestre por pantalla todo el conjunto de números

v3. como pide el ejercicio
v2. guardar serie en un arreglo de enteros
v1. imprimir serie directamente sin guardar
*/
#include <stdio.h>

void ingresarLimites(int *liminf, int *limsup){
    do
    {
        printf("Ingresar limite inferior distinto de 0\n");
        scanf("%d", liminf);        
    } while (*(liminf) == 0);  
        scanf("%d", limsup);        

}

int main(int argc, char const *argv[]){
int liminferior;
int * liminferior = liminferior;
int * limsuperior;
ingresarLimites(liminferior,limsuperior);
return 0;
}
