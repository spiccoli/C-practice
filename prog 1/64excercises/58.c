/*
Realizar un programa que genere un LISTADO por pantalla del stock de una
tienda de ropa.
Para ello desarrollar un algoritmo donde:
● el usuario ingrese por teclado los datos (tipo figura entre paréntesis, no
es necesario validar):
- nombre del producto (string)
- color (string)
- talle (int)
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
#include <string.h>

// Definir la estructura Producto
typedef struct {
    char nombre[50];
    char color[20];
    int talle;
    int cantidad;
    double precio;
} Producto;

// Función para cargar un solo producto usando un puntero a estructura
void cargarUno(Producto* p) {
    // Cargar los datos del producto
    printf("Ingrese el nombre del producto: ");
    getchar(); // Limpiar el buffer de entrada
    fgets(p->nombre, sizeof(p->nombre), stdin);
    p->nombre[strcspn(p->nombre, "\n")] = '\0'; // Eliminar el salto de línea al final

    printf("Ingrese el color del producto: ");
    fgets(p->color, sizeof(p->color), stdin);
    p->color[strcspn(p->color, "\n")] = '\0'; // Eliminar el salto de línea al final

    printf("Ingrese el talle del producto (número entero): ");
    scanf("%d", &p->talle);

    printf("Ingrese la cantidad disponible del producto: ");
    scanf("%d", &p->cantidad);

    printf("Ingrese el precio actual del producto: ");
    scanf("%lf", &p->precio);
}

int main() {
    Producto stock[5]; // Arreglo para almacenar 5 productos
    int i;

    // Cargar los productos
    for (i = 0; i < 5; i++) {
        printf("\nProducto %d:\n", i + 1);
        cargarUno(&stock[i]); // Llamamos a la función con el puntero a la estructura
        printf("\n");
    }

    // Mostrar el listado de productos
    printf("\nListado de Productos:\n");
    printf("-----------------------------------------\n");
    printf("Nombre               | Color       | Talle | Cantidad | Precio\n");
    printf("-----------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-20s | %-10s | %-5d | %-8d | %.2f\n",
               stock[i].nombre, stock[i].color, stock[i].talle,
               stock[i].cantidad, stock[i].precio);
    }

    return 0;
}
