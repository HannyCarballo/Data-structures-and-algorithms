#include "colaDoble.h"

struct Automovil
{
    char marca[20];
    char modelo[20];
    char placa[20];
};

struct Cola
{
    int primero;
    int ultimo;
    int tamano;
    int disponibles;
    Automovil Automovil[100];
};

Cola crearCola(int tamano)
{
    Cola c;
    c.primero = 1;
    c.ultimo = 0;
    c.tamano = tamano;
    c.disponibles = c.tamano;
    return c;
}

int isEmpty(Cola c)
{
    if ((c.primero == c.ultimo + 1) && (c.disponibles == c.tamano))
        return 1;
    return 0;
}

void encolarFinal(Cola *c, Automovil x)
{
    if (c->disponibles == 0)
    {
        printf("ya est%c a su m%cxima capacidad \n", 160, 160);
    }
    else
    {
        c->ultimo = (c->ultimo % c->tamano) + 1;
        c->Automovil[c->ultimo - 1] = x;
        c->disponibles--;
    }
}

void encolarInicio(Cola *c, Automovil x)
{
    if (c->ultimo == 0)
    {
        encolarFinal(c, x);
    }
    else
    {
        if (c->disponibles == 0)
        {
            printf("ya est%c a su m%cxima capacidad \n", 160, 160);
        }
        else
        {
            if (c->primero == 1)
            {
                c->primero += c->tamano - 1;
                c->Automovil[c->primero - 1] = x;
                c->disponibles--;
            }
            else
            {
                c->primero = (c->primero + c->tamano) % ((c->tamano) + 1);
                c->Automovil[c->primero - 1] = x;
                c->disponibles--;
            }
        }
    }
}

Automovil desencolarInicio(Cola *c)
{
    if ((isEmpty(*c)) == 1)
        printf("la cola est%c vac%ca \n", 160, 161);
    else
    {
        c->disponibles++;
        Automovil aux = c->Automovil[c->primero - 1];
        // c->Automovil[c->primero - 1] = 0;
        if (c->primero != c->ultimo)
            c->primero = (c->primero % c->tamano) + 1;
        else
            c->primero++;
        if ((c->primero) == (c->ultimo + 1))
        {
            *c = crearCola(c->tamano);
        }
        return aux;
    }
}
Automovil desencolarFinal(Cola *c)
{
    if ((isEmpty(*c)) == 1)
        printf("la cola est%c vac%ca \n", 160, 161);
    else
    {
        c->disponibles++;
        Automovil aux = c->Automovil[c->ultimo - 1];
        // c->Automovil[c->ultimo - 1] = 0;
        c->ultimo--;
        if (c->ultimo == 0)
        {
            if (c->primero == (c->ultimo + 1))
            {
                *c = crearCola(c->tamano);
            }
            else
                c->ultimo += c->tamano;
        }
        if (c->primero == (c->ultimo + 1))
        {
            *c = crearCola(c->tamano);
        }
        return aux;
    }
}

void mostrarValores(Cola queue1)
{
    int i = 0;
    for (i = 0; i < queue1.tamano; i++)
    {
        printf("Posici%cn %d \t valor %s \n", 162, i + 1, queue1.Automovil[i].marca);
    }
}

void mostrarIndices(Cola queue1)
{
    printf("Primero = %d \n", queue1.primero);
    printf("%cltimo = %d \n", 233, queue1.ultimo);
    printf("Disponibles = %d \n", queue1.disponibles);
}