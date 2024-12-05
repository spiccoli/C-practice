#include <stdio.h>
#define MAX 50

typedef struct{
  char calle[MAX];
  int nro;
  char localidad[MAX];
}direccion;

typedef struct{
  char nombre[MAX];
  direccion direc;
  int edad;
  char sexo;
}InfoEmpleados;


void CargarEmpleados(FILE *datoempleado){
  InfoEmpleados empleado;
  char continua;
  do{
    printf("ingrese el nombre del empleado \n");
    fflush(stdin);scanf(" %s", empleado.nombre);
    printf("ingrese la calle del empleado \n");
    fflush(stdin);scanf(" %s", empleado.direc.calle);
    printf("ingrese el numero de la casa \n");
    fflush(stdin);scanf("%d", &empleado.direc.nro);
    printf("ingrese la localidad \n");
    fflush(stdin);scanf(" %s", empleado.direc.localidad);
    printf("ingrese la edad \n");
    fflush(stdin);scanf("%d", &empleado.edad);
    do{
    printf("ingrese el sexo del empleado (F/M) \n");
    fflush(stdin);scanf("%c", &empleado.sexo);
    if (empleado.sexo != 'F' && empleado.sexo != 'M' && empleado.sexo != 'f' && empleado.sexo != 'm'){
      printf("no valido \n");}
    }while(empleado.sexo != 'F' && empleado.sexo != 'M' && empleado.sexo != 'f' && empleado.sexo != 'm');
    fprintf(datoempleado, "%s %s %d %s %d %c\n", empleado.nombre, empleado.direc.calle, empleado.direc.nro, empleado.direc.localidad, empleado.edad, empleado.sexo);
  printf("continuar cargado empleados? \n");
  fflush(stdin);scanf("%c", &continua);


  }while(continua == 'S' || continua == 's');

}

void ListarEmpleadoMenor(){
	InfoEmpleados L;
	printf("los empleados menores de 25 son: \n");
	FILE* arch=fopen("empleados.txt", "r");
	if (arch == NULL) puts("Error");
	else {
		int i;
		for (i=0; fscanf(arch, "%s %s %d %s %d %c", L.nombre, L.direc.calle, &L.direc.nro, L.direc.localidad, &L.edad, &L.sexo)==6;i++){
			if (L.edad<=25) printf("%s\n", L.nombre);		
		}
		fclose(arch);
	}
	return;
}

void ListarEmpleadoPilar(){
	InfoEmpleados Laburante;
	printf("los empleados que viven en Pilar son: \n");
	//a completar.
}

void ListarEmpleadoAmbos(){
	InfoEmpleados Laburante;
	printf("los empleados que viven en Pilar y tienen menos de 25 son: \n");
	//a completar.
}

int main(){
  FILE *datoempleado = fopen("empleados.txt", "a");
  if(datoempleado == NULL) printf ("no se puede abrir el archivo \n");
  else{
    CargarEmpleados(datoempleado);
	fclose(datoempleado);
	ListarEmpleadoMenor();
    ListarEmpleadoPilar();
	ListarEmpleadoAmbos();
   
  } 
  return 0;
}