/*
se muestre un menú de opciones que se repita hasta que el usuario decida
terminar:
○ listar TODO el vector ORDENADO DE MENOR A MAYOR
○ pregunte al usuario “qué número quiere buscar” y luego indique si está o no
y en qué posición
○ FIN
pista: menú con switch y cada case llama a una función
Opcional: agregar otras opciones al menú, como por ejemplo:
○ listar los números PARES
○ calcular el PROMEDIO
*/
#include <stdio.h>
#define MAX 10

// FUNCTIONS

int isRemainderZero(int number)
{
    return (number % 3) == 0;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Encontrar el mínimo elemento en la sublista no ordenada
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        // Intercambiar el mínimo encontrado con el primer elemento
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int array[], int size)
{
    printf("\n-------------------------\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n-------------------------\n");
}

void searchNumber(int array[])
{
    int temp;
    printf("Que numero desea buscar?\n");
    scanf("%d", &temp);
    int result = -1;
    int i;
    for (i = 0; i < MAX; i++)
    {
        if (array[i] == temp)
            result = temp;
    }
    printf("\n-------------------------\n");
    (result != -1) ? printf("El numero %d esta en la posicion %d\n", temp, i)
                   : printf("El numero no se encontro\n");
    printf("\n-------------------------\n");
}

void evenNumbers(int array[], int size) {
    printf("\n-------------------------\n");
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n-------------------------\n");
}

void avgNumber(int array[], int size){
    int total = 0;
    float avgNumber;
    printf("\n-------------------------\n");
    for (int i = 0; i < size; i++)
    {
        total += array[i];
    }
    avgNumber = (float)total / size;
    printf("AVG: %.2f", avgNumber);
    printf("\n-------------------------\n");
}

int main(int argc, char const *argv[])
{
    int array[10];
    int temp;
    int count = 0;
    printf("Enter 10 multiples of 3:\n");
    while (count < MAX)
    {
        scanf("%d", &temp);
        if (isRemainderZero(temp))
        {
            array[count] = temp;
            count++;
        }
        else
        {
            printf("Number %d is not a multiple of 3. Please try again.\n", temp);
        }
    }
    printf("\n-------------------------\n");
    printf("Entered numbers are:\n");
    printf("\n-------------------------\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", array[i]);
    }
    // B MENU

    int option = 0;
    printf("\n-------------------------\n");
    printf("\nPlease select an option: \n");
    printf(" 1-Order array\n 2-Look for a number\n 3-End\n 4-List even numbers\n 5-Calculate avg\n\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        selectionSort(array, MAX);
        printArray(array, MAX);
        break;
    case 2:
        searchNumber(array);
        break;
    case 3:
        printf("Exiting program\n");
        break;
    case 4:
        evenNumbers(array,MAX);
        break;
    case 5:
        avgNumber(array,MAX);
        break;
    default:
        printf("Option number must be between 1-5\n");
        break;
    }

    return 0;
}
