/*Hacer tabla pitagorica valores entre el 1 y el 12*/

#include <stdio.h>

int definirValor();
void imprimirArray(int vector[],int n);

int main(int argc, char const *argv[]){

int n = definirValor();
int vector[n][n];
imprimirArray(vector,n);

return 0;
}

int definirValor(){
    int valor;
    do
    {
        printf("elija un valor entre el 1 y el 12\n");
        scanf("%d", &valor);
    } while (valor <= 1 || valor >= 12);
    printf("\n");
    return valor;
}
void imprimirArray(int vector[], int n) {
    printf("    ");
    for (int i = 1; i <= n; i++) {
        printf("%4d", i);
    }
    printf("\n");
    for (int i = 1; i <= n; i++) {
        printf("%4d", i);
        for (int j = 1; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}