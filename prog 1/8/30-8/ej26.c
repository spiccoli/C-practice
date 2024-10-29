#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n = 0;

    printf("¿De cuántas posiciones quiere su tabla de Pitágoras?\n");
    do {
        printf("Ingrese un número del 1 al 12: ");
        scanf("%d", &n);
    } while (n < 1 || n > 12);

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

    return 0;
}
