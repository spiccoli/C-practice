/*
Sobre el ejercicio 46, utilizando memoria dinámica
v1: reserva espacio para N socios e ingresa N socios
v2: reserva espacio para 1 socio y luego de cada carga pregunta si se quiere
agregar un socio más, redimensionando el espacio

46:
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

// Definition of Member structure
typedef struct {
    int id;
    int age;
    char sport;
} Member;

// Function to add a member to the array
void addMember(Member **arrMembers, int *mCount, int id, int age, char sport) {
    *arrMembers = realloc(*arrMembers, (*mCount + 1) * sizeof(Member));
    if (*arrMembers == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    (*arrMembers)[*mCount].id = id;
    (*arrMembers)[*mCount].age = age;
    (*arrMembers)[*mCount].sport = sport;
    (*mCount)++; 
}

// Function to display all members
void showAllMembers(const Member *members, int membersCount) {
    printf("Id\tAge\tSport\n");
    for (int i = 0; i < membersCount; i++) {
        printf("%d\t%d\t%c\n", (members + i)->age, members[i].age, members[i].sport);
    }
}

// Main menu function to interactively add members
void menu(Member **members, int *membersCount) {
    int temp = 0;
    int exitFlag = 0; // Use a flag to control the loop
    while (!exitFlag) {
        printf("Do you want to add a new member? Press 1 to exit: ");
        scanf("%d", &temp);
        if (temp == 1) {
            exitFlag = 1; // Set the flag to exit
        } else {
            printf("Define id, age and sport (t/f/v): ");
            int id, age;
            char sport;
            scanf("%d", &id);
            scanf("%d", &age);
            scanf(" %c", &sport);  // Space before %c to skip any leftover newline character
            addMember(members, membersCount, id, age, sport);
        }
    }
}

// Main function
int main() {
    Member *members = NULL;
    int membersCount = 0;

    menu(&members, &membersCount);
    showAllMembers(members, membersCount);

    free(members);
    return 0;
}
