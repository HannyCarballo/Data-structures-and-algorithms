/*
 * Código 1 del manual de prácticas
 * contiene una pequeña modificación hecha por mi
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arreglo, num, cont;
    printf("Cuantos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    arreglo = (int *)malloc(num * sizeof(int));
    if (arreglo == NULL)
    {
        puts("error de asignación de memoria");
        exit(1);
    }

    printf("Vector reservado:\n\t[");
    for (cont = 0; cont < num; cont++)
    {
        printf("\t%d", *(arreglo + cont));
    }
    printf("\t]\n");
    printf("Se libera el espacio reservado.\n");
    free(arreglo);
    return 0;
}