// Ingresar las edades y estaturas de los alumnos, calculare imprimir la edad promedio, la edad mayor y la estatura menor, los datos finalizan con edad = 0

#include <stdio.h>
#include <string.h>
int main()
{
    int edad;
    int sumaEdades = 0;
    float promedioEdades;
    int maxEdad = 0;
    float minEstatura = 0;
    char estatura[21] = {""};
    char moncho[] = "nashe";
    int i = 0;

    printf("Ingrese edad %d (0 para finalizar)\n", i + 1);
    scanf("%d", &edad);

    while (edad != 0) {
        i++;
        printf("Ingrese estatura\n");

        getchar();
        fgets(estatura, sizeof(estatura), stdin); // Read the height as a string
        estatura[strcspn(estatura,"\n")] = '\0';

        printf("Ingrese edad %d (0 para finalizar)\n", i + 1);
        scanf("%d", &edad);
    }
    strncat(estatura, moncho, 20);
    printf("%s\n", estatura);
    
    promedioEdades = (float)sumaEdades / i;
    printf("La mayor edad es de %d\n", maxEdad);
    printf("La menor estatura es de %.2f\n", minEstatura);
    printf("promedio de edad es de %.2f\n", promedioEdades);
    return 0;
}