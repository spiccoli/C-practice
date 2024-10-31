#include <stdio.h>
#include <stdlib.h>
/*inserte consigna señor stark*/
int main(int argc, char const *argv[]){
    int age = 11;
    int *pAge = &age;
    
    if (pAge == NULL) {
        printf("Error al asignar memoria.\n");
    }else
    {
        printf("-----\n");
        printf("%d\n", age);
        // printf("%d\n", *&age);
        printf("%p\n", &age);
        printf("-----\n");

        printf("%p\n", pAge); // trae la direccion de lo que esta adentro: direc age
        printf("%p\n", &pAge); // trae la direccion propia del puntero
        printf("%p\n", *&pAge); // a la direccion propia buscamos que esta adentro: direc age
        printf("%d\n", **&pAge); // a la direc de age, le sacamos el valor
        printf("%p\n", &*&pAge); // direccion del puntero mismo
        printf("%p\n",*&*&pAge); // direccion age
        

    }
    
return 0;
}
