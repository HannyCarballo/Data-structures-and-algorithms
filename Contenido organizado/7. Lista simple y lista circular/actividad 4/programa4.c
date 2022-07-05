#include "listacirc.c"

void main()
{
    short opcion = 0;
    int num, i;
    Computadora Compu;

    printf("\tHola, bienvenido\n");
    printf("En este programa podr%cs trabajar con una lista de computadoras\n", 160);
    Lista listacompus = crearLista();
    while (1)
    {
        printf("\n   -----MEN%c DE OPCIONES-----\n", 233);
        printf("\nElegir una opci%cn:\n", 162);
        printf("1) Agregar al principio\n");
        printf("2) Agregar al final\n");
        printf("3) Eliminar al inicio\n");
        printf("4) Imprimir Lista\n");
        printf("5) Buscar un elemento de la lista\n");
        printf("6) Agregar n-%csimo\n", 130);
        printf("7) Eliminar n-%csimo\n", 130);
        printf("8) Salir.\n");
        scanf("%d", &opcion);
        printf("\n");
        switch (opcion)
        {
        case 1:
            printf("Llenando los datos de la estructura computadora\n");
            printf("Marca de la computadora \n");
            fflush(stdin);
            fgets(Compu.marca, 20, stdin);
            fflush(stdin);
            printf("Modelo de la computadora \n");
            fgets(Compu.modelo, 20, stdin);
            fflush(stdin);
            printf("Ingresa el nombre del Sistema Operativo de la computadora\n");
            fgets(Compu.sistema_op, 20, stdin);
            fflush(stdin);
            // ingresa a la lista
            addPrincipioLista(&listacompus, Compu);
            break;

        case 2:
             printf("Llenando los datos de la estructura computadora\n");
            printf("Marca de la computadora \n");
            fflush(stdin);
            fgets(Compu.marca, 20, stdin);
            fflush(stdin);
            printf("Modelo de la computadora \n");
            fgets(Compu.modelo, 20, stdin);
            fflush(stdin);
            printf("Ingresa el nombre del Sistema Operativo de la computadora\n");
            fgets(Compu.sistema_op, 20, stdin);
            fflush(stdin);
            // ingresa a la lista
            addFinalLista(&listacompus, Compu);
            break;

        case 3:
            printf("Se va a eliminar el primer elemento de la lista\n");
            borrarPrimero(&listacompus);
            break;

        case 4:
            print_list(listacompus, Compu);
            break;

        case 5:
            printf("Ingresa la marca del elemento que deseas buscar\n");
            int indice, marca;
            scanf("%d", &marca);
            fflush(stdin);
            indice = busqueda(&listacompus, Compu, marca);
            if (indice == 0)
            {
                printf("El elemento %d no se encuentra en la lista. Int%cntalo nuevamente", marca, 130);
            }
            else
            {
                printf("La posici%cn del elemento es: %d", 162, indice);
            }
            break;

        case 6:
            printf("Tome en cuenta que no se debe pasar la posici%cn de los elementos ya existentes\n", 162);
            printf("%cQu%c elemento desea a%cadir?\n", 168, 130, 164);
            int elemento3;
            scanf("%d", &elemento3);
            fflush(stdin);
            int nesimo;
            printf("%cEn qu%c posici%cn deseas a%cadirlo?\n", 168, 130, 162, 164);
            scanf("%d", &nesimo);
            fflush(stdin);
            agregar_nesimo(&listacompus, Compu, nesimo);
            break;

        case 7:
            printf("Tome en cuenta que no se debe pasar la posici%cn de los elementos ya existentes\n", 162);
            printf("%cEn qu%c posici%cn est%c el elemento que deseas eliminar?\n", 168, 130, 162, 160);
            int nesimo2;
            scanf("%d", &nesimo2);
            fflush(stdin);
            eliminar_nesimo(&listacompus, nesimo2);
            break;

        case 8:
            return 0;
        default:
            printf("Opci%cn no v%clida.", 162, 160);
        }
    }
    return 0;
}