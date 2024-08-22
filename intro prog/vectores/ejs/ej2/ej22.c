/*
10 empleados, 10 sueldos
sueldo minimo con legajo X
sueldo maximo con legajo X
promedio sueldo X
cuantos hay por debajo del promedio X
*/
typedef struct{
    int nroLegajo;
    float sueldo;
}Empleado;

#define SIZE 1
#include <stdio.h>
int main(int argc, char const *argv[]){
//declaramos   
Empleado empleado[SIZE];

float totalSueldos, maxSueldo = 0, minSueldo = 0;
float promSueldo = totalSueldos / SIZE;
int debajoProm = 0, legajoMaxSueldo = 0, legajoMinSueldo;

// input
for (int i = 0; i < SIZE; i++)
{
    printf("Ingrese nro de legajo\n");
    scanf("%d", &empleado[i].nroLegajo);
    printf("Ingrese sueldo\n");
    scanf("%f", &empleado[i].sueldo);
    totalSueldos += empleado[i].sueldo;

}

//prints
for (int i = 0; i < SIZE; i++)
{
    printf("el empleado nro legajo %d corresponde a un sueldo %f\n",empleado[i].nroLegajo,empleado[i].sueldo);
    if (empleado[i].sueldo < promSueldo) debajoProm++;
    
    if (maxSueldo == 0 && minSueldo == 0){
        maxSueldo = minSueldo =  empleado[i].sueldo; 
        legajoMaxSueldo = legajoMinSueldo = empleado[i].nroLegajo;
    }
    if (empleado[i].sueldo > maxSueldo) {
        maxSueldo = empleado[i].sueldo;
        legajoMaxSueldo = empleado[i].nroLegajo;
    }
    if (empleado[i].sueldo < minSueldo) {
        minSueldo = empleado[i].sueldo;
        legajoMinSueldo = empleado[i].nroLegajo;
    }

}

printf("el promedio de sueldo fue de %.2f\n", promSueldo);
printf("%d estan por debajo del promedio\n", debajoProm);
printf("el mayor sueldo es de %.2f correspondiente a %d\n", maxSueldo, legajoMaxSueldo);
printf("el menor sueldo es de %.2f correspondiente a %d\n", minSueldo, legajoMinSueldo);



return 0;
}