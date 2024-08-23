/*
Implementar un programa que permita gestionar los zombies en una
granja de modo que estos sirvan para repeler a la horda.
Se cuenta con 4 zonas a ocupar con máximos de capacidad definidos por el usuario, pero
para ser seguras deben contar con un mínimo del 25% de su capacidad.

A su vez cada zona necesita tener por lo menos dos personas a cargo
que deben estar registradas con nombre, apellido, rol y zona asignada y
por lo menos 1 persona con el rol de Mantenimiento para ser considerada
segura.

Los roles bajo este proyecto son 3:
Mantenimiento, Seguridad y Mensajero.

El menú debe ofrecer las siguientes opciones:
1- Definir capacidad de zonas
2- Crear Personas
3- Asignar Personas
4- Asignar zombies
5- Imprimir todas los detalles de las personas
6- Informar zonas que aún no son seguras
*/

#include <stdio.h>
#define MAXCANTZONA 4
#define MAXCANTPERSONA 3

typedef enum
{
    MANTENIMIENTO,
    SEGURIDAD,
    MENSAJERO,
} Rol;

typedef struct
{
    char nombre[50];
    char apellido[50];
    int idZona;
    Rol rol;
} Persona;

typedef struct
{
    int capacidadZombies;
    int cantZombies;
    int contador;
    Persona personas[MAXCANTPERSONA]; // 3
} Zona;

// INICIO DE APLICACION
void menu(Zona zonas[], Persona persona);
void definirZonas(Zona zonas[]);
void crearPersonas(Persona persona, Zona zonas[]);

int main(int argc, char const *argv[])
{
    Zona zonas[3];
    Persona persona;

    menu(zonas, persona);
    return 0;
}

void menu(Zona zonas[], Persona persona)
{
    int opciones = 0;
    printf("Seleccione opcion:\n 1- Definir capacidad de zombies\n 2-Crear personas\n 3-Asignar personas\n 4-Asignar zombies\n 5-Imprimir todos los detalles\n 6-Informar zonas no seguras\n");
    scanf("%d", &opciones);
    getchar();

    switch (opciones)
    {
    case 1:
        definirZonas(zonas);
        break;
    case 2:
        crearPersonas(persona, zonas);
        break;
    // case 3:
    //     asignarPersonas();
    //     break;
    // case 4:
    //     asignarZombies();
    //     break;
    // case 5:
    //     imprimirDetalles();
    //     break;
    // case 6:
    //     imprimirZonasNoSeguras();
    //     break;

    default:
        break;
    }
}
void definirZonas(Zona zonas[])
{
    for (int i = 0; i < MAXCANTZONA; i++)
    {
        printf("Defina capacidad de zombies de la ZONA %d: \n", i + 1);
        scanf("%d", &zonas[i].capacidadZombies);
        getchar();
    }
}
void crearPersonas(Persona persona, Zona zonas[])
{
    int zonaElegida;
    printf("en que zona quiere crear la persona: 0 / 1 / 2 / 3?\n");
    scanf("%d", &zonaElegida);
    persona.idZona = zonaElegida;
    if (zonas[zonaElegida].contador == 4)
    {
        return printf("cantidad maxima de personas en zona %d\n", zonaElegida);
    } else zonas[zonaElegida].contador++;

    printf("Que nombre tendra esta persona?\n");
    fgets(persona.nombre,50,stdin);
    printf("Que apellido tendra esta persona?\n");
    fgets(persona.apellido,50,stdin);


    int rolElegido;
    printf("Elija un rol 1- MANTENIMIENTO\n 2- SEGURIDAD\n 3- MENSAJERO\n");
    scanf("%d", &rolElegido);
    switch (rolElegido)
    {
    case 1:
        persona.rol = MANTENIMIENTO;
        break;
    case 2:
        persona.rol = SEGURIDAD;
        break;
    case 3:
        persona.rol = MENSAJERO;
        break;
    default:
        break;
    }
    if (zonas[zonaElegida].contador == 0 && zonas[zonaElegida].contador < 4)
    {
       zonas[zonaElegida].personas[zonas[zonaElegida].contador] = persona; //marron
    } else zonas[zonaElegida].personas[zonas[zonaElegida].contador++] = persona;  
// como creo las personas en el array de zonas... ? porque el array Zona zonas tiene adentro un maximo de 4 personas 
// linea 46
// o sea puedo hardcodearlo pero la idea es que chequee si llegue al maximo de personas que se puede

}