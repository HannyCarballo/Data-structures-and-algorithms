#include <stdio.h>
#include <stdlib.h>

typedef struct Cola Cola;
typedef struct Automovil Automovil;

Cola crearCola(int);
void encolar(Cola *, Automovil);
int desencolar(Cola *);
int isEmpty(Cola);
void mostrarValores(Cola);
void mostrarIndices(Cola);