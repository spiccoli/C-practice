/*
Ejercicio: Crea un programa que maneje una lista de empleados. Cada empleado tiene un nombre, un ID, y un salario.
 El programa debe:
Crear dinámicamente una lista de empleados.
Agregar empleados a la lista.
Mostrar los detalles de todos los empleados usando un puntero a la estructura.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *nombre;
    int id;
    int salario;
}Empleado;

void addEmpleado(Empleado **empleados, int *contadorEmpleados, const char *nomEmp, int idEmp, int salEmp){
    *empleados = realloc(*empleados, (*contadorEmpleados + 1) * sizeof(Empleado));
   if (*empleados == NULL)
   {
    printf("Mem no pudo ser asignada");
   }else{
    (*empleados)[*contadorEmpleados].nombre =  strdup(nomEmp);
    (*empleados)[*contadorEmpleados].id =  idEmp;
    (*empleados)[*contadorEmpleados].salario =  salEmp;
    (*contadorEmpleados)++;
   }
}
void showAll(Empleado *empleados, int contadorEmpleados){
    for (int i = 0; i < contadorEmpleados; i++)
    {
        printf("EMPLEADO %d: Nombre: %s, Id: %d, salario: %d\n", i+1, (empleados + i)->nombre, (empleados + i)->id, (empleados + i)->salario);
    }
    
}
int main(){
Empleado *empleados = NULL;
int contadorEmpelados = 0;
addEmpleado(&empleados, &contadorEmpelados, "Pepe",0,2000);
addEmpleado(&empleados, &contadorEmpelados, "Moni",1,2200);
showAll(empleados, contadorEmpelados);
free(empleados);
return 0;
}