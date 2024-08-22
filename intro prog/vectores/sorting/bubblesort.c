#include <stdio.h>

int main(int argc, char const *argv[])
{
int numeros[5] = {5,1,3,2,9};
int temporal = 0;


for (int k = 0; k < 4; k++)
{
    for (int i = 0; i < 4; i++){
        if(numeros[i] > numeros[i+1]){
            temporal = numeros[i+1];
            numeros[i+1] = numeros[i];
            numeros[i] = temporal;
        }
    }
}


for (int j = 0; j < 5; j++)
{
   printf("%d", numeros[j]);
}




return 0;
}
