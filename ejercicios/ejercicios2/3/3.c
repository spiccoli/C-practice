//Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados

#include <stdio.h>

int main(){
    int contadorSueldos = 0;
    int sumaSueldos = 0;
    int sueldo;
    float promedio;
    
    printf("Ingrese sueldo n %d (Ingrese 0 para finalizar)\n", contadorSueldos+1);
    scanf("%d", &sueldo);

    do
    {
        sumaSueldos += sueldo;
        contadorSueldos++;
        printf("Ingrese sueldo n %d (Ingrese 0 para finalizar)\n", contadorSueldos+1);
        scanf("%d", &sueldo);   
    } while (sueldo != 0);

    promedio = sumaSueldos / contadorSueldos;

    printf("El total de la suma de sueldos es de %d\n", sumaSueldos);
    printf("El sueldo promedio es de %.02f", promedio);

    return 0;
}