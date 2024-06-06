// Ingresar facturas hasta nro de factura = 0, sumar sus importes y cúales y cuantas superan los $1000 imprimir los resultados.

#include <stdio.h>

int main(){

    int numeroFactura = 0;
    int importe = 0;
    int sumaImportes = 0;
    int contadorFacturas1000;
    int i = 0;

    printf("Ingresar numero de factura. (Ingrese 0 para finalizar) \n");
    scanf("%d", &numeroFactura);

    while (numeroFactura != 0)
    {   

        printf("Ingresar importe de factura\n");
        scanf("%d", &importe);

        if(importe > 1000){ 
        contadorFacturas1000++;
        sumaImportes += importe;
        printf("factura excediente a 1000 | numero excediente %d\n", importe);
        }

        printf("Ingresar numero de factura. (Ingrese 0 para finalizar) \n");
        scanf("%d", &numeroFactura);
    }
    if (contadorFacturas1000 > 0)
    {
        printf("El numero de facturas excedientes a 1000 fue de %d\n", contadorFacturas1000);
    }
    printf("Programa perfectamente finalizado\n");
    
    return 0;
}