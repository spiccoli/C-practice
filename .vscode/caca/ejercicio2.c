#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numticket, numdestino, numclase;
    int sumanecochea = 0, sumamardelplata = 0, sumabahia = 0;
    int sumaclase1 = 0, sumaclase2 = 0;
    int sumaboletosnecocheaclase2 = 0, sumaboletosvendidos = 0, totaldinero = 0;
    float promediodinero = 0, porcentajeclase1, porcentajeclase2;

    printf("Ingrese numero de ticket, (ingrese 0 para finalizar)\n");
    scanf("%d",&numticket);
    while (numticket != 0)
    {
        do
        {
            printf("Ingrese destino, 1 = Mar del plata, 2 = Necochea, 3 = Bahia blanca\n");
            scanf("%d",&numdestino);
        } while (numdestino < 1 || numdestino > 3);
        
        
        do
        {
            printf("Ingrese su clase 1 = Turista $25, 2 = Pullman $40\n");
            scanf("%d",&numclase);
        } while (numclase < 1 || numclase > 2);
        
        if(numdestino == 2 && numclase ==2){
            sumaboletosnecocheaclase2++;
        }

        sumaboletosvendidos++;

        switch (numdestino)
        {
        case 1:
            sumamardelplata++;
            break;
        case 2:
            sumanecochea++;
            break;
        case 3:
            sumabahia++;
            break;   
        default:
            break;
        }

        switch (numclase)
        {
        case 1:
            sumaclase1++;
            totaldinero = totaldinero + 25;
            break;
        case 2:
            sumaclase2++;
            totaldinero = totaldinero + 40;
            break;
        default:
            break;
        }
        printf("Ticket numero %d -- Destino numero %d -- Clase numero %d\n",numticket,numdestino,numclase);
        printf("Ingrese numero de ticket, (ingrese 0 para finalizar)\n");
        scanf("%d",&numticket);
    }
    
    printf("La cantidad de boletos vendidos es de %d\n", sumaboletosvendidos);
    promediodinero = totaldinero/sumaboletosvendidos;
    printf("El promedio de dinero por boleto es de %f\n", promediodinero);
    porcentajeclase1 = (sumaclase1 / sumaboletosvendidos) * 100;
    printf("El porcentaje de gente que compro boletos en turista es de %.02f por ciento\n", porcentajeclase1);
    porcentajeclase2 = (sumaclase2 / sumaboletosvendidos) * 100;
    printf("El porcentaje de gente que compro boletos en pullman es de %.02f por ciento\n", porcentajeclase2);

    if(sumamardelplata > sumanecochea && sumamardelplata > sumabahia){
        printf("El destino mas solicitado es mardelplata\n");
    }
    else if(sumanecochea > sumabahia){
        printf("El destino mas solicitado es necochea\n");
    }
    else{
        printf("El destino mas solicitado es bahia blanca\n");
    }
    if (sumaclase1 < sumaclase2){
        printf("La clase menos solicitada es la turista\n");
    } else{
        printf("La clase menos solicitada es la pullman\n");
    }

    return 0;
}

