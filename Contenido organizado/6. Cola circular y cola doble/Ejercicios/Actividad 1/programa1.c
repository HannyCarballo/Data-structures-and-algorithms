#include "colaDoble.c"
void main()
{
    int tamano;
    printf("Hola, bienvenido :)\nEn este programa estamos probando las funciones de una cola circular doble\n");
    // función crearCola()
    printf("%cCu%cntos elementos quieres que tenga la cola?\n", 168, 160);
    scanf("%d", &tamano);
    Cola queue1 = crearCola(tamano);

    // función isEmpty()
    printf("\nSi la cola no est%c llena se imprimir%c un 1, si se encuentra llena se imprimir%c un 0\n", 160, 160, 160);
    printf("%d\n", isEmpty(queue1));
    printf("\n");

    // función encolarFinal()
    encolarFinal(&queue1, 50);
    encolarFinal(&queue1, 20);
    encolarFinal(&queue1, 345);
    // función mostrarValores()
    mostrarValores(queue1);
    // funcion mostrarIndices()
    mostrarIndices(queue1);
    printf("\n");

    // función encolarInicio()
    encolarInicio(&queue1, 4);
    encolarInicio(&queue1, 18);
    encolarInicio(&queue1, 18);
    // función mostrarValores()
    mostrarValores(queue1);
    // funcion mostrarIndices()
    mostrarIndices(queue1);
    printf("La cola contiene %d elementos\n", queue1.ultimo);
    printf("\n");

    // función isEmpty()
    printf("\nSi la cola no est%c llena se imprimir%c un 1, si se encuentra llena se imprimir%c un 0\n", 160, 160, 160);
    printf("%d\n", isEmpty(queue1));
    printf("\n");

    // función desencolarInicio()
    desencolarInicio(&queue1);
    printf("Segundo elemento desencolado al inicio: %d\n", desencolarInicio(&queue1));
    printf("\n");
    // función mostrarValores()
    mostrarValores(queue1);
    // funcion mostrarIndices()
    mostrarIndices(queue1);

    // función desencolarFinal()
    desencolarFinal(&queue1);
    printf("Segundo elemento desencolado al final: %d\n", desencolarFinal(&queue1));
    printf("\n");
    // función mostrarValores()
    mostrarValores(queue1);
    // funcion mostrarIndices()
    mostrarIndices(queue1);

    // función isEmpty()
    printf("\nSi la cola no est%c llena se imprimir%c un 1, si se encuentra llena se imprimir%c un 0\n", 160, 160, 160);
    printf("%d\n", isEmpty(queue1));
    printf("\n");
    return 0;
}