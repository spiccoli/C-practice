#include <stdio.h>

int IsRemainderZero(int number) {
    return (number % 3) == 0;
}

int main() {
    int array[10];
    int temp;
    int count = 0;

    printf("Ingrese 10 números múltiplos de 3:\n");   

    while (count < 10) {
        scanf("%d", &temp);
        if (IsRemainderZero(temp)) {
            array[count] = temp;
            count++;
        } else {
            printf("El número %d no es múltiplo de 3. Intente nuevamente.\n", temp);
        }
    }

    printf("Los números ingresados son:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
