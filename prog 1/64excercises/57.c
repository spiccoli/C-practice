/*
Realizar un programa que lea por teclado un número ENTERO y luego muestre
por pantalla los 10 primeros múltiplos, utilizando MEMORIA DINÁMICA.

Para ello desarrollar un algoritmo donde:
● se pida al usuario el primer número (ENTERO POSITIVO O NEGATIVO
pero NO CERO) DONE

● se guarde todos los múltiplos generados en un conjunto de 10 elementos
en MEMORIA DINÁMICA

● al finalizar se muestre por pantalla el conjunto
Utilizar aritmética de punteros (ambas formas p+i y p++)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int entero;
    do{
        printf("entre numero entero > 0\n");
        scanf("%d", &entero);
    } while (entero <= 0);

    int *multiplos = (int *)calloc(10, sizeof(int));
    if (multiplos == NULL){
        printf("no sepudo asignar pa");
    }
    else{
        *(multiplos + 0) = entero;
        for (int i = 1; i < 10; i++){
            *(multiplos + i) = *(multiplos + i - 1) + entero;
        }
        for (int i = 0; i < 10; i++){
            printf("%d ", *(multiplos + i));
        }
    }

    return 0;
}
