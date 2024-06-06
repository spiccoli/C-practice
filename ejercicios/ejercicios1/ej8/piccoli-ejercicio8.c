/*
Ejercicio 8, abril 
Pensar un enunciado en el cual se evalúa una condición y tenga instrucciones por verdadero y falso.
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int edad;
    printf("Voy a decirle a que grupo etario pertenece\n");
    printf("Ingrese su edad\n");
    scanf("%d", &edad);

    if (edad <= 3) 
    {
        printf("Usted probablemente no sea el que este escribiendo, pero es un bebe"); 
    }
    else if(edad <= 11){
        printf("Usted esta en la niñez");
    }     
    else if (edad <= 18){
        printf("Usted esta en la adolescencia");
    } 
    else if(edad <= 30) {
        printf("Usted esta en la juventud");
    } 
    else if(edad <= 60) {
        printf("Usted esta en la adultez");
    } 
    else {
        printf("Usted esta en la vejez");
    }
    
    return 0;
}
