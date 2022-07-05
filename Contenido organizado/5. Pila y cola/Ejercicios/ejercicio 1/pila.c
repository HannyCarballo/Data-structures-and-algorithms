#include "Pila.h"
#include <stdio.h>

struct Pila
{
    int tope;
    int lista[100];
};

Pila crearPila()
{
    Pila p;
    p.tope = 0;
    return p;
}
int isEmpty(Pila p)
{
    if (p.tope == 0)
        return 1;
    return 0;
}
void push(Pila *p, int x)
{
    p->lista[p->tope] = x;
    p->tope++;
}

int pop(Pila *p)
{
    if (isEmpty(*p) == 1)
    {
        printf("La pila ya est%c vac%ca. \n", 160, 161);
        return -1;
    }
    else
    {
        int aux = p->lista[p->tope - 1];
        p->tope--;
        return aux;
    }
}

int top(Pila pila)
{
    if (isEmpty(pila) == 1)
    {
        printf("La pila ya est%c vac%ca. \n", 160, 161);
        return -1;
    }
    else
    {
        return pila.lista[pila.tope - 1];
    }
}