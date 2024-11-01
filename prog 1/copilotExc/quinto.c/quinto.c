
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *nombre;
    int edad;
    int sexo;
}Alumno;

void imprimirDatos(Alumno *alumnos, int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        scanf("%d", (alumnos + i)->edad);
    }
    for (int i = 0; i < cantidad; i++)
    {
        printf("Nombre: %s", (alumnos + i)->nombre);
    } 
    
}
void imprimirDatosViejo(Alumno alumnos[6]){
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &alumnos[i].edad);
    }
    

    for (int i = 0; i < 6; i++)
    {
        printf("Nombre: %s", alumnos[i].nombre);
    }

}


int main(){
    
return 0;
}