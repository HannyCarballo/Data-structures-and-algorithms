#include <stdio.h>
#include <stdlib.h>

typedef struct Cola Cola;

Cola crearCola(int);
void encolar(Cola *, int);
int desencolar(Cola *);
void mostrarValores(Cola);
void mostrarIndices(Cola);