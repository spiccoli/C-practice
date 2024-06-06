#include <stdio.h>
#define SIZE 5

int main(int argc, char const *argv[])
{
    char alumnos[SIZE][101] = {{0},{0}};
    double cuota[SIZE] = {0};
    
    for (int i = 0; i < SIZE; i++)
    {
        fflush(stdin);
        printf("Ingrese nombre del alumno %d\n", i +1);
        fgets(alumnos[i], 101, stdin);
        printf("Ingrese cuota del alumno %s", alumnos[i]);
        scanf("%lf", &cuota[i]);
    }

    for (int j = 0; j < SIZE; j++)
    {
        printf("La lista de alumnos con su cuota es:\n");
        printf("%s %lf\n", alumnos[j], cuota[j]);
      
    } 
    
    return 0;
}


