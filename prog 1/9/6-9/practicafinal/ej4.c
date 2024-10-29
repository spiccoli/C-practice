/*

Se registraron todos los gastos realizados y la información se guardó en UN ARREGLO con los
MONTOS de cada gasto.
Desarrollar una FUNCIÓN que averigüe cuantos gastos fueron MAYORES AL PROMEDIO
para alertar y poder revisar los gastos. Para ello:
● recibe como parámetros el arreglo con los montos y la cantidad N
● devuelve la CANTIDAD de gastos mayores al promedio
● no lee ni imprime nada
Resolver utilizando lenguaje C standard, ESTRUCTURAS.

*/
#include <stdio.h>

typedef struct {
    float monto;
} Gasto;

float CalcularPromedio(Gasto gastos[], int n) {
    float sumador = 0.0;
    for (int i = 0; i < n; i++) {
        sumador += gastos[i].monto;
    }
    return sumador / n;
}

int main(int argc, char const *argv[]) {
    Gasto gastos[] = {{100.00}, {20.00}, {134.00}, {125.00}};
    int n = sizeof(gastos) / sizeof(gastos[0]);
    printf("Promedio de gastos: %.2f\n", CalcularPromedio(gastos, n));
    return 0;
}
