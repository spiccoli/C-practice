// Ingresar las edades y estaturas de los alumnos, calculare imprimir la edad promedio, la edad mayor y la estatura menor, los datos finalizan con edad = 0

#include <stdio.h>

int main()
{
    int edad;
    int sumaEdades = 0;
    float promedioEdades;
    int maxEdad = 0;

    float estatura;
    float minEstatura = 0;

    int i = 0;

    printf("Ingrese edad %d (0 para finalizar)\n", i + 1);
    scanf("%d", &edad);

    while (edad != 0)
    {
        i++;
        printf("Ingrese estatura\n");
        scanf("%f", &estatura);

        if (maxEdad == 0 && minEstatura == 0)
        {
            maxEdad = edad;
            minEstatura = estatura;
        }

        if (edad > maxEdad)
            maxEdad = edad;
        if (estatura < minEstatura)
            minEstatura = estatura;

        sumaEdades += edad;

        printf("Ingrese edad %d (0 para finalizar)\n", i + 1);
        scanf("%d", &edad);
    }

    promedioEdades = (float)sumaEdades / i;

    printf("La mayor edad es de %d\n", maxEdad);
    printf("La menor estatura es de %.2f\n", minEstatura);
    printf("promedio de edad es de %.2f\n", promedioEdades);

    return 0;
}