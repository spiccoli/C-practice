/*
En un club se registran los datos de sus socios de la siguiente manera:
● Número de socio (INT, mayor a cero)
● Edad (INT, mayor a 0)
● Tipo de deporte que practica (tennis T, futbol F, voley V)
Se realizará una prueba con sólo 10 socios.
Realizar un algoritmo que luego de haber cargado los datos, emita un informe
por pantalla con:
● todos los datos cargados en forma de columnas
Utilizar punteros a estructuras
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
typedef struct
{
    int num;
    int age;
    char sport;
} Member;

void addMembers(Member *arrMembers, int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("------------\n");
        printf("Member %d\n", i + 1);
        printf("Id: ");
        scanf("%d", &(arrMembers+i)->num);
        printf("Age: ");
        scanf("%d", &(arrMembers+i)->age);
        do {
            printf("Sport(t,f,v): ");
            scanf(" %c", &(arrMembers+i)->sport);
        } while ((arrMembers + i)->sport != 't' && (arrMembers + i)->sport != 'f' && (arrMembers + i)->sport != 'v');
    }
}
void printMembers(Member *members, int s){
    printf("Id\tAge\tSport\n");
    printf("-------------------\n");
for (int i = 0; i < s; i++) {
        printf("%d\t%d\t%c\n", (members + i)->num, (members + i)->age, (members + i)->sport);
    }
}
int main()
{
    Member *members = (Member *)malloc(SIZE * sizeof(Member));
        if (members == NULL)
    {
        printf("Mem could not be allocated");
    } else{
    addMembers(members, SIZE);
    printMembers(members, SIZE);
    free(members);
    return 0;
    }
}