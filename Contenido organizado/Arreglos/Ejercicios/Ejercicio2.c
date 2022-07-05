/*
 Ejercicio 2. Programa para trabajar sobre un arreglo de 8 elementos 
 en el cual se mostrará al usuario un menú
*/

#include <stdio.h>
#include <stdlib.h>

void pedir_o_modificar();
void suma();
void multiplicacion();
void suma_condicion();
void multi_por_3();

int main()
{
    short opcion = 0;
    while (1)
    {
        printf("\n\tEJERCICIO 2\n");
        printf("\n\tHECHO POR: HANNY CARBALLO\n");
        printf("¿Que desea realizar?\n");
        printf("1) Ingresar o modificar elementos del arreglo.\n");
        printf("2) Mostrar la Suma de los elementos.\n");
        printf("3) Realizar la multiplicacion de los elementos. \n");
        printf("4) Realizar la suma solo de los elementos divisibles entre 3. \n");
        printf("5) Multiplicar por 3 cada elemento del arreglo. \n");
        printf("6) Salir.\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            pedir_o_modificar();
            break;

        case 2:
            suma();
            break;

        case 3:
            multiplicacion();
            break;

        case 4:
            suma_condicion();
            break;

        case 5:
            multi_por_3();
            break;

        case 6:
            return 0;
        default:
            printf("Opción no valida.\n");
        }
    }
    return 0;
}

void pedir_o_modificar()
{
    int elementos[8];
    int i, a;
    for (i = 0; i < 8; i++)
    {
        printf("Ingresa los elementos del arreglo %d: ", i);
        scanf("%d", &elementos[i]);
    }

    int nuevo_elemento;
    printf("Ingresa la posicion del elemento que deseas modificar\n");
    scanf("%d", &a);
    printf("Ingresa el nuevo valor del elemento\n");
    scanf("%d", &nuevo_elemento);
    printf("Despues de modificar el elemento, el nuevo arreglo seria:");
    for (i = 0; i < 8; i++){
        elementos[a] = nuevo_elemento;
        printf("\t%3d",elementos[i]);
    }
}

void suma()
{
    int elementos[8];
    int i;
    for (i = 0; i < 8; i++)
    {
        printf("Ingresa los elementos del arreglo %d: ", i);
        scanf("%d", &elementos[i]);
    }

    int suma = 0;
    for (i = 0; i < 8; i++)
    {
        suma += elementos[i];
    }

    printf("La suma de los elementos es: %d", suma);
}

void multiplicacion()
{
    int elementos[8];
    int i;
    for (i = 0; i < 8; i++)
    {
        printf("Ingresa los elementos del arreglo %d: ", i);
        scanf("%d", &elementos[i]);
    }

    int multi = 1;
    for (i = 0; i < 8; i++)
    {
        multi *= elementos[i];
    }

    printf("La multiplicacion de los elementos es: %d", multi);
}

void suma_condicion()
{
    int elementos[8];
    int i;
    for (i = 0; i < 8; i++)
    {
        printf("Ingresa los elementos del arreglo %d: ", i);
        scanf("%d", &elementos[i]);
    }

    int suma = 0;

    for (i = 0; i < 8; i++)
    {
        if (elementos[i] % 3 == 0)
        {
            suma += elementos[i];
        }
    }
    printf("La suma de los elementos divisibles entre 3 es: %d", suma);
}

void multi_por_3()
{
    int elementos[8];
    int i;
    for (i = 0; i < 8; i++)
    {
        printf("Ingresa los elementos del arreglo %d: ", i);
        scanf("%d", &elementos[i]);
    }

    int numero = 3;
    for (i = 0; i < 8; i++)
    {
        elementos[i] *= numero;
    }

    printf("Despues de multiplicar por 3, el nuevo arreglo seria:\n");
    for (i = 0; i < 8; i++)
    {
        printf("\t%3d", elementos[i]);
    }
}