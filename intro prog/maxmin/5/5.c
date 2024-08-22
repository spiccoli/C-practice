// En una carrera de autos se ingresan el número de auto y su tiempo, indicar e imprimir cuál ganó y cúal fue el último

#include <stdio.h>

int main()
{
    int numeroAuto;
    float tiempo;
    int numeroGanador = 0;
    int numeroPerdedor = 0;
    float tiempoGanador = 0;
    float tiempoPerdedor = 0;
    int n;

    printf("Ingresar cantidad de autos\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        printf("Ingresar numero de auto %d/%d\n", i + 1, n);
        scanf("%d", &numeroAuto);
        printf("Ingresar tiempo de auto %d\n", numeroAuto);
        scanf("%f", &tiempo);

        if (tiempoGanador == 0 && tiempoPerdedor == 0)
        {
            tiempoGanador = tiempo;
            tiempoPerdedor = tiempo;
            numeroGanador = numeroAuto; // Actualización del ganador
            numeroPerdedor = numeroAuto;
        }

        if (tiempo < tiempoGanador)
        {
            tiempoGanador = tiempo;
            numeroGanador = numeroAuto;
        }

        if (tiempo > tiempoPerdedor)
        {
            tiempoPerdedor = tiempo;
            numeroPerdedor = numeroAuto;
        }

    }

    printf("El ganador es el forro de %d con un tiempo de %f\n",numeroGanador, tiempoGanador);
    printf("El perderdor es el forro de %d con un tiempo de %f\n",numeroPerdedor, tiempoPerdedor);
    return 0;
}