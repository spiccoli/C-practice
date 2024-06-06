/*inserte consigna señor stark*/
#include <stdio.h>

void funcPointer(int *pAge){    
    printf("my pointer points to this address %p\n", pAge);
    printf("the address of the pointer itself is %p \n", &pAge);
    printf("the value my address is pointing at is %d\n", *pAge);
    printf("the value of my pointer itself is %d\n", &pAge);
    
    
    
};

int main(int argc, char const *argv[]){
unsigned char k = 235;
int age = 3;
int *pAge = &age;
//printf("address of age %p\n", &age);
// printf("value of age %d\n", age);
// printf("value of pAge (address) %p\n", pAge);
// printf("value at stored addrees: %d\n", *pAge);
// printf("size of age is: %d bytes\n", sizeof(age));
// printf("size of pAge is: %d bytes\n", sizeof(pAge));
//funcPointer(pAge);
printf("wtf %c\n", k);





return 0;
}