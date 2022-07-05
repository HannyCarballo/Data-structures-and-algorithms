/*
 * Este es el programa que se debe compilar y ejecutar
 * Los demas programas se incluyen en el encabezado
 */

#include "cola.c"
#include "pila.c"
void main()
{
    // mensaje de bienvenida
    printf("Hola, bienvenido :)\nEn este programa se le pide al usuario 5 valores para la pila, y se invierte su orden\n");

    // crear pila
    Pila Pila1 = crearPila();
    Cola Cola1 = crearCola();
    // solicitando al usuario 5 valores para la pila
    int i, valores;
    printf("\nA continuaci%cn, ingresa los valores para cada elemento de la pila\n", 162);
    for (i = 0; i < 5; i++)
    {
        printf("Pila %d\n", i);
        scanf("%d", &valores);
        fflush(stdin);
        push(&Pila1, valores);
    }

    // invirtiendo los valores de la pila con ayuda de cola
    while (isEmpty(Pila1) == 0)
    {
        encolar(&Cola1, pop(&Pila1));
    }
    while (isEmpty(Pila1) == 0)
    {
        push(&Pila1, desencolar(&Cola1));
    }
    int j;
    printf("\nLa pila invertida es:\n");
    for (j = 0; j < 5; j++)
    {
        printf("%d, ", desencolar(&Cola1));
    }
}