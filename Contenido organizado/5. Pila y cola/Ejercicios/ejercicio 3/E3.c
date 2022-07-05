/*
 * Este es el programa que se debe compilar y ejecutar
 * El otro programa se incluye en el encabezado
 */

#include "cola.c"
int main()
{
    // mensaje de bienvenida al usuario
    printf("Hola, bienvenido :)\nEn este programa se elabora una cola de libros\n");
    int numLibros;

    // solicitando el número de libros para leer
    printf("\n%cCu%cntos libros deseas registrar?\n", 168, 160);
    scanf("%d", &numLibros);
    fflush(stdin);

    // uso de un arreglo dinámico con ayuda de malloc
    libro *apunLibro = (libro *)malloc(numLibros * sizeof(libro));
    Cola ColaLibros = crearCola();
    int i;

    // llenando los datos de la estructura libro
    for (i = 0; i < numLibros; ++i)
    {
        printf("\nPor favor, ingresa los datos del libro %d\n", i);
        printf("T%ctulo:\n", 161);
        fgets(apunLibro[i].titulo, 20, stdin);
        fflush(stdin);
        printf("Nombre del autor:\n");
        fgets(apunLibro[i].autor, 20, stdin);
        fflush(stdin);
        printf("N%cmero de p%cginas\n", 163, 160);
        scanf("%d", &apunLibro[i].num_paginas);
        fflush(stdin);
        printf("Clave del libro\n");
        scanf("%d", &apunLibro[i].clave);
        fflush(stdin);
        // ingresa a la cola
        encolar(&ColaLibros, apunLibro[i]);
    }

    float Tiempo_total = 0;
    for (int i = 0; i < numLibros; ++i)
    {
        // imprime nombre del libro y el tiempo aproximado de lectura en minutos
        libro devueltaCola = desencolar(&ColaLibros);
        printf("\nT%ctulo del libro: %s", 161, devueltaCola.titulo);
        float tiempo;
        tiempo = (devueltaCola.num_paginas) * 20;
        tiempo /= 60;
        printf("\nEl tiempo de lectura de este libro en minutos es de: %.2f\n", tiempo);
        Tiempo_total += tiempo;
    }
    printf("\nEl tiempo de lectura de todos los libros en minutos es de: %.2f\n", Tiempo_total);
    return 0;
}