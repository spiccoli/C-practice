// Ingresar los sueldos y nombres de 30 empleados, indicar e imprimir el sueldo mayor y a quién pertenece


#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    const int TOPE = 4;
    
    char nombre[15];
    int sueldo;
    int sueldomayor;
    char nombremayorsueldo[15];
    int max = 0;
    int min = 0;

    for (int i = 0; i < TOPE; i++)
    {
        printf("Ingrese nombre del empleado %d\n", i + 1);
        scanf("%s", &nombre);

        printf("Ingrese sueldo del empleado %s\n", nombre);
        scanf("%d", &sueldo);

        if (sueldo > sueldomayor)
        {
            sueldomayor = sueldo;
            strcpy(nombremayorsueldo, nombre); 
        }
    }

    printf("El mayor sueldo es de %d y le corresponde a %s\n", sueldomayor, nombremayorsueldo);
    return 0;
}
