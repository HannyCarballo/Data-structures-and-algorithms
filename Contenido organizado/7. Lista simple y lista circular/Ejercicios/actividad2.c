#include "lista.c"

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
        // para eliminar al inicio, el usuario primero debería tener elementos en la lista, los cuales puede añadir con la opción 1 o 2
        printf("3) Eliminar al inicio\n");
        // para eliminar al final, el usuario primero debería tener elementos en la lista, los cuales puede añadir con la opción 1 o 2
        printf("4) Eliminar al final\n");
        // para imprimir, el usuario primero debería tener elementos en la lista, los cuales puede añadir con la opción 1 o 2
        // también se puede ocupar la opción imprimir lista para comprobar el correcto funcionamiento de otras opciones
        printf("5) Imprimir Lista\n");
        // para buscar elementos, el usuario primero debería tener elementos en la lista, los cuales puede añadir con la opción 1 o 2
        printf("6) Buscar un elemento de la lista\n");
        // para agregar n- ésimo, el usuario primero debería tener elementos en la lista, los cuales puede añadir con la opción 1 o 2
        printf("7) Agregar n-%csimo\n", 130);
        // para eliminar n- ésimo, el usuario primero debería tener elementos en la lista, los cuales puede añadir con la opción 1 o 2
        printf("8) Eliminar n-%csimo\n", 130);
        // para imprimir el primer elemento, el usuario primero debería tener elementos en la lista, los cuales puede añadir con la opción 1 o 2
        printf("9) Imprimir primer elemento de la lista\n");
        printf("10) Salir.\n");
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
            printf("Se va a eliminar el primer elemento de la lista\n");
            borrarPrimero(&lista1);
            break;

        case 4:
            printf("Se va a eliminar el %cltimo elemento de la lista\n", 163);
            borrarUltimo(&lista1);
            break;

        case 5:
            print_list(lista1);
            break;

        case 6:
            printf("%cQu%c elemento deseas buscar?\n", 168, 130);
            int indice, elementoBuscar;
            scanf("%d", &elementoBuscar);
            fflush(stdin);
            indice = busqueda(&lista1, elementoBuscar);
            if (indice == 0)
            {
                printf("El elemento %d no se encuentra en la lista. Int%cntalo nuevamente", elementoBuscar, 130);
            }
            else
            {
                printf("La posici%cn del elemento es: %d", 162, indice);
            }
            break;

        case 7:
            printf("Tome en cuenta que no se debe pasar la posici%cn de los elementos ya existentes\n", 162);
            printf("%cQu%c elemento desea a%cadir?\n", 168, 130, 164);
            int elemento3;
            scanf("%d", &elemento3);
            fflush(stdin);
            int nesimo;
            printf("%cEn qu%c posici%cn deseas a%cadirlo?\n", 168, 130, 162, 164);
            scanf("%d", &nesimo);
            fflush(stdin);
            agregar_nesimo(&lista1, elemento3, nesimo);
            break;

        case 8:
            printf("Tome en cuenta que no se debe pasar la posici%cn de los elementos ya existentes\n", 162);
            printf("%cEn qu%c posici%cn est%c el elemento que deseas eliminar?\n", 168, 130, 162, 160);
            int nesimo2;
            scanf("%d", &nesimo2);
            fflush(stdin);
            eliminar_nesimo(&lista1, nesimo2);
            break;

        case 9:
            printf("El primer elemento de la lista es: %d", primerElemento(lista1));
            break;

        case 10:
            return 0;
        default:
            printf("Opci%cn no v%clida.", 162, 160);
        }
    }
    return 0;
}