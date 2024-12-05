/*
 * 
 */   

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    FILE *file_to_read = fopen("sometext.txt", "r");
    char buffer[255];
    if (file_to_read == NULL){
        printf("One file could not open\n");
        return -1;
    }else
    {
        while (fgets(buffer, 255, file_to_read) != NULL)
        {
            printf("%s", buffer);
        }
    }
return 0;
}