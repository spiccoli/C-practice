/*
Realizar un programa que lea por teclado un número ENTERO y luego muestre por
pantalla los 10 primeros múltiplos, utilizando MEMORIA DINÁMICA.
Para ello desarrollar un algoritmo donde:

● se pida al usuario el primer número (ENTERO POSITIVO O NEGATIVO pero
NO CERO)

● se guarde todos los múltiplos generados en un conjunto de 10 elementos en
MEMORIA DINÁMICA

● al finalizar se muestre por pantalla el conjunto
Utilizar aritmética de punteros (ambas formas p+i y p++)

*/
#define sizeConj 10
#include <stdio.h>
#include <stdlib.h>

int IngresarNumero(){
    int numeroIngresado;
    do
    {
    printf("Ingrese numero distinto de 0\n");
    scanf("%d", &numeroIngresado);
    } while (numeroIngresado == 0);
    return numeroIngresado;
}
void CalcularMultiplos(int *mult, int nroIng){
for (int i = 0; i < 10; i++) {
        *(mult + i) = nroIng * (i + 1);
    }
}
void MostrarMultiplos(int *mult){
    for (int i = 0; i < 10; i++) {
        printf("Multiplo N: %d es %d\n",i + 1, *(mult++));
    }
}



int main(int argc, char const *argv[]){
int numero = IngresarNumero();
int* pMultiplos;
//asignamos memoria
pMultiplos = (int*)malloc(sizeConj * sizeof(int));
if (pMultiplos == NULL) {
        printf("No se pudo asignar memoria.\n");
}else{
    //calculamos los 10 multiplos
    CalcularMultiplos(pMultiplos, numero);
    //mostramos los 10 multiplos
    MostrarMultiplos(pMultiplos);
    free(pMultiplos);
}

return 0;
}

