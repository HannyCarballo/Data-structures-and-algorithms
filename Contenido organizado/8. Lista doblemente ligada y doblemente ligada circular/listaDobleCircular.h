#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int val;
    struct Nodo *next;
    struct Nodo *prev;
} Nodo;

typedef struct
{
    int tamano;
    struct Nodo *head;
} Lista;

Lista crearLista();
void print_list(Lista);
void addPrincipioLista(Lista *, int);
void addFinalLista(Lista *, int);
void primerNodo(Lista *, int);
void borrarPrimero(Lista *);
void borrarUltimo(Lista *);
void recorrerLista(Lista);
void borrar_n_esimo(Lista *);
void addIesimoLista(Lista *, int);

Lista crearLista()
{
    Lista lista;
    lista.head = NULL;
    lista.tamano = 0;
    return lista;
}

void addIesimoLista(Lista *lista, int val)
{
    int cont = 0;
    Nodo *current = lista->head;
    while (current != NULL)
    {
        current = current->next;
        cont++;
    }
    int contador, posicion;
    printf("Ingrese la posicion: ");

    scanf("%d", &posicion);
    if (posicion >= 0 && posicion <= cont)
    {
        Nodo *temp;
        temp = lista->head;

        for (contador = 1; contador < posicion - 1; contador++)
        {
            temp = temp->next;
            if (temp == NULL)
                printf("Aqui hay un error");
        }
        Nodo *nuevoNodo;
        nuevoNodo = (Nodo *)malloc(sizeof(Nodo));
        nuevoNodo->val = val;
        nuevoNodo->next = temp->next;
        nuevoNodo->prev = temp;
        temp->next->prev = nuevoNodo;
        temp->next = nuevoNodo;
    }
    else
    {
        printf("\n Posicion no valida");
    }
}

void recorrerLista(Lista lista)
{
    int opcion;
    int var = 0;
    Nodo *temp = lista.head;
    do
    {
        printf("El elemento actual es %d \n", temp->val);
        printf("Mostrar Siguiente Presione 1 \n");
        printf("Salir Presione 2 \n");
        scanf("%d", &var);
        temp = temp->next;
        if (temp == lista.head)
        {
            printf("\nHaz dado una vuelta");
        }
        printf("\nHaz avanzado 1 posicion");
        printf("\nQue deseas hacer: \n");
        printf("1) Multiplicar por 2 \n");
        printf("2) Multiplicar por 3\n");
        printf("3) Nada \n");
        scanf("%d", &opcion);
        switch (opcion)
        {

        case 1:
            temp->val = temp->val * 2;
            break;

        case 2:
            temp->val = temp->val * 3;
            break;

        case 3:

            break;

        default:
            printf("Verifique su selección");
            break;
        }

    } while (var != 2);
}

void print_list(Lista lista)
{
    int tamano = lista.tamano;
    if (lista.head == NULL)
    {
        printf("LA LISTA ESTA VACIA \n");
    }
    else
    {
        printf("Los elementos de la lista son: \n");
        Nodo *current = lista.head;
        while (tamano > 0)
        {
            printf("%d\n", current->val);
            current = current->next;
            tamano--;
        }
    }
}

void addFinalLista(Lista *lista, int val)
{
    if (lista->head == NULL)
    {
        primerNodo(lista, val);
    }
    else
    {
        Nodo *new_node, *temp;
        new_node = (Nodo *)malloc(sizeof(Nodo));
        new_node->val = val;
        new_node->next = lista->head;
        new_node->prev = lista->head->prev;
        lista->head->prev = new_node;
        temp = lista->head;

        while (temp->next != lista->head)
            temp = temp->next;
        temp->next = new_node;
    }
    lista->tamano++;
}
void addPrincipioLista(Lista *lista, int val)
{
    if (lista->head == NULL)
    {
        primerNodo(lista, val);
    }
    else
    {
        Nodo *new_node, *temp;
        new_node = (Nodo *)malloc(sizeof(Nodo));
        new_node->val = val;
        new_node->next = lista->head;
        new_node->prev = lista->head->prev;
        lista->head->prev = new_node;

        temp = lista->head;

        while (temp->next != lista->head)
            temp = temp->next;
        temp->next = new_node;

        lista->head = new_node;
    }
    lista->tamano++;
}

void primerNodo(Lista *lista, int val)
{
    Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
    nodo->val = val;
    nodo->next = nodo;
    nodo->prev = nodo;
    lista->head = nodo;
}

void borrarPrimero(Lista *lista)
{
    if (lista->head == NULL)
    {
        printf("La lista esta vacia");
    }
    else
    {
    }
}

void borrarUltimo(Lista *lista)
{
    if (lista->head == NULL)
    {
        printf("La lista esta vacia");
    }
    else
    {
    }
}

void borrar_n_esimo(Lista *lista)
{
    int posicion;
    printf("Ingrese la posicion: ");
    scanf("%d", &posicion);
    if (lista->head == NULL)
    {
        printf("La lista esta vacia");
    }
    else
    {
        int i;
        if (posicion >= 0 && posicion < lista->tamano)
        {
            if (posicion == 0)
            {
                Nodo *temp = lista->head;
                if (temp->next == lista->head)
                {
                    lista->head = NULL;
                    free(lista->head);
                }
                else
                {
                    Nodo *nuevo_head, *kill;
                    nuevo_head = temp->next;
                    while (temp->next != lista->head)
                    {
                        temp = temp->next;
                    }
                    kill = temp->next;
                    temp->next = nuevo_head;
                    kill->prev = NULL;
                    nuevo_head->prev = temp;
                    free(kill);
                    lista->head = nuevo_head;
                }
                lista->tamano--;
            }
            else
            {
                Nodo *current = lista->head;
                Nodo *kill;
                for (i = 1; i < posicion; i++)
                {
                    current = current->next;
                }
                kill = current->next;
                current->next = kill->next;
                kill->next->prev = current->prev;
                free(kill);
            }
            lista->tamano--;
        }
        else
        {
            printf("Posicion no valida");
        }
    }
}