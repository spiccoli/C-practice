/*
Crea un programa que pida al usuario el número de elementos que desea en un
array, lo cree dinámicamente, almacene números pares en él y luego libere la
memoria.
*/
#include <stdio.h>
#include <stdlib.h>
int askArrSize(){
int arrS;
printf("How many elements you want your array to have: ");
scanf("%d", &arrS);
return arrS;
}
void askForEvenNumbers(int *arr, int size){
    printf("enter ONLY even numbers ");
    for (int i = 0; i < size; i++) {
    do {
        printf("Number %d/%d: ", i+1, size);
        scanf("%d", arr+i);
    } while (*(arr+i) % 2 != 0);
    }
}

int main(){
int arrSize = askArrSize();
int * dynArr = (int *)calloc(arrSize, sizeof(int));
if (dynArr == NULL)
{
    printf("Mem could not be allocated");
} else{
askForEvenNumbers(dynArr, arrSize);
free(dynArr);
}
return 0;
}