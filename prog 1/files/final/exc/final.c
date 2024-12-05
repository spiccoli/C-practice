/*
 *
Llegaron los resultados de las pruebas PISA 2023 tomadas a alumnos de 15 años.
Desarrollar un algoritmo para guardar estos datos en un archivo de texto y luego procesarlos para obtener información-conclusiones.
De cada colegio se guardan estos datos:

CÓDIGO DE COLEGIO (un string de 8 chars) para reconocer provincia PP, distrito DD, colegio NNNN (PPDDNNNN)
CANTIDAD de alumnos que tomaron los exámenes (int, mayor a cero)
puntaje promedio obtenido en LENGUA (int, mayor a cero)
puntaje promedio obtenido en MATEMÁTICAS (int, mayor a cero)
HECHO

Cargar y guardar todos estos datos en un archivo de texto. No se sabe cuántos colegios se cargarán y podrían ser muchísimos.
En cada ejecución se agregan datos al archivo existente.
NO USAR UN ARREGLO de dimensión fija. Preguntar al usuario por el final de la carga.

Luego de terminada la carga, presentar un MENÚ con las opciones citadas en el punto C, en el punto D y fin.
Realizar un ciclo que permita ejecutar una o varias hasta el fin.

Imprimir por pantalla un listado con todos los códigos de colegio. Y para cada colegio: cantidad de alumnos que tomaron los exámenes, el MAYOR puntaje obtenido entre las dos disciplinas  y en qué disciplina (lengua o matemáticas).

Imprimir por pantalla todos los datos de una DETERMINADA PROVINCIA. Para ello, preguntar al usuario el código de provincia (PP, dos chars) que se quiere listar.




 */

#include <stdio.h>
#include <string.h>

typedef struct
{
    char codigoColegio[9];
    int cantAlumnos;
    int avgLengua;
    int avgMat;
} Resultado;
int moncho()
{
}
int cargaResultados(const char *fileName)
{
    int flowControl = 1;
    FILE *resultados = fopen(fileName, "a");
    if (resultados == NULL)
    {
        printf("No se pudo abrir el archivo\n");
        flowControl = 0;
    }
    else
    {
        Resultado res;
        printf("Ingrese codigo de colegio: ");
        fflush(stdin);
        scanf("%s", res.codigoColegio);
        printf(" -- Los siguientes deberan ser mayor a 0 -- \n");
        do
        {
            printf("Ingrese cant de alumnos: ");
            fflush(stdin);
            scanf("%d", &res.cantAlumnos);
        } while (res.cantAlumnos <= 0);
        do
        {
            printf("Ingrese promedio de lengua: ");
            fflush(stdin);
            scanf("%d", &res.avgLengua);
        } while (res.avgLengua <= 0);
        do
        {
            printf("Ingrese promedio de matematica: ");
            fflush(stdin);
            scanf("%d", &res.avgMat);
        } while (res.avgMat <= 0);

        fprintf(resultados, "%s %d %d %d\n", res.codigoColegio, res.cantAlumnos, res.avgLengua, res.avgMat);
        printf("Carga exitosa\n");
        fclose(resultados);
    }
    return flowControl;
}
int mayor(Resultado r, char *dis)
{
    if (r.avgLengua > r.avgMat){
        *dis ='L';
        return r.avgLengua;
    }
    else{
        *dis = 'M';
        return r.avgMat;
    }
}
void imprimirListadoColegios(const char *fileName)
{
    FILE *resultados = fopen(fileName, "r");
    if (resultados == NULL)
    {
        printf("No se pudo abrir el archivo\n");
        return;
    }
    Resultado res;
    char disciplina;
    int maxAvg;
    printf("Colegio\tAlumnos\tMayor\t\tDisciplina\n");
    printf("------------------------------------------------------------\n");
    while (fscanf(resultados, "%s %d %d %d", res.codigoColegio, &res.cantAlumnos, &res.avgLengua, &res.avgMat) == 4)
    {
        maxAvg = mayor(res, &disciplina);
        printf("%-9s\t%-10d\t%-10d\t%-10s\n", res.codigoColegio, res.cantAlumnos, maxAvg, (disciplina == 'L') ? "Lengua" : "Matematica");    
    }
    fclose(resultados);
}
void listarColegiosProvincia(const char *fileName, char *codigoPP)
{
    FILE *resultados = fopen(fileName, "r");
    if (resultados == NULL){
        printf("No se pudo abrir el archivo\n");
        return;
    }
    Resultado res;
    printf("Codigo colegio\tCantidad alumnos\tAvg lengua\tAvg matematica\n");
    printf("--------------------------------------------------------------------\n");
    while (fscanf(resultados, "%s %d %d %d", res.codigoColegio, &res.cantAlumnos, &res.avgLengua, &res.avgMat) == 4){
        if (strncmp(codigoPP, res.codigoColegio, 2) == 0){
            printf("%-10s\t%-10d\t%-10d\t%-10d\n", res.codigoColegio, res.cantAlumnos, res.avgLengua, res.avgMat);
        }
    }
    fclose(resultados);
}
void menu(const char *fileName)
{
    int eleccion;
    do
    {
        printf("\nQue opcion quiere realizar: \n");
        printf("1- Listar todos los colegios \n");
        printf("2- Listar colegios por provincia \n");
        printf("3- Salir\n");
        printf("Ingrese su eleccion: ");
        scanf("%d", &eleccion);
        switch (eleccion)
        {
        case 1:
            imprimirListadoColegios(fileName);
            break;
        case 2:
        {
            char codigoProvincia[3];
            printf("Introduce el codigo de la provincia (PP): ");
            scanf("%2s", codigoProvincia);
            listarColegiosProvincia(fileName, codigoProvincia);
            break;
        }
        case 3:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion invalida. Intente de nuevo.\n");
        }
    } while (eleccion != 3);
}
int main()
{
    const char *fileName = "final.txt";
    if (cargaResultados(fileName))
    {
        menu(fileName);
    }
    return 0;
}