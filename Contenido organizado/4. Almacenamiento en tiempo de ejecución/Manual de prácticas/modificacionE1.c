/*
 * Con base al código 1 del manual de prácticas
 * se realizan más modificaciones
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\t\tBienvenido\n\t\t");
    int *arreglo, *arreglo2, num, cont, *num2;
    printf("Cuantos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    // se modifico, y ahora se utiliza calloc() en lugar de malloc()
    arreglo = (int *)calloc(num, sizeof(int));
    if (arreglo != NULL)
    {
        for (cont = 0; cont < num; cont++)
        {
            printf("Por favor, inserte el elemento %d del conjunto.\n", cont + 1);
            scanf("%d", (arreglo + cont));
        }
        printf("Vector insertado:\n\t[");
        for (cont = 0; cont < num; cont++)
        {
            printf("\t%d", *(arreglo + cont));
        }
        printf("\t]\n");
        printf("Se va a redimensionar num con un nuevo tamanio de 25 espacios.\n");
        num2 = &num;
        *num2 = 25;
        arreglo2 = (int *)realloc(arreglo, num * sizeof(int));
        if (arreglo2 != NULL)
        {
            arreglo = arreglo2;
            for (; cont < num; cont++)
            {
                printf("Inserte el elemento %d del conjunto.\n", cont + 1);
                scanf("%d", (arreglo2 + cont));
            }
            printf("Vector final:\n\t[");
            for (cont = 0; cont < num; cont++)
            {
                printf("\t%d", *(arreglo2 + cont));
            }
            printf("\t]\n");
        }
        printf("Se libera el espacio reservado.\n");
        free(arreglo);
        free(arreglo2);
    }
    return 0;
}