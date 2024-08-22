#include <stdio.h>
#include <string.h>

int main(){
    const int tope = 25;
    int nota;
    char nombre[20][50];
    char aplazados[20][50];

    for (int i = 0; i < tope; i++) {
        printf("Ingrese el apellido del alumno %d: ", i + 1);
        scanf("%s", nombre[i]);
        printf("Ingrese la nota de %s: ", nombre[i]);
        scanf("%d", &nota);
        if (nota < 4) {
            strcpy(aplazados[i], nombre[i]); 
        }
    }
    printf("\nLista de aplazados:\n");
    for (int i = 0; i < tope; i++) {
        if (strlen(aplazados[i]) > 0) {
            printf("%s\n", aplazados[i]);
        }
    }
    return 0;
}