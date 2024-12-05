/*
Se trataba dw una Empresa textil
En una estructura cargar
Producto
Talle
Stock
Precio 
Cargar esa información en un txt
Mostrar en pantalla valoración total (suma de precio×stock de todas las unidade) 
Y mostrar los precios de cada producto con una inflación del 10%
 */

#include <stdio.h>

typedef struct{
    char producto[21];
    char talle[3];
    int stock;
    float precio;
}Inventario;

void mostrarValoracion(const char *filename){
    FILE *inv_file = fopen(filename, "r");
    if(inv_file == NULL){
        printf("el archivo no se pudo abrir\n");
    }else{
        Inventario inv;
        float suma = 0;
        float sumaInflada = 0;
        printf("(precios con 10%% de inflacion)\n");
        printf("producto\t\ttalle\tstock\tprecio\tprecio con inflacion\n");
        while (fscanf(inv_file, "%s %s %d %f", inv.producto, inv.talle, &inv.stock, &inv.precio) == 4)
        {
            printf("%-21s\t%-3s\t%-10d\t%-10.2f\t%-10.2f\n",inv.producto, inv.talle, inv.stock, inv.precio, inv.precio * 1.1);
            suma += inv.stock * inv.precio;
            sumaInflada += inv.stock * (inv.precio * 1.1);
        }
        printf("La valoracion total es de: %.2f\n", suma);
        printf("La valoracion total inflada es de: %.2f\n", sumaInflada);

        fclose(inv_file);
    }
}
void cargarInventario(const char *filename){
    FILE *inv_file = fopen(filename, "a");
    if(inv_file == NULL){
        printf("el archivo no se pudo abrir\n");
    }else{
        Inventario inv;
        printf("Ingrese nombre producto(Sin espacios): ");
        scanf("%s", inv.producto);
        printf("Ingrese talle del producto %s: ", inv.producto);
        scanf("%s", inv.talle);
        printf("Ingrese stock: ");
        scanf("%d", &inv.stock);
        printf("Ingrese precio: "); 
        scanf("%f", &inv.precio);
        fprintf(inv_file, "%s %s %d %.2f\n", inv.producto, inv.talle, inv.stock, inv.precio);
        fclose(inv_file);
    }
    return;
}

int main() {
    const char *filename = "text.txt";
    cargarInventario(filename);
    mostrarValoracion(filename);
 return 0;
}