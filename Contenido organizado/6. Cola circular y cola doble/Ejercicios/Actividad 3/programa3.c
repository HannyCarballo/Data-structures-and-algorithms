#include "colaDoble.c"
void main()
{
    int tamano;
    tamano = 8;
    printf("Hola, bienvenido :)\n");
    // función crearCola()
    Cola queue = crearCola(tamano);

    // función isEmpty()
    printf("\nSi la cola no est%c llena se imprimir%c un 1, si se encuentra llena se imprimir%c un 0\n", 160, 160, 160);
    printf("%d\n", isEmpty(queue));
    printf("\n");

    printf("\t----Estado 1----\t\n");
    encolarFinal(&queue, 102);
    encolarFinal(&queue, 103);
    encolarFinal(&queue, 104);
    encolarFinal(&queue, 105);
    // función mostrarValores()
    mostrarValores(queue);
    // funcion mostrarIndices()
    mostrarIndices(queue);
    printf("\n");

    printf("\t----Estado 2----\t\n");
    desencolarInicio(&queue);
    encolarInicio(&queue, 99);
    encolarInicio(&queue, 98);
    encolarInicio(&queue, 97);
    desencolarFinal(&queue);
    encolarFinal(&queue, 120);
    encolarFinal(&queue, 121);
    // función mostrarValores()
    mostrarValores(queue);
    // funcion mostrarIndices()
    mostrarIndices(queue);
    printf("\n");

    printf("\t----Estado 3----\t\n");
    desencolarInicio(&queue);
    desencolarInicio(&queue);
    desencolarInicio(&queue);
    encolarFinal(&queue, 122);
    // función mostrarValores()
    mostrarValores(queue);
    // funcion mostrarIndices()
    mostrarIndices(queue);
    printf("\n");

    // función isEmpty()
    printf("\nSi la cola no est%c llena se imprimir%c un 1, si se encuentra llena se imprimir%c un 0\n", 160, 160, 160);
    printf("%d\n", isEmpty(queue));
    printf("\n");
}