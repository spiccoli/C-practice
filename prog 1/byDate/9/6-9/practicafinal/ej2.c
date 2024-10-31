/* 
Ejercicio 1 (15 puntos)
Realizar una FUNCIÓN que calcule el VOLUMEN de una esfera. Para ello:
● recibe la medida del RADIO (INT mayor a cero, ya validado)
● devuelve el volumen
● no lee ni imprime nada
Nota: volumen = 4/3 * PI * RADIO3
Resolver utilizando lenguaje C standard. Declarar PI como constante o macro.
*/
#include <stdio.h>
#define PI 3,14
int calcularVolumen(int radio){
    return ((4/3) * PI * radio);
}

int main(int argc, char const *argv[]){
    printf("%d\n", calcularVolumen(2));
    
return 0;
}