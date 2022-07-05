#include "listacirc.h"
#include <stdio.h>
#include <stdlib.h>

struct Computadora
{
    char modelo[20];
    char marca[20];
    char sistema_op[20];
};

struct Nodo
{
    struct Computadora Computadora;
    struct Nodo *next;
};

struct Lista
{
    struct Computadora Computadora;
    struct Nodo *head;
    int tamano;
};

Lista crearLista()
{
    Lista lista;
    lista.head = NULL;
    lista.tamano = 0;
    return lista;
}

// función buscar
int busqueda(Lista *lista, Computadora Computadora, int marca)
{
    int indice;
    indice = 0;
    Nodo *temp = lista->head;
    while (temp != NULL)
    {
        if (temp->Computadora.marca == marca)
        {
            return indice;
        }
        temp = temp->next;
        indice++;
    }
    return 0;
}

// agregar n-ésimo
void agregar_nesimo(Lista *lista, Computadora Computadora, int n)
{
    Nodo *temp;
    temp = (Nodo *)malloc(sizeof(Nodo));
    temp->Computadora = Computadora;
    temp->next = NULL;
    if (n == 1)
    {
        temp->next = lista->head;
        lista->head = temp;
        return;
    }
    Nodo *temp1 = lista->head;
    int i;
    for (i = 0; i < n - 2; i++)
    {
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}

// eliminar n-ésimo
void eliminar_nesimo(Lista *lista, int n)
{
    Nodo *temp = lista->head;
    if (n == 1)
    {
        lista->head = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; i < n - 2; i++)
    {
        temp = temp->next;
    }
    Nodo *temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
}

void print_list(Lista lista, Computadora Computadora)
{
    if (lista.head == NULL)
    {
        printf("LA LISTA ESTA VACIA \n");
    }
    else
    {
        int tamano = lista.tamano; // se define el tamaño
        printf("Los elementos de la lista son: \n");
        Nodo *Computadora = lista.head;
        while (tamano > 0)
        { // tamaño como condicional
            printf("%s\n", Computadora->Computadora.marca);
            Computadora = Computadora->next;
            tamano--; // se reduce tamaño
        }
    }
}

void addFinalLista(Lista *lista, Computadora Computadora)
{
    int posicion = lista->tamano;
    if (lista->head == NULL)
    {
        Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
        nodo->Computadora = Computadora;
        nodo->next = nodo;
        lista->head = nodo;
    }
    else
    {
        Nodo *current = lista->head;
        while (posicion != 1)
        {
            current = current->next;
            posicion--;
        }
        Nodo *nuevoNodo;
        nuevoNodo = (Nodo *)malloc(sizeof(Nodo));
        current->next = nuevoNodo;
        nuevoNodo->Computadora = Computadora;
        nuevoNodo->next = lista->head;
    }
    lista->tamano++;
}
void addPrincipioLista(Lista *lista, Computadora Computadora)
{
    Nodo *node, *temp;
    node = (Nodo *)malloc(sizeof(Nodo));
    node->Computadora = Computadora;
    if (lista->head == NULL)
    {
        node->next = node;
    }
    else
    {
        node->next = lista->head;
        temp = lista->head;
        while (temp->next != lista->head)
        {
            temp = temp->next;
        }
        temp->next = node;
    }
    lista->head = node;
    lista->tamano++;
}
void borrarPrimero(Lista *Lista)
{
    if (Lista->head == NULL)
    {
        printf("La lista esta vacia");
    }
    else
    {
        Nodo *nuevo_head = NULL;
        Nodo *temp = Lista->head;
        nuevo_head = temp->next;
        Lista->head = nuevo_head;
        free(Lista->head);
    }
}

void borrarUltimo(Lista *lista)
{
    Nodo *temp = lista->head;
    if (lista->head == NULL)
    {
        printf("La lista esta vacia");
    }
    else
    {
        if (temp->next == NULL)
        {
            lista->head = NULL;
            free(lista->head);
        }
        else
        {
            Nodo *current = lista->head;
            Nodo *current2 = current->next;
            while (current2->next != NULL)
            {
                current = current->next;
            }
            free(current->next);
            current->next = NULL;
        }
    }
}