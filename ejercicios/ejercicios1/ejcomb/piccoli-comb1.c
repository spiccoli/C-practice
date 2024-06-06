/*
1. En una empresa los empleados cobran un sueldo según la categoria, son 10 empleados y 3 categorías
Categoría 1 = $ 1500
Categoría 2 = $ 2000
Categoría 3 = $ 2500

Al sueldo se le suman $ 100 por cada año trabajado.
Si se ingresa el nombre, categoría y antigüedad de cada empleado, 
calcular 
A. Cuántos empleados hay por categoría HECHO ///////
B. Total de sueldos pagados por categoría HECHO /////
C. Sueldo promedio general HECHO /////
D. Sueldo máximo y a quién pertenece POR HACER
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
//0variables y const
    const int cantEmpleados = 10;
    const int cat1 = 1500;
    const int cat2 = 2000;
    const int cat3 = 2500;
    const int cantFijaAntiguedad = 100;
//reporte a
    int  sumaEmpleadosCat1 = 0;
    int  sumaEmpleadosCat2 = 0;   
    int  sumaEmpleadosCat3 = 0;
//reporte b
    int sumaSueldosEmpleadosCat1 = 0;
    int sumaSueldosEmpleadosCat2 = 0;
    int sumaSueldosEmpleadosCat3 = 0;
    int sueldomayor =0;
//variables de entrada
    int legajo, antiguedad, categoria;
    int sueldo;
    int i;
    int empleadoMax;
    double promedio;
//2proceso
    for ( i = 0; i < cantEmpleados; i++)
    {
        printf("----Empleado numero %d/%d----\n", i+1, cantEmpleados);
        printf("Ingrese la antiguedad\n");
        scanf("%d", &antiguedad);
        do
        {
            printf("Ingrese la categoria\n");
            scanf("%d", &categoria);
        } while (categoria < 1 || categoria > 3);

        
        
        switch (categoria){
        case 1:
            sumaEmpleadosCat1++;
            sueldo = cat1 + (antiguedad * cantFijaAntiguedad);
            sumaSueldosEmpleadosCat1 = sumaSueldosEmpleadosCat1 + sueldo;
            if (sueldo > sueldomayor) {
                sueldomayor = sueldo;
                empleadoMax = i+1;
            }

            printf("su sueldo es de %d\n", sueldo);
            break;
        case 2:
            sumaEmpleadosCat2++;
            sueldo = cat1 + (antiguedad * cantFijaAntiguedad);
            sumaSueldosEmpleadosCat2 = sumaSueldosEmpleadosCat2 + sueldo;
            printf("su sueldo es de %d\n", sueldo);
            if (sueldo > sueldomayor) {
            sueldomayor = sueldo;
            empleadoMax = i+1;
            }
            break;
        case 3:
            sumaEmpleadosCat3++;
            sueldo = cat1 + (antiguedad * cantFijaAntiguedad);
            sumaSueldosEmpleadosCat3 = sumaSueldosEmpleadosCat3 + sueldo;
            if (sueldo > sueldomayor) {
            sueldomayor = sueldo;
            empleadoMax = i+1;
            }
            printf("su sueldo es de %d\n", sueldo);
            break;

        default:
            printf("Categoria no encontrada\n");
            break;
        }
    }
    
//3salida
    printf("La suma de empleados categoria 1 es de %d:\n",sumaEmpleadosCat1);
    printf("La suma de empleados categoria 2 es de %d:\n",sumaEmpleadosCat2);
    printf("La suma de empleados categoria 3 es de %d:\n",sumaEmpleadosCat3);
    printf("el mayor sueldo es de %d y pertenece al empleado %d\n", sueldomayor, empleadoMax);
    printf("el promedio de sueldos es %lf", promedio);
    

    return 0;
}
