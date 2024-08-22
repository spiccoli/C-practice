#include <stdio.h>
#include <stdlib.h>


/*
7. Ingresar 10 valores, indicar e imprimir cuantos son positivos, cuantos negativos y cuantos ceros
*/

//Ciclos exactos -> for (inicio, fin, paso)
// Lo utilizamos cuando conocemos de antemano la cantidad de veces que debo repetir alguna accion

//Ciclos inexactos -> while, god
// lo utilizamos cuando NO conocemos la cantidad de veces a ejecutar un ciclo, debo conocer la condicion de corte.


//funcion main
int main(int argc, char const *argv[])
{
    printf("Bienvenidos al C\n");

    // 0. variables
        // entrada
    int ingresoValor = 0; //declarar (nombre de fantasia + tipo de variable) e inicializacion temprana = 0
    int i = 0;
    const int tope = 10;
        // proceso + salida
    int contadorPositivos = 0; //Variable que me permite ir contando los numeros positivos y luego mostrarlos al usuario
    int contadorNegativos = 0;
    int contadorCeros =0;

    // 1. entrada

    for (i=0; i < tope; i++){
        printf("%d/%d Por favor ingrese un nro\n", i + 1, tope);
        scanf("%d", &ingresoValor);
    // 2. proceso
    
        if(ingresoValor > 0){
            contadorPositivos++;
        }
        else if(ingresoValor < 0){
            contadorNegativos++;
        }
        else{
            contadorCeros++;
        }
   }    

/* 
usando if anidado (WACALE)

if (ingresoValor > 0){
    contadorPositivos++; // contadorPositivos = contadorPoitivos + 1;
}
    else(ingresoValor < 0){
        contadorNegativos++;
    }
        else{
            contadorCeros++;
        }
*/

    // 3. salida
    printf("La cantidad de numeros positivos es de %d",contadorPositivos);
    printf("La cantidad de numeros negativos es de %d",contadorNegativos);
    printf("La cantidad de ceros es de %d",contadorCeros);

    // para esperar al usuario antes de finalizar el ejecutable
    system("pause");
    return 0;
}
