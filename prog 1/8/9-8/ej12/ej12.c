/*12
Escribir una función que determine si un número es primo.*/

#include <stdio.h>
int primeNumber(int number)
{    
    if (((2 ^ number - 1) % 2) != 0)
    {
        printf("no es primo\n");
        return 1;
    }
    else
        printf("si es primo\n");
    return 0;
}

int main(int argc, char const *argv[])
{

    primeNumber(3);

    return 0;
}