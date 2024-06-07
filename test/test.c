/*pruebas*/
#include <stdio.h>
#include<string.h>
#define SIZE 5


static void addone(int n) {
    // n is local variable which only exists within the function scope
    n++; // therefore incrementing it has no effect
}
int main(int argc, char const *argv[])
{
    
char vowels[5] = {'A', 'E', 'I', 'O', 'U'};
char *pvowels = &vowels;
int i;

for (int i = 0; i < sizeof(vowels); i++)
{

    printf("address of item %d itself: %p\n",i, &vowels[i]);
    printf("address of the pointed item %d: %p\n", i, *&pvowels+i); // *&pvowels == pvowels
    printf("item %d is: %c\n",i, *pvowels+i);

}

printf("adrress of the pointer %d itself: %p\n", i, &pvowels);

// typedef struct 
// {
//     int estatura;
// }Persona;




// int datoingresado = 0;
// scanf("%d", &datoingresado);

// Persona guido;
// guido.estatura = datoingresado;

// //pasados 5y
// guido.estatura = datoingresado * 5;
// printf("guido estatura: %d\n", guido.estatura);

// //pasados 10y
// guido.estatura = datoingresado * 10;
// printf("guido estatura: %d\n", guido.estatura);

// //pasados 15y
// guido.estatura = datoingresado * 15;

// printf("guido estatura: %d\n", guido.estatura);





// int fila = 0, columna = 0;
// char dest[20]="Hello";
// char src[20]="abcdefghijklmnopqrstuvw";
// printf("%s\n",dest);

// strncat(dest,src,20); 
// for (int i = 0; i < sizeof(dest); i++)
// {
//     printf("%d/%d %c\n",i+1,sizeof(dest), dest[i]);
// }
// printf("%s\n",dest);
// printf("%d\n",strlen(dest));
// printf("%d\n", sizeof(dest));
 
// strncat(dest,src,20);
// // QUE CARAJO SI ES DE TAMAÑO 20 PORQUE PRINTEA 25 TAMO TODO LOCO, LA VECINA MIRA DESDE SU VENTANA PORQUE TAMO LOCO
// printf("%s\n",dest);








// int age = 4;
// int *pAge = &age;


// printf("------------------------\n");
// printf("variable has this address %p\n", &age);
// printf("my pointer has this address %p\n", &pAge);
// printf("my pointer points to this address %p\n", *&pAge);
// printf("my pointer points to this address %p\n", pAge);
// printf("------------------------\n");




// // ARTE
// char * brand = "ford";
// char **pBrand = &brand; 
// printf("brand is %s\n", *pBrand);


return 0;
}