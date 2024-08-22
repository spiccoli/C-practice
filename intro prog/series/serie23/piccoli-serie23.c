/*
Piccoli

Leer caracteres del teclado hasta que se ingresa un espacio.
pista: existe la biblioteca ctype.h con muchas funciones útiles para UN char. 
Una de las funciones es isspace(), cuyo prototipo es:

bool isspace(char)
*/

#include <stdio.h>
#include <ctype.h>

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main() {
    char c;
    
    printf("Ingresa caracteres (presiona espacio para terminar):\n");
    
    do {
        c = getchar(); // Lee un caracter del teclado
        
        if (isspace(c) != true) { // Si el caracter no es un espacio
            printf("Has ingresado el caracter: %c\n", c);
        }
        
    } while (c != ' '); // Continúa el bucle hasta que se ingrese un espacio
    
    printf("Espacio ingresado. Fin del programa.\n");
    
    return 0;
}
