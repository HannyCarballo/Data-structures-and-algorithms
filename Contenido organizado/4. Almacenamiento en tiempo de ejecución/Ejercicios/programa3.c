#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char marca[20];
    char modelo[20];
    char placa[20];
} Automovil;

Automovil crearAuto(char *, char*, char *);
Automovil pedirDatos();
void imprimirAuto(Automovil);

void main()
{
    Automovil autoCreado;
    int *arreglo, num, cont;
    printf("Cuantos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    arreglo = (int *)malloc(num * sizeof(int));
    if (arreglo != NULL)
    {
        for (cont = 0; cont < num; cont++)
        {
            printf("\nInserte los datos del elemento %d del conjunto.\n", cont + 1);
            pedirDatos();
        }
    }
    free(arreglo);
}

Automovil crearAuto(char *marc, char* mod, char *plac)
{
    Automovil autoCreado;
    strcpy(autoCreado.marca, marc);
    strcpy(autoCreado.modelo, mod);
    strcpy(autoCreado.placa, plac);
    return autoCreado;
}

Automovil pedirDatos()
{
    Automovil autoCreado;
    printf("Ingrese la marca del automovil \n");
    scanf("%s", autoCreado.marca);
    printf("Ingrese el modelo del automovil \n");
    scanf("%s", &autoCreado.modelo);
    printf("Ingrese la placa del automovil \n");
    scanf("%s", autoCreado.placa);
    printf("\n");
    imprimirAuto(autoCreado);
}

void imprimirAuto(Automovil autoCreado)
{
    printf(">>>DATOS DEL AUTOMOVIL<<<\n");
    printf("Marca: %s \n", autoCreado.marca);
    printf("Modelo: %s \n", autoCreado.modelo);
    printf("Placa: %s \n", autoCreado.placa);
    printf("\n");
}