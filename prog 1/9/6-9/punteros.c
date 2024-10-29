/* Puntero swap*/
#include <stdio.h>

void swap(int *pa, int *pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;    
}

int main(int argc, char const *argv[]){
int a = 0;
int b = 1;

swap(&a, &b);
printf("el valor a es: %d, el valor b es %d\n",a,b);


return 0;
}