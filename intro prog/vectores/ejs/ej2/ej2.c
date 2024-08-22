/*
PICCOLI, mes, 2024, 
actividad 

int 10 empleados
float 10 sueldos || ingreso de usuario

sueldo minimo con legajo X
sueldo maximo con legajo X
promedio sueldo X
cuantos hay por debajo del promedio X
*/

#include <stdio.h>
#define SIZE 3

int main(){
//variables
    int numLegajo[SIZE] = {0};
    float sueldo[SIZE] = {0};
    float minSueldo = 0, maxSueldo = 0;
    float sumaSueldos = 0, promedio = 0;
    int nroEmpleadoMayorSueldo = 0, nroEmpleadoMenorSueldo = 0;
    int contadorBajoPromedio = 0;
//entrada
    for (int i = 0; i < SIZE; i++)
    {
        printf("Ingrese numero de legajo del empleado %d\n", i + 1);
        scanf("%d", &numLegajo[i]);
        printf("Ingrese sueldo del empleado numero de legajo %d\n", numLegajo[i]);
        scanf("%f", &sueldo[i]);
        sumaSueldos += sueldo[i];
        if (maxSueldo == 0 && minSueldo == 0)
        {
            minSueldo = sueldo[i];
            maxSueldo = sueldo[i];
            nroEmpleadoMayorSueldo = numLegajo[i];
            nroEmpleadoMenorSueldo = numLegajo[i];

        } else if (sueldo[i] > maxSueldo){
            maxSueldo = sueldo[i];
            nroEmpleadoMayorSueldo = numLegajo[i];
        } else if (sueldo[i] < minSueldo){
            minSueldo = sueldo[i];
            nroEmpleadoMenorSueldo = numLegajo[i];
        }
    }

    promedio = sumaSueldos / SIZE;

    for ( int j = 0; j < SIZE; j++)
    {
       if (sueldo[j] < promedio) contadorBajoPromedio++;
    }
        
    printf("El sueldo maximo fue: %.2f perteneciente a %d\n", maxSueldo, nroEmpleadoMayorSueldo);
    printf("El sueldo minimo fue: %.2f perteneciente a %d\n", minSueldo, nroEmpleadoMenorSueldo);
    printf("El sueldo promedio fue: %.2f\n", promedio);
    printf("La cantidad de sueldo por debajo del promedio es de: %d\n", contadorBajoPromedio);
    return 0;
}
    
