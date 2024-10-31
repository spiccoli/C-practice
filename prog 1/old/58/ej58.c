/*
Realizar un programa que genere un LISTADO por pantalla del stock de una tienda de
ropa.

Para ello desarrollar un algoritmo donde:
● el usuario ingrese por teclado los datos CHECK
(tipo figura entre paréntesis, no es necesario validar):???

- nombre del producto (string)
- color (string)
- talle (int)
- cantidad (int) 
- precio actual (double)
CHECK
● se guarden los datos en un ARREGLO de estructuras CHECK

● la función de carga de UN SOLO PRODUCTO utilice puntero a estructuras, con
el siguiente encabezado:

○ void cargarUno (tipo_de_estructura* nombre_variable)
● se carguen sólo 5 productos
● al finalizar muestre por pantalla los datos cargados en forma de COLUMNA

*/
#include <stdio.h>
#define MAXPRODUCTOS 2
#define MAXCHAR 50

typedef struct 
{
    char nombre[MAXCHAR];
    char color[MAXCHAR];
    int talle;
    double precioActual;
}Producto;

void cargarUno(Producto prod[]){
    printf("\n-------\n");
    printf("Ingrese el nombre del producto\n");
    scanf("%s", &prod->nombre);
    printf("Ingrese el color del producto\n");
    scanf("%s", &prod->color);
    printf("Ingrese el talle del producto\n");
    scanf("%d", &prod->talle);
    printf("Ingrese el precio del producto\n");
    scanf("%lf", &prod->precioActual);
}

void mostrar(Producto* prod){
    printf("\nItem | Nombre | Color | Talle | Precio\n");
    for (int i = 0; i < MAXPRODUCTOS; i++)
    {
        printf("%d\t", i+1);
        printf("%s\t", prod[i].nombre);
        printf("%s\t", prod[i].color);
        printf("%d\t", prod[i].talle);
        printf("%.2lf\t", prod[i].precioActual);
        printf("-------\n");
    }   
}

int main(int argc, char const *argv[]){
Producto arregloProducto[MAXPRODUCTOS];
for (int i = 0; i < MAXPRODUCTOS; i++)
{
    cargarUno(&arregloProducto[i]);
}
mostrar(arregloProducto);
return 0;
}