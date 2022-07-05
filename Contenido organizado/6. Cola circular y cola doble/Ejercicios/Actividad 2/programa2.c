#include "cola.c"

void main()
{
    int tamano;
    printf("Hola, bienvenido :)\n");
    // función crearCola()
    //aquí el tamaño se modifica de 9 a 5 para responder las preguntas de la práctica
    tamano = 5;
    Cola queue = crearCola(tamano);

    printf("Los valores de cola son:\n");
    printf("PRIMERO:%d\n%cLTIMO:%d", queue.primero, 233, queue.ultimo), "\n\n";
    printf("\n");

    // función isEmpty()
    printf("\nSi la cola no est%c llena se imprimir%c un 1, si se encuentra llena se imprimir%c un 0\n", 160, 160, 160);
    printf("%d\n", isEmpty(queue));
    printf("\n");

    // operaciones convencionales de una cola
    encolarFinal(&queue, 15);
    encolarFinal(&queue, 25);
    encolarFinal(&queue, 35);
    encolarFinal(&queue, 45);
    encolarFinal(&queue, 55);
    encolarFinal(&queue, 65);
    encolarFinal(&queue, 75);
    desencolarInicio(&queue);
    desencolarInicio(&queue);
    desencolarInicio(&queue);
    encolarFinal(&queue, 85);
    desencolarInicio(&queue);

    printf("El contenido de la estructura es:\n");

    // función mostrarValores()
    mostrarValores(queue);
    // funcion mostrarIndices()
    mostrarIndices(queue);

    // función isEmpty()
    printf("\nSi la cola no est%c llena se imprimir%c un 1, si se encuentra llena se imprimir%c un 0\n", 160, 160, 160);
    printf("%d\n", isEmpty(queue));
    printf("\n");
    return 0;
}