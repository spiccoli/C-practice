/*
Se tiene guardado la información de N triángulos: los valores de cada uno de los
ÁNGULOS interiores (int). Esta información puede estar guardada en 3 arreglos
o una matriz de N x 3 o en un arreglo de estructuras de tipo triángulo. Decidirse
por una.
Desarrollar una FUNCIÓN que cuente cuántos triángulos son RECTÁNGULOS,
cuántos son OBTUSÁNGULOS. Para ello:
● recibe parámetros: al menos los datos de todos los triángulos y la
cantidad N
● “devuelve” las DOS cantidades
● no lee ni imprime nada
Nota: rectángulos (uno de los ángulos mide 90 grados), obtusángulos (uno de
los ángulos mide más de 90 grados).
Agregar aparte las instrucciones del main relacionadas a esta función:
declaración de variables y llamada a ejecución. Esta función se ejecuta SÓLO
UNA VEZ para averiguar ambos valores.
*/
#include <stdio.h>
#include <stdlib.h>
#define N 4

void countRightObtuseTriangles(int triangles[][3],int size){
    int rightTriangles = 0;
    int ObtuseTriangles = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 3; j++) {
            if (triangles[i][j] == 90) {
                rightTriangles++;
            } else if (triangles[i][j] > 90) {
                ObtuseTriangles++;
            }
        }
    }
    printf("RightTriangles: %d, ObtuseTriangles: %d", rightTriangles, ObtuseTriangles);
}


int main(){
int triangles[N][3] = {{30,60,90},{45,45,90},{20,40,120},{45,45,90}};
countRightObtuseTriangles(triangles, N);
return 0;
}