#include <stdio.h>
void main()
{
    int w = 10, x = 20, y = 30, z = 40, r1, r2, r3; // variables
    int *p1, *p2, *p3, *p4;                         // apuntadores
    p1 = &w;
    p2 = &x;
    p3 = &y;
    p4 = p1;
    r1 = *p1 + *p2;
    r2 = *p3 * *p4;
    r3 = *p2 + *p3;
    printf("Los resultados son: %d, %d y %d", r1, r2, r3);
}