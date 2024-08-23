/*13
Escribir una función que invierta una cadena de caracteres.*/
#include <stdio.h>
#include <string.h>

void funcName(char nombre[]){
    for (int i = 1; i <= strlen(nombre); i++) printf("%c", nombre[strlen(nombre) - i]);
}

int main(int argc, char const *argv[]){
char nombre[] = "Cecilia";
funcName(nombre);

return 0;
}