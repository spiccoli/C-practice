#include <stdio.h>
#define max 5

int main(){
   int numeroIngresado, mayores = 0, menores = 0, indice = 1;
   do{ //Inicio bucle
       printf("Ingrese el numero %d!\n", indice);
       scanf("%d", &numeroIngresado); //Tomo y asigno entrada
       indice++; //Incremento el indice
       if (numeroIngresado != 0) //Si es cero saltea una iteracion
           numeroIngresado > 0? mayores++ : menores++; //If Corto
       }while(indice <= max);
   printf("Mayores: %d\nMenores: %d\n", mayores, menores); //Imprimo
   return 0;
}

