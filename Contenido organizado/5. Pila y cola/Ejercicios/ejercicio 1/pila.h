/*
 * Aquí pila.h sirve para el ejercicio 1, que lleva por nombre E1.c
 */

typedef struct Pila Pila;

Pila crearPila();
int isEmpty(Pila);
void push(Pila *, int);
int pop(Pila *);
int top(Pila);