/*
Ejercicio 9, abril 
Pensar un enunciado en el cual se evalúa una variable quepuede 
tomar varios valores y cada valor muestra un mensaje al usuario.

una calculadora simple
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{   
    char operador;
    double num1, num2, resultado;
    printf("ingrese el primer numero\n");
    scanf("%lf", &num1);
    printf("seleccione un tipo de operador que quiere utilizar: * / + -\n");
    scanf("%s", &operador);
    printf("ingrese el segundo numero\n");
    scanf("%lf", &num2);

    switch (operador) {
    case '*':
       resultado = num1 * num2;
       printf("el resultado es %lf", resultado);
        break;
    case '/':
       resultado = num1 / num2;
       printf("el resultado es %lf", resultado);
        break;
    case '+':
       resultado = num1 + num2;
       printf("el resultado es %lf", resultado);
        break;
    case '-':
       resultado = num1 - num2;
       printf("el resultado es %lf", resultado);
        break;            
    default: 
        printf("el resultado es %lf", resultado);
        break;
    }
    return 0;
}
