#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero, total = 0, index =1;
    printf("ingrese un numero\n");
    scanf("%d", &numero);

    while (index < 3)
    {
        puts("ingrese numero");
        scanf("%d",&numero);
        total = total + numero;
        index++;
    }
    printf("%d", total);
    return 0;
}
