/*
Ejercicio 1 (15 puntos)
Realizar una FUNCIÓN que calcule el ÀREA de un rombo. Para ello:
● recibe las medidas de la DIAGONAL MAYOR y la DIAGONAL MENOR. (INT mayor
a cero, ya validados)
● devuelve el área
● no lee ni imprime nada
Nota: área = DIAGONAL MAYOR * DIAGONAL MENOR / 2
Resolver utilizando lenguaje C standard.
*/
#include <stdio.h>
float calcularAreaRombo(int diagonalMayor, int diagonalMenor){
    return ((diagonalMayor * (float)diagonalMenor)/2);
}

int main(int argc, char const *argv[]){
    printf("%.2f\n", calcularAreaRombo(3,5));
    
return 0;
}