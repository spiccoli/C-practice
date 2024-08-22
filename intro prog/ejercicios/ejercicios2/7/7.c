//Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos ceros

#include <stdio.h>
const int tope = 10;
int num = 0;
int contadorpositivos = 0;
int contadornegativos = 0;
int contadorceros = 0;



int main(int argc, char const *argv[])
{
    for (int i = 0; i < tope; i++)
    {
        printf("Ingresar primer valor %d/%d\n", i+1, tope
        );
        scanf("%d", &num);
        if(num > 0){
            contadorpositivos++;
        }else if (num < 0){
            contadornegativos++;  
        }else{
            contadorceros++;
        }
    }
    printf("El numero de positivos ingresados es de %d\n", contadorpositivos);
    printf("El numero de negativos ingresados es de %d\n", contadornegativos);
    printf("El numero de ceros ingresados es de %d\n", contadorceros);
    return 0;
}
