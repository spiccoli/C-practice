// Ingresar nombres y notas de alumnos teniendo en cuenta que la carga finaliza con nota = 11, calcular e imprimir el promedio, los aprobados y cuántos estan entre 4 y 6..

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char nombre[30];
    int nota = 0;
    int contadorAlumno = 0;
    int contadorAprobados = 0, contadorNota46 = 0;
    int sumaNota = 0;
    float promedio;


    while (nota != 11){
        contadorAlumno++;
        printf("Ingresar nombre del alumno %d\n", contadorAlumno);
        scanf("%s", &nombre);
        printf("Ingresar nota del alumno %s, (ingrese 11 para finalizar)\n", nombre);
        scanf("%d", &nota);
        if (nota >= 4){
            contadorAprobados++;
        }else if(nota <= 6){
            contadorNota46++;
        }
        sumaNota += nota;
    }

    promedio = sumaNota / contadorAlumno;
    printf("El promedio de notas es de %f\n", promedio);
    printf("La cantidad de aprobados es de %d\n", contadorAprobados);
    printf("La cantidad de alumnos con nota de entre 4 y 6 es de %d\n", contadorNota46);


    return 0;
}
