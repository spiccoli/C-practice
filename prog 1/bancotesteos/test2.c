#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int *pGuardador = (int *)malloc(5 * sizeof(int));
    if (pGuardador == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }
    // Input values and print them along with their addresses
    for (int i = 0; i < 5; i++) {
        printf("Ingrese un número: ");
        scanf("%d", (pGuardador + i));
        printf("Valor: %d\n", *(pGuardador + i));
        printf("Dirección: %p\n", (pGuardador + i));
    }
    // Ask user for the address to print the value from
    printf("Ingrese dirección (en hexadecimal) a printear (p. ej. 0x...): ");
    unsigned long direccion;
    scanf("%lx", &direccion);
    int *addressPointer = (int*)direccion;
    printf("Valor en la dirección %p: %d\n", addressPointer, *addressPointer);
    // Free the allocated memory
    free(pGuardador);
    return 0;
}
