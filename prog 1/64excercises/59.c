/*
Realizar un programa que genere un LISTADO por pantalla del stock de una
concesionaria de autos.
Para ello desarrollar un algoritmo donde:
● el usuario ingresa por teclado los datos (tipo figura entre paréntesis, no
es necesario validar):
- marca (string)
- modelo (string)
- color (string)
- cantidad (int)
- precio actual (double)
● se guarden los datos en un ARREGLO de estructuras
● la función de carga de UN SOLO PRODUCTO utilice puntero a
estructuras, con el siguiente encabezado:
○ void cargarUno (tipo_de_estructura* nombre_variable)
● se carguen sólo 5 productos
● al finalizar muestre por pantalla los datos cargados en forma de
COLUMNA
*/
#include <stdio.h>

#define NUM_PRODUCTOS 5

// Definición de la estructura para un producto
typedef struct {
    char marca[50];
    char modelo[50];
    char color[20];
    int cantidad;
    double precio_actual;
} Producto;

// Función para cargar un solo producto
void cargarUno(Producto* producto) {
    printf("Ingrese la marca: ");
    scanf("%s", producto->marca);
    printf("Ingrese el modelo: ");
    scanf("%s", producto->modelo);
    printf("Ingrese el color: ");
    scanf("%s", producto->color);
    printf("Ingrese la cantidad: ");
    scanf("%d", &producto->cantidad);
    printf("Ingrese el precio actual: ");
    scanf("%lf", &producto->precio_actual);
}

// Función principal
int main() {
    Producto productos[NUM_PRODUCTOS];

    // Cargar los productos
    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        printf("\nIngresar datos del producto %d:\n", i + 1);
        cargarUno(&productos[i]);
    }

    // Mostrar los datos cargados en forma de columna
    printf("\nListado de productos:\n");
    printf("%-15s %-15s %-10s %-10s %-15s\n", "Marca", "Modelo", "Color", "Cantidad", "Precio Actual");
    printf("-------------------------------------------------------------------------\n");
    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        printf("%-15s %-15s %-10s %-10d %-15.2f\n", productos[i].marca, productos[i].modelo, productos[i].color, productos[i].cantidad, productos[i].precio_actual);
    }

    return 0;
}
