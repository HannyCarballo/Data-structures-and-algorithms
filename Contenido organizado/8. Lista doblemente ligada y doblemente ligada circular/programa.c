#include "listaDobleCircular.h"

void main()
{
    short opcion = 0;
    int num, i;

    printf("\tHola, bienvenido\n");
    Lista lista1 = crearLista();

    while (1)
    {
        printf("\n   -----MEN%c DE OPCIONES-----\n", 233);
        printf("\nElegir una opci%cn:\n", 162);
        printf("1) Agregar al principio\n");
        printf("2) Agregar al final\n");
        printf("3) Imprimir Lista\n");
        printf("4) Agregar n-%csimo\n", 130);
        printf("5) Eliminar n-%csimo\n", 130);
        printf("6) Salir.\n");
        scanf("%d", &opcion);
        printf("\n");
        switch (opcion)
        {
        case 1:
            printf("%cQu%c elemento deseas a%cadir al principio de la lista?\n", 168, 130, 164);
            int elemento;
            scanf("%d", &elemento);
            fflush(stdin);
            addPrincipioLista(&lista1, elemento);
            break;

        case 2:
            printf("%cQu%c elemento deseas a%cadir al final de la lista?\n", 168, 130, 164);
            int elemento2;
            scanf("%d", &elemento2);
            fflush(stdin);
            addFinalLista(&lista1, elemento2);
            break;

        case 3:
            print_list(lista1);
            break;

        case 4:
            printf("%cQu%c elemento desea a%cadir?\n", 168, 130, 164);
            int elemento3;
            scanf("%d", &elemento3);
            fflush(stdin);
            addIesimoLista(&lista1, elemento);
            break;

        case 5:
            borrar_n_esimo(&lista1);
            break;

        case 6:
            return 0;
        default:
            printf("Opci%cn no v%clida.", 162, 160);
        }
    }
    return 0;
}