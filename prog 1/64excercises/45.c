/*
Crea un programa que use aritmética de punteros para invertir un array. Probar
con elementos tipo char y con elementos tipo int.
Utilizar aritmética de punteros para movilizarse en el arreglo.
No manejar el array como un arreglo con [ ] sino siempre con punteros
*/
#include <stdio.h>
#include <stdlib.h>

// INVERTING THE ARRAY ITSELF
void invertArrayChar(char *arrchar, int size){
    char temp;
    for (int i = 0; i < (size/2); i++)
    {
        temp = *(arrchar + size - 1 - i);
        *(arrchar + size - 1 - i) = *(arrchar + i);
        *(arrchar + i) = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%c", *(arrchar + i));
    }
}
// USING DYNAMIC MEMORY not requested.
void invertArrayInt(int *array, int size) {
    int *newArray = (int*)malloc(size * sizeof(int));
    if (newArray == NULL) {
        printf("Memory allocation failed!\n");
       
    }else{
    int counter = 0;
    for (int i = 0; i < size; i++) {
        *(newArray + i) = *(array + size - 1 - i);
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", *(newArray + i));
    }
    printf("\n");
    free(newArray);
    }
    return;
}

int main(){
int arrayInt[4]={5,34,35,1};
char arrayChar[5]={"test"};
invertArrayInt(arrayInt,4);
invertArrayChar(arrayChar,5);
return 0;
}