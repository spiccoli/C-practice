// ( solo se considera que existira uno solo o se tomara al primero que aparezca, para capturar mas valores se vera mas adelante) 
// 1. Ingresar N temperaturas , indicar e imprimir la máxima y mínima

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int max = 0;
    int min = 0;
    int valorActual;
    int n;

    printf("Ingrese cantidad de valores\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese temperatura %d\n", i + 1);
        scanf("%d",&valorActual);

        if (max == 0 && min == 0)
        {
            max = valorActual;
            min = valorActual;
        }        

        if (valorActual > max) max = valorActual;
        if (valorActual < min) min = valorActual;
    }

    printf("Temperatura maxima %d\n", max);
    printf("Temperatura minima %d\n", min);
    return 0;
}
