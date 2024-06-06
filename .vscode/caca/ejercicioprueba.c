#include <stdio.h>

int main() {
    int numCaja, numSeccion, cantidadTickets = 0;
    double importeVenta, tiempoCaja, productosComprados, descuento, montoTotal = 0.0;
    double montoRecaudadoPorSeccion[6] = {0.0}; // Inicializamos el arreglo para cada sección

    printf("Ingrese los datos de las ventas (número de caja, número de sección, importe de la venta, tiempo en caja, cantidad de productos comprados, nro de ticket):\n");

    while (1) {
        scanf("%d", &numCaja);
        if (numCaja == 0) {
            break; // Finalizamos la entrada de datos
        }

        scanf("%d %lf %lf %lf %lf", &numSeccion, &importeVenta, &tiempoCaja, &productosComprados, &descuento);

        // Calculamos el monto recaudado por sección
        montoRecaudadoPorSeccion[numSeccion - 1] += importeVenta;

        // Aplicamos el descuento si corresponde
        if (importeVenta > 50.0) {
            importeVenta *= 0.98; // 2% de descuento
        }

        montoTotal += importeVenta;
        cantidadTickets++;
    }

    // Calculamos los valores solicitados
    double porcentajeMontoPorCaja = (montoTotal / 10.0) * 100.0;
    double montoTotalDescontado = montoTotal - (montoTotal / 1.02); // Restamos el descuento
    double porcentajeMontoDescontado = (montoTotalDescontado / montoTotal) * 100.0;

    printf("A. Cantidad de tickets emitidos: %d\n", cantidadTickets);
    printf("B. Cantidad de tickets emitidos por caja: %d\n", cantidadTickets / 10);
    printf("C. Ticket de mayor tiempo en caja: (Implementación requerida)\n");
    printf("D. Monto recaudado por sección:\n");
    for (int i = 0; i < 6; i++) {
        printf("   Sección %d: $%.2lf\n", i + 1, montoRecaudadoPorSeccion[i]);
    }
    printf("E. Porcentaje del monto recaudado por caja sobre el total: %.2lf%%\n", porcentajeMontoPorCaja);
    printf("F. Cantidad de comprobantes con monto mayor a $100: (Implementación requerida)\n");
    printf("G. Monto total descontado: $%.2lf\n", montoTotalDescontado);
    printf("H. Porcentaje del monto total descontado sobre el total vendido: %.2lf%%\n", porcentajeMontoDescontado);

    return 0;
}