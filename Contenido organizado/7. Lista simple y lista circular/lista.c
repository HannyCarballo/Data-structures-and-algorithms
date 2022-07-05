#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int val;
    struct Nodo *next;
};

struct Lista
{
    struct Nodo *head;
};

Lista crearLista()
{
    Lista lista;
    lista.head = NULL;
    return lista;
}

// función buscar
int busqueda(Lista *lista, int x)
{
    int indice;
    indice = 0;
    Nodo *temp = lista->head;
    while (temp != NULL)
    {
        if (temp->val == x)
        {
            return indice;
        }
        temp = temp->next;
        indice++;
    }
    return 0;
}

// agregar n-ésimo
void agregar_nesimo(Lista *lista, int val, int n)
{
    Nodo *temp;
    temp = (Nodo *)malloc(sizeof(Nodo));
    temp->val = val;
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

void print_list(Lista lista)
{
    if (lista.head == NULL)
    {
        printf("LA LISTA ESTA VACIA \n");
    }
    else
    {
        printf("Los elementos de la lista son: \n");
        Nodo *current = lista.head;
        while (current != 0)
        {
            printf("%d \n", current->val);
            current = current->next;
        }
    }
}

void addPrincipioLista(Lista *lista, int val)
{
    Nodo *new_node;
    new_node = (Nodo *)malloc(sizeof(Nodo));
    new_node->val = val;
    new_node->next = lista->head;
    lista->head = new_node;
}

void addFinalLista(Lista *lista, int val)
{
    if (lista->head == NULL)
    {

        Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
        nodo->val = val;
        nodo->next = NULL;
        lista->head = nodo;
    }
    else
    {
        Nodo *current = lista->head;
        while (current->next != 0)
        {
            current = current->next;
        }
        Nodo *nuevoNodo;
        nuevoNodo = (Nodo *)malloc(sizeof(Nodo));
        nuevoNodo->val = val;
        nuevoNodo->next = NULL;
        current->next = nuevoNodo;
    }
}

void borrarPrimero(Lista *lista)
{
    if (lista->head == NULL)
    {
        printf("La lista esta vacia");
    }
    else
    {
        Nodo *nuevo_head = NULL;
        Nodo *temp = lista->head;
        nuevo_head = temp->next;
        free(lista->head);
        lista->head = nuevo_head;
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
            while (current->next->next != NULL)
            {
                current = current->next;
            }
            current->next = NULL;
            free(current->next);
        }
    }
}

int primerElemento(Lista lista)
{
    return lista.head->val;
}