#include "cola.c"
#include "pila.c"
void main()
{
    printf("Hola, bienvenido :)\nEn este programa estamos limitando el tama%co de pila y cola\n", 164);
    printf("\n\t\tPILA\t");
    Pila pila1 = crearPila();
    printf("\n");
    int i, elementos, valor;
    // primero le pedimos al usuario que indique los elementos de la pila, los cuales se están limitando
    printf("%cCu%cntos elementos quieres que tenga la pila?\n", 168, 160);
    scanf("%d", &elementos);

    // para limitar el tamaño de pila, utilizo este if
    if (elementos < 8)
    {
        // ciclo  for para recibir los elementos de la pila
        for (i = 0; i < elementos; i++)
        {
            printf("Elemento %d de la pila:\n", i);
            printf("Ingresa el valor del elemento\n");
            scanf("%d", &valor);
            fflush(stdin);
            push(&pila1, valor);
        }

        printf("\nSi la pila no est%c llena se imprimir%c un 1, si se encuentra llena se imprimir%c un 0\n", 160, 160, 160);
        printf("%d\n", isEmpty(pila1));
        printf("\n");
        printf("El valor de la pila en el tope es: %d\n", pila1.tope, "\n");
        pop(&pila1);
        pop(&pila1);
        /*
         * aquí, como ya se elimino 3 veces, lo que se imprimirá a continuación es el cuarto elemento eliminado
         * y este es es 20.
         */
        printf("\nEl valor eliminado es: %d", pop(&pila1), "\n");

        // función top()
        printf("\n\nEl tope de la pila es: %d\n", pila1.tope);

        printf("\nSi la pila no est%c llena se imprimir%c un 1, si se encuentra llena se imprimir%c un 0\n", 160, 160, 160);
        printf("%d\n", isEmpty(pila1));
        printf("\n");
    }
    else
    {
        printf("Supera el valor de elementos permitidos\n\n");
    }

    printf("\n\t\tCOLA\n");
    // función crearCola()
    Cola cola1 = crearCola();
    int j, elementos1;

    printf("%cCu%cntos elementos quieres que tenga la cola?\n", 168, 160);
    scanf("%d", &elementos1);

    // para limitar el tamaño de cola, utilizo este if
    if (elementos1 < 8)
    {
        // ciclo  for para recibir los elementos de la cola
        for (i = 0; i < elementos1; i++)
        {
            printf("Elemento %d de la cola\n", i);
            printf("Ingresa el valor del elemento\n");
            scanf("%d", &valor);
            fflush(stdin);
            encolar(&cola1, valor);
        }

        printf("\nSi la cola no est%c llena se imprimir%c un 1, si se encuentra llena se imprimir%c un 0\n", 160, 160, 160);
        printf("%d\n", isEmpty1(cola1));
        printf("\n");

        desencolar(&cola1);
        desencolar(&cola1);
        /*
         * aquí, como ya se desencolo 2 veces, lo que se imprimirá a continuación es el tercer elemento desencolado
         * y como el tercer elemento es 345, se imprime ese valor que desencolo, por eso está imprimiendo 345.
         */
        printf("Tercer elemento desencolado: %d\n", desencolar(&cola1));
        printf("\n");

        printf("El primer elemento de la cola es: %d\n", first(cola1));
    }
    else
    {
        printf("Supera el valor de elementos permitidos");
    }
    return 0;
}