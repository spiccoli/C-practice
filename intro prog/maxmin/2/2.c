//Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y menor


#include <stdio.h>


int main(int argc, char const *argv[])
{
    int temperatura = 0;
    int max = 0, min = 0;

    while (temperatura != 1000)
    {   
        printf("Ingrese temperatura \n");
        scanf("%d",&temperatura);

        if (max == 0 && min == 0)
        {
            max = temperatura;
            min = temperatura;
        }

        if (temperatura > max) max = temperatura;    
        if (temperatura < min) min = temperatura;
    }
    
    printf("Temp max %d\n", max);
    printf("Temp min %d\n", min);
    return 0;
}
