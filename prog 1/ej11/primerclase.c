/*11
Escribir una función que calcule el factorial de un número.
Nota: Si ya sabés recursividad, realizar una con y otra sin.*/
#include <stdio.h>

int factorial(int number) {
    int result = 1; 
    for (int i = 1; i <= number; i++) {
        result *= i; 
    }
    return result;
}

int recursiveFactorial(int a){
    if (a == 0 || a == 1) {
            return 1; 
        } else {
            return a * recursiveFactorial(a - 1); 
        }
    }

int main(int argc, char const *argv[]){
int myNumber = 4;

printf("el factorial de %d es: %d\n",myNumber,factorial(myNumber));

return 0;
}
