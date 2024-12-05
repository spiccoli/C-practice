#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura para los datos de un telegrama
typedef struct {
    char codigoMesa[20];
    int cantElectores;
    int cantVotos;
    int cantVotosImpugnados;
    int cantVotosBlanco;
} Telegrama;

// Función para cargar datos de telegramas y guardarlos en el archivo
void CargarTelegramas(const char *filename) {
    char continuar;
    Telegrama tel;
    FILE *telegramas = fopen(filename, "a");
    if (telegramas == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    do {
        printf("Ingresar código de mesa (máx. 19 caracteres): ");
        fgets(tel.codigoMesa, sizeof(tel.codigoMesa), stdin);
        size_t len = strlen(tel.codigoMesa);
        if (len > 0 && tel.codigoMesa[len - 1] == '\n') tel.codigoMesa[len - 1] = '\0';

        do {
            printf("Ingresar cantidad de electores (>0): ");
            scanf("%d", &tel.cantElectores);
        } while (tel.cantElectores <= 0);

        do {
            printf("Ingresar cantidad de votos válidos (>0): ");
            scanf("%d", &tel.cantVotos);
        } while (tel.cantVotos <= 0);

        do {
            printf("Ingresar cantidad de votos impugnados (>0): ");
            scanf("%d", &tel.cantVotosImpugnados);
        } while (tel.cantVotosImpugnados <= 0);

        do {
            printf("Ingresar cantidad de votos en blanco (>0): ");
            scanf("%d", &tel.cantVotosBlanco);
        } while (tel.cantVotosBlanco <= 0);

        fprintf(telegramas, "%s %d %d %d %d\n", tel.codigoMesa, tel.cantElectores, tel.cantVotos, tel.cantVotosImpugnados, tel.cantVotosBlanco);

        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        printf("¿Desea cargar otro telegrama? (s/n): ");
        scanf(" %c", &continuar);
        while ((c = getchar()) != '\n' && c != EOF);

    } while (continuar == 's' || continuar == 'S');

    fclose(telegramas);
    printf("Datos guardados correctamente.\n");
}

void ListarMesasYAusentes(const char *filename){
    FILE *telegramas = fopen(filename, "r");
    if (telegramas == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }
    Telegrama tel;
    printf("Códigos de Mesa | Electores | Ausentes\n");
    printf("-------------------------------------\n");
    while (fscanf(filename, "%s %d %d %d %d", tel.codigoMesa, tel.cantElectores, tel.cantVotos, tel.cantVotosImpugnados, tel.cantVotosBlanco) == 5)
    {
        if (tel.cantVotosImpugnados > 0) {
            printf("%-15s | %-17d\n", tel.codigoMesa, tel.cantVotosImpugnados);
        }

    }
    fclose(filename);
}

// Menú principal
void Menu(const char *filename) {
    int opcion;

    do {
        printf("\nMenú de Opciones:\n");
        printf("1. Listar mesas, electores y ausentes\n");
        printf("2. Listar mesas con votos impugnados\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        // Limpiar el buffer de entrada
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        switch (opcion) {
            case 0: 
            case 1:
                ListarMesasYAusentes(filename);
                break;
            case 2:
                ListarMesasConVotosImpugnados(filename);
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while (opcion != 3);
}

// Programa principal
int main() {
    const char *filename = "telegramas.txt"; // solo me guardo el nombre para luego usarlo como quiera (ya que siempre uso el mismo archivo)
    // Cargar datos
    printf("Carga de telegramas:\n");
    CargarTelegramas(filename);
    Menu(filename);

    return 0;
}
