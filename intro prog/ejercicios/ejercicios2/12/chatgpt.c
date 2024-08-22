#include <stdio.h>

int main() {
    // Variables
    int numeroFactura = 0, numeroArticulo, cantidadVendida, precioUnitario, valorFactura;
    int contadorArticulo1 = 0;
    int facturacionTotal = 0;
    int facturasMayores3000 = 0;
    int totalArticulo1 = 0, totalArticulo2 = 0, totalArticulo3 = 0;
    float porcentaje1, porcentaje2, porcentaje3;

    // Entrada
    printf("Ingrese numero de factura (0 para finalizar)\n");
    scanf("%d", &numeroFactura);

    // Proceso
    while (numeroFactura != 0) {
        do {
            printf("Ingrese numero de articulo (1, 2, 3)\n");
            scanf("%d", &numeroArticulo);
        } while (numeroArticulo < 1 || numeroArticulo > 3);

        printf("Ingrese cantidad del articulo %d vendida\n", numeroArticulo);
        scanf("%d", &cantidadVendida);

        printf("Ingrese precio unitario\n");
        scanf("%d", &precioUnitario);

        valorFactura = cantidadVendida * precioUnitario;
        facturacionTotal += valorFactura;

        if (valorFactura > 3000) {
            facturasMayores3000++;
        }

        switch (numeroArticulo) {
        case 1:
            contadorArticulo1++;
            totalArticulo1 += valorFactura;
            break;
        case 2:
            totalArticulo2 += valorFactura;
            break;
        case 3:
            totalArticulo3 += valorFactura;
            break;
        }

        printf("Ingrese numero de factura (0 para finalizar)\n");
        scanf("%d", &numeroFactura);
    }

    // Cálculos finales
    porcentaje1 = (float)totalArticulo1 / facturacionTotal * 100;
    porcentaje2 = (float)totalArticulo2 / facturacionTotal * 100;
    porcentaje3 = (float)totalArticulo3 / facturacionTotal * 100;

    // Resultados
    printf("\nResultados:\n");
    printf("Facturacion total: $%d\n", facturacionTotal);
    printf("Cantidad vendida del articulo 1: %d\n", contadorArticulo1);
    printf("Facturas mayores de $3000: %d\n", facturasMayores3000);
    printf("Porcentaje de monto vendido por articulo:\n");
    printf("Articulo 1: %.2f%%\n", porcentaje1);
    printf("Articulo 2: %.2f%%\n", porcentaje2);
    printf("Articulo 3: %.2f%%\n", porcentaje3);

    return 0;
}