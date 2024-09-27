/*Invertir arreglo */
#include <stdio.h>
#define size 5

void ImprimirNombre(char * pNombre)
{
    printf("\n----------\n");
    for (int i = 0; i < size; i++)
    {
        printf("%c", *(pNombre + i));
    }
    printf("\n----------\n");
}

void darVuelta(char *pNombre)
{
    char temp;
    int contadorInverso = (size-1);
    for (int i = 0; i < (size/2); i++)
    {
        temp = *(pNombre + i);
        *(pNombre + i) = *(pNombre + contadorInverso);
        *(pNombre + contadorInverso) = temp;
        contadorInverso--; 
    }
}

int main(int argc, char const *argv[])
{
    char nombre[size] = "Tomas";
    char *pNombre = &nombre[0];

    printf("\nEl nombre previo a ser invertido\n");
    ImprimirNombre(pNombre);

    darVuelta(pNombre);

    printf("\nEl nombre luego de ser invertido\n");
    ImprimirNombre(pNombre);
    
    return 0;
}
