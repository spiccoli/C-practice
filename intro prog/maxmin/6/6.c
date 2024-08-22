// Ingresar el precio de N artículos, indicar e imprimir el más caro, el más barato, el precio promedio y la suma de todos los precios

#include <stdio.h>

int main(){
//0 variables
    int n;
    int articuloMasCaro = 0;
    int articuloMasBarato = 0;
    int precio;
    float precioPromedio;
    int sumaPrecios;
//1 entrada
    printf("Ingresar cantidad de articulos a ingresar\n");
    scanf("%d",&n);
//2 proceso
    for(int i = 0; i < n; i++){
        printf("Ingrese precio de articulo %d\n", i + 1);
        scanf("%d", &precio);
        if(articuloMasCaro == 0 && articuloMasBarato == 0){
            articuloMasCaro = precio;
            articuloMasBarato = precio;
        }
        if(precio > articuloMasCaro) articuloMasCaro = precio;
        if(precio < articuloMasBarato) articuloMasBarato = precio;
        sumaPrecios += precio;
    }
    precioPromedio = (float) sumaPrecios / n;
//3 salida
    printf("El articulo mas caro es %d\n", articuloMasCaro);
    printf("El articulo mas barato es %d\n", articuloMasBarato);
    printf("El precio promedio es de %.2f\n", precioPromedio);
    return 0;
}