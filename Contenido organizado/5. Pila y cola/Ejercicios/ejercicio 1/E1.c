/*
 * Este es el programa que se debe compilar y ejecutar
 * Los demas programas se incluyen en el encabezado
 */

#include "pila.c"
void main()
{
    // mensaje de bienvenida
    printf("Hola, bienvenido :)\nEn este programa se le pide al usuario 7 valores para la pila, y se determina el mayor elemento\n");

    // crear pila
    Pila Pila1 = crearPila();

    // dos pilas adicionales
    Pila Pila2_mayor = crearPila();
    Pila Pila3_aux = crearPila();

    // solicitando al usuario 7 valores para la pila
    int i, valores;
    printf("\nA continuaci%cn, ingresa los valores para cada elemento de la pila\n", 162);
    for (i = 0; i < 7; i++)
    {
        printf("Pila %d\n", i);
        scanf("%d", &valores);
        fflush(stdin);
        push(&Pila1, valores);
    }

    // determina el numero mayor ingresado por el usuario
    while (isEmpty(Pila1) == 0)
    {
        push(&Pila2_mayor, pop(&Pila1));
        while (isEmpty(Pila1) == 0)
        {
            if (top(Pila2_mayor) > top(Pila1))
            {
                push(&Pila3_aux, pop(&Pila1));
            }
            else
            {
                push(&Pila3_aux, pop(&Pila2_mayor));
                push(&Pila2_mayor, pop(&Pila1));
            }
        }
    }
    printf("\nEl elemento mayor es el %d\n", pop(&Pila2_mayor));

    return 0;
}