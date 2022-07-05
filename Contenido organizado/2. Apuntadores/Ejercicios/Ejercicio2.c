#include <stdio.h>

int arr1[4][5][2], var, i, j, k;
int *point, *mod1, *mod2, *mod3, *mod4;
void main()
{
    int i;
    point = arr1;
    var = 5;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                arr1[i][j][k] = var;
                var += 5;
            }
        }
    }
    int a = *(point + 3);
    int b = *(point + 12);
    int c = *(point + 27);
    int d = *(point + 37);

    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d\n", c);
    printf("d=%d\n", d);

    // inciso c
    printf("Inciso c. Recorrer el arreglo de tal manera que se modifiquen todos sus valores\n");
    printf("El arreglo quedaria de la siguiente forma\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                mod1 = &arr1[0][0][0];
                *mod1 = 3;
                mod1 = &arr1[0][0][1];
                *mod1 = 6;
                mod1 = &arr1[0][1][0];
                *mod1 = 9;
                mod1 = &arr1[0][1][1];
                *mod1 = 12;
                mod1 = &arr1[0][2][0];
                *mod1 = 15;
                mod1 = &arr1[0][2][1];
                *mod1 = 18;
                mod1 = &arr1[0][3][0];
                *mod1 = 21;
                mod1 = &arr1[0][3][1];
                *mod1 = 24;
                mod1 = &arr1[0][4][0];
                *mod1 = 27;
                mod1 = &arr1[0][4][1];
                *mod1 = 30;

                mod2 = &arr1[1][0][0];
                *mod2 = 6;
                mod2 = &arr1[1][0][1];
                *mod2 = 12;
                mod2 = &arr1[1][1][0];
                *mod2 = 18;
                mod2 = &arr1[1][1][1];
                *mod2 = 24;
                mod2 = &arr1[1][2][0];
                *mod2 = 30;
                mod2 = &arr1[1][2][1];
                *mod2 = 36;
                mod2 = &arr1[1][3][0];
                *mod2 = 42;
                mod2 = &arr1[1][3][1];
                *mod2 = 48;
                mod2 = &arr1[1][4][0];
                *mod2 = 54;
                mod2 = &arr1[1][4][1];
                *mod2 = 60;

                mod3 = &arr1[2][0][0];
                *mod3 = 7;
                mod3 = &arr1[2][0][1];
                *mod3 = 14;
                mod3 = &arr1[2][1][0];
                *mod3 = 21;
                mod3 = &arr1[2][1][1];
                *mod3 = 28;
                mod3 = &arr1[2][2][0];
                *mod3 = 35;
                mod3 = &arr1[2][2][1];
                *mod3 = 42;
                mod3 = &arr1[2][3][0];
                *mod3 = 49;
                mod3 = &arr1[2][3][1];
                *mod3 = 56;
                mod3 = &arr1[2][4][0];
                *mod3 = 63;
                mod3 = &arr1[2][4][1];
                *mod3 = 70;

                mod4 = &arr1[3][0][0];
                *mod4 = 4;
                mod4 = &arr1[3][0][1];
                *mod4 = 8;
                mod4 = &arr1[3][1][0];
                *mod4 = 12;
                mod4 = &arr1[3][1][1];
                *mod4 = 16;
                mod4 = &arr1[3][2][0];
                *mod4 = 20;
                mod4 = &arr1[3][2][1];
                *mod4 = 24;
                mod4 = &arr1[3][3][0];
                *mod4 = 28;
                mod4 = &arr1[3][3][1];
                *mod4 = 32;
                mod4 = &arr1[3][4][0];
                *mod4 = 36;
                mod4 = &arr1[3][4][1];
                *mod4 = 40;

                printf("[%d][%d][%d]=%d\n", i, j, k, arr1[i][j][k]);
            }
        }
    }
}
