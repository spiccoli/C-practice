//Ingresar 25 números, calcular su promedio e imprimirlo

#include <stdio.h>

int main(){
    //0 variables 
    const int tope = 25;
    int numeroIngresado, total, promedio;

    //1 ingreso de datos 
    for(int i = 0; i < tope; i++){
        printf("Ingrese su numero %d/%d\n", i+1, tope);
        scanf("%d", &numeroIngresado);
        total = total + numeroIngresado;
    }
    //2 procesos
    promedio = total / tope;
    //3 mostrar calculado
    printf("El promedio entre los numeros es %d", promedio);
    return 0;
}