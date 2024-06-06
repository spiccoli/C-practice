//. Ingresar la patente y monto de la multa de 50 autos, 
// indicar e imprimir cuántos montos superan los $ 40 y del total cobrado que porcentaje representa la suma de los que superan los $40

#include <stdio.h>

int main(){
//0 variables
    const tope = 50;
    int patente, monto;
    int contadorMonto40 = 0;
    int totalCobrado = 0;
    float porcentaje;
//1 entrada
    for(int i = 0; i < tope; i++){
        printf("Ingrese patente %d/%d", i+1, tope);
        scanf("%d", &patente);
        printf("Ingrese monto %d/%d", i+1, tope);
        scanf("%d", &monto);
        if(monto > 40) contadorMonto40++;
        totalCobrado += monto;
    }
//2 proceso
    porcentaje = (totalCobrado / monto) * 100;
//3 salida
    printf("La cantidad de montos que superan los 40 son de: %d", contadorMonto40);
    printf("Del total cobrado, el porcentaje que representan los pagos de 40 es de: %f", porcentaje);
    return 0;
}