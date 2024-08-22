// Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros.

#include <stdio.h>

int main(){
//0 variables
    int n;
    int cantidadPositivos = 0;
    int cantidadNegativos = 0;
    int cantidadCeros = 0;
    int sumaPositivos = 0;
    int sumaNegativos = 0;
    int sumaCeros = 0;
    int valor;
    float promedioPositivos, promedioNegativos;
//1 entrada   
    printf("Ingrese cantidad de valores a ingresar\n");
    scanf("%d", &n);


    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el valor %d\n", i + 1);
        scanf("%d", &valor);

        if (valor > 0){
            cantidadPositivos++;
            sumaPositivos += valor;
        }else if (valor < 0){
            cantidadNegativos++;
            sumaPositivos += valor;
        }else cantidadCeros++;
    }
//2 proceso
    promedioPositivos = cantidadPositivos / sumaPositivos;
    promedioNegativos = cantidadNegativos / sumaNegativos;
//3 salida
    printf("El promedio de positivos es de %d\n", promedioPositivos);
    printf("El promedio de negativos es de %d\n", promedioNegativos);    
    printf("La cantidad de ceros es de %d\n", cantidadCeros);
    return 0;
}