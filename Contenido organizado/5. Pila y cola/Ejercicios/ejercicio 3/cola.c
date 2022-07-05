#include <stdio.h>
#include <stdlib.h>

typedef struct Cola Cola;
typedef struct libro
{
    char titulo[20];
    char autor[20];
    int num_paginas;
    int clave;
} libro;

struct Cola
{
    int primero;
    int ultimo;
    libro libro[100];
};

Cola crearCola();
int isEmpty1(Cola);
void encolar(Cola *, libro);
libro desencolar(Cola *);
libro first(Cola);

Cola crearCola()
{
    Cola c;
    c.primero = 1;
    c.ultimo = 0;
    return c;
}
int isEmpty1(Cola c)
{
    if (c.primero == c.ultimo + 1)
        return 1;
    return 0;
}
void encolar(Cola *c, libro x)
{
    c->libro[c->ultimo] = x;
    c->ultimo += 1;
}

libro desencolar(Cola *c)
{
    if ((isEmpty1(*c)) == 1)
        printf("la cola esta vacia \n");
    else
    {
        libro aux = c->libro[c->primero - 1];
        c->primero++;
        if (c->primero == c->ultimo + 1)
        {

            *c = crearCola();
        }
        return aux;
    }
}

libro first(Cola c)
{
    return c.libro[c.primero - 1];
}