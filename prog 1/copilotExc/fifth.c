
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float base;
    float altura;
    char tipo; // e i s
}tipo_triangulo;

void cargaTriangulos(tipo_triangulo* a, int b){
}

void informe(tipo_triangulo* triangulos, int cantTriangulos){
    int contadorE = 0, contadorI = 0, contadorS = 0;
    float promE = 0, promI = 0, promS = 0;
    float sumaE = 0, sumaI = 0, sumaS = 0;
for (int i = 0; i < cantTriangulos; i++)
{
    switch ((triangulos + i)->tipo) {
    case 'E':
        contadorE++;
        sumaE += (((triangulos + i)->base)*(triangulos->altura))/2;
        break;
    case 'I':
        contadorI++;
        sumaE += (((triangulos + i)->base)*(triangulos->altura))/2;
        break;
    case 'S':
        contadorS++;
        sumaE += (((triangulos + i)->base)*(triangulos->altura))/2;
        break;
    default:
        break;
    }
}

    
    promE = sumaE / contadorE;
    promI = sumaI / contadorI;
    promS = sumaS / contadorS;
    printf("Promedio equilateros: %f, Promedio isosceles: %f, Promedio escalenos: %f", promE,promI,promS);
}