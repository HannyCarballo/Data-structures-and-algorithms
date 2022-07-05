#include <stdio.h>
void modificar_pares();
void modificar_impares();
int i, j, arr[6][5], impar, par;
int main()
{
    int arr[6][5] = {2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53, 56, 59, 62, 65, 68, 71, 74, 77, 80, 83, 86, 89};
    printf("\t\t\tEl arreglo original es:\t\t\t\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d   ", arr[i][j]);
        }
    }
    printf("\t\t\tEl arreglo nuevo es:\t\t\t\n");
    // aquí está el error, arroja que el nuevo arreglo es 0
    printf("%d   ", par, impar, arr[i][j]);
    modificar_pares(par);
    modificar_impares(impar);
    // aquí termina el error
}

void modificar_pares()
{
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                par = arr[i][j] * 2;
            }
        }
    }
}
void modificar_impares()
{
    {
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (arr[i][j] % 2 != 0)
                {
                    impar = arr[i][j] * 3;
                }
            }
        }
    }
}