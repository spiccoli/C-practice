// Sobre el ejercicio anterior indicar cuántas estan entre $ 400 y $ 700 inclusive.imprimir el resultado

#include <stdio.h>

int main(){

    int numeroFactura = 0;
    int importe = 0;
    int sumaImportes = 0;
     int contador400700;
    int contadorFacturas1000;
    int contadorFacturas10k;

    printf("Ingresar numero de factura. (Ingrese 0 para finalizar) \n");
    scanf("%d", &numeroFactura);

    while (numeroFactura != 0)
    {   

        printf("Ingresar importe de factura\n");
        scanf("%d", &importe);
        if (importe > 400 && importe <700){
            contador400700++;
            sumaImportes += importe;
            printf("factura entre 400 y 700 | numero %d\n", importe);
        }

        if(importe > 1000 && importe <= 10000){ 
            contadorFacturas1000++;
            sumaImportes += importe;
            printf("factura excediente a 1000 | numero excediente %d\n", importe);
        }else if(importe > 10000){
            contadorFacturas10k++;
            sumaImportes += importe;
            printf("factura excediente a 10000 | numero excediente %d\n", importe);
        }    

        sumaImportes = sumaImportes + importe;
        printf("Ingresar numero de factura. (Ingrese 0 para finalizar) \n");
        scanf("%d", &numeroFactura);
    }
    printf("-------------------\n");
    printf("El numero de facturas entre 400 y 700 fue de %d\n", contador400700);
    printf("El numero de facturas excedientes a 1000 fue de %d\n", contadorFacturas1000);
    printf("El numero de facturas excedientes a 10000 fue de %d\n", contadorFacturas10k);
    printf("Programa perfectamente finalizado\n");
    
    return 0;
}