#include <stdio.h>
#include <stdlib.h>
main()
{

    int cont, arreglo[] = {35, 40, 45, 50, 55};
    int variable;
    int *ptr = (int *)calloc(10, sizeof(int));
    char *ptr2 = malloc(100 * sizeof(char));
    int *ptr3 = (int *)calloc(10, sizeof(int));

    // Imprimiendo direcciones de un arreglo
    for (cont = 0; cont < 10; cont++)
    {
        printf("direccion arreglo[%d]=%d   valor arreglo[%d]=%d\n", cont, &arreglo[cont], cont, arreglo[cont]);
    }
    printf("\n");

    // Imprimiendo direcciones y contenido de un apuntador de memoria dinámica reservado con calloc
    printf("Direcciones y valores asignados (son multiplos de 3) de ptr\n");
    for (cont = 0; cont < 10; cont++)
    {
        cont + 1;
        *(ptr + cont) = 3 * (cont + 1);
        printf("direccion=%d   *valor=%d \n", ptr + cont, *(ptr + cont));
    }
    printf("\n");

    // Redimensionando ptr
    printf("Redimensionando ptr con un nuevo tamanio de 25 espacios.\n");
    ptr = (int *)realloc(ptr, 25 * sizeof(int));
    for (cont = 0; cont < 25; cont++)
    {
        printf("direccion=%d   *valor=%d \n", ptr + cont, *(ptr + cont));
    }
    printf("\n");

    // Realloc y ptr3
    printf("Realloc y ptr3.\n");
    ptr3 = (int *)realloc(ptr3, 25 * sizeof(int));
    for (cont = 0; cont < 25; cont++)
    {
        printf("direccion=%d   *valor=%d \n", ptr3 + cont, *(ptr3 + cont));
    }
    printf("\n");

    /* No remover estos comentarios, (por lo menos no antes de acabar la actividad1) /*/
    // strcpy(ptr2,"hola amigo como estas");  //esto si se puede hacer
    //  //ptr2 = "Hola amigo como estas";    //nunca haga esto compa
    // for(cont=0;cont<100;cont++){
    //    printf("%c",ptr2[cont]);     //no vaya a descomentar esta linea, ni cambiar el contador del for a 1000 (
    // }

    free(ptr);
    free(ptr2);

    system("PAUSE");
}