#include <stdio.h>
void *multi1(int, int);
void *multi2(int, int);
int resultado, resultado2;
int main()
{
    printf("\tPrograma hecho por Hanny Carballo\t\n");
    int valor1, valor2;
    printf("\tBienvenido\t\n Ingresa el primer valor(numero)\n");
    scanf("%d", &valor1);
    printf("Ahora ingresa el segundo valor(numero)\n");
    scanf("%d", &valor2);
    printf("El producto entre ambos valores es: %d\n", multi1(valor1, valor2));
    multi1(valor1, valor2);
    printf("El producto del valor obtenido y el segundo valor ingresado es: %d\n", multi2(resultado, valor2));
    multi1(resultado, valor2);
    return 0;
}

void *multi1(int uno, int dos)
{
    resultado = uno * dos;
}

void *multi2(int resultado, int dos)
{
    resultado2 = resultado * dos;
}