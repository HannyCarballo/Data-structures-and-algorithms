#include <stdio.h>
/*
 Este programa crea un apuntador de tipo carácter.
*/
int main()
{
    char *ap, c;
    c = 'x';
    ap = &c;

    // imprime el carácter de la localidad a la que apunta
    printf("Caracter: %c\n", *ap);
    // imprime el código ASCII de la localidad a la que apunta
    printf("Codigo ASCII: %d\n", *ap);
    // imprime la dirección de memoria de la localidad a la que apunta
    printf("Direccion de memoria: %d\n", ap);

    return 0;
}