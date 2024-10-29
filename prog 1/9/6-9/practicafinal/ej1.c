/*
Desarrollar una FUNCIÓN que realice la carga de UNA transacción financiera de una empresa.
Para ello:
● no recibe parámetros
● devuelve “una transacción” que consta de fecha (día, mes, año) y monto
● no imprime, no valida pero sí lee los datos.
Resolver utilizando lenguaje C standard, estructuras.

*/

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anio;
    float monto;
}Transaccion;

Transaccion cargarDatos(){
    Transaccion t;
    printf("Ingrese dia\n");
    scanf("%d", &t.dia);
    printf("Ingrese mes\n");
    scanf("%d", &t.mes);
    printf("Ingrese anio\n");
    scanf("%d", &t.anio);
    printf("Ingrese monto\n");
    scanf("%f", &t.monto);
return t;
}
int main(int argc, char const *argv[]){
Transaccion miTransaccion = cargarDatos();
printf("La transaccion es: dia %d, mes: %d, anio: %d, monto: %.2f\n", miTransaccion.dia,
                                                                    miTransaccion.mes,
                                                                    miTransaccion.anio,
                                                                    miTransaccion.monto);
return 0;
}