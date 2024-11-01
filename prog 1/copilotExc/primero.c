/*Crea un programa que pida al usuario el número de elementos que desea en un
array, lo cree dinámicamente, almacene números pares en él y luego libere la
memoria.*/
#include <stdio.h>
#include <stdlib.h>

int askArrayNumber(){
    int n;
    printf("What array size would you like? ");
    scanf("%d", &n);
    return n;
}

void assignNumber(int arrSize){
            for (int i = 0; i < arrSize; i++)
        {
        int num;
        do{
            printf("| %d/%d | Enter an even number: ", i+1,arrSize);
            scanf("%d", &num);
        }while (num %2 != 0);
        }

}

int main(int argc, char const *argv[]){
    int arrSize = askArrayNumber();
    int *array = (int*)malloc(arrSize * sizeof(int));
    if (array == NULL) {
        printf("Mem could not be allocated");
        return 0;
    } else {
        assignNumber(arrSize);
    }
    free(array);
}

