#include "cola.c"
#include "pila.c"

void main()
{
    printf("Hola, bienvenido :)\nEn este programa estamos implementando las funciones de pila y cola\n");
    printf("\n");
    printf("IMPLEMENTANDO LAS FUNCIONES DE PILA");
    // función crearPila()
    Pila pila1 = crearPila();
    /* int elementos,elementos1;
     * para limitar el tamaño de pila, utilizo este if
     * if (elementos < 8)
     * {
     */
    // función isEmpty()
    printf("\nSi la pila no est%c llena se imprimir%c un 1, si se encuentra llena se imprimir%c un 0\n", 160, 160, 160);
    printf("%d\n", isEmpty(pila1));
    printf("\n");

    // función push()
    push(&pila1, 50);
    push(&pila1, 20);
    push(&pila1, 345);
    push(&pila1, 4);
    push(&pila1, 18);
    printf("El valor de la pila en el tope es: %d\n", pila1.tope, "\n");

    // función pop()
    pop(&pila1);
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
    printf("\n\n");
    //}

    printf("IMPLEMENTANDO LAS FUNCIONES DE COLA\n");
    // función crearCola()
    Cola cola1 = crearCola();
    printf("Los valores de cola son:\n");
    printf("PRIMERO:%d\n%cLTIMO:%d", cola1.primero, 233, cola1.ultimo), "\n\n";
    printf("\n");
    /* para limitar el tamaño de cola, utilizo este if
     * if (elementos1 < 8)
     * {
     */
    // función isEmpty()
    printf("\nSi la cola no est%c llena se imprimir%c un 1, si se encuentra llena se imprimir%c un 0\n", 160, 160, 160);
    printf("%d\n", isEmpty1(cola1));
    printf("\n");

    // función encolar()
    encolar(&cola1, 50);
    encolar(&cola1, 20);
    encolar(&cola1, 345);
    encolar(&cola1, 4);
    encolar(&cola1, 18);
    encolar(&cola1, 18);
    printf("La cola contiene %d elementos\n", cola1.ultimo);
    printf("\n");

    // función desencolar()
    desencolar(&cola1);
    desencolar(&cola1);
    /*
     * aquí, como ya se desencolo 2 veces, lo que se imprimirá a continuación es el tercer elemento desencolado
     * y como el tercer elemento es 345, se imprime ese valor que desencolo, por eso está imprimiendo 345.
     */
    printf("Tercer elemento desencolado: %d\n", desencolar(&cola1));
    printf("\n");

    // función first()
    printf("El primer elemento de la cola es: %d\n", first(cola1));
    //}
    return 0;
}