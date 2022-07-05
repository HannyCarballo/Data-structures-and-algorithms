#include "Alumno.h"
#include <stdlib.h>

main()
{
	pedirDatos();
	int j;
	printf("Tama%co de objeto Alumno = %d \n", 164, sizeof(Alumno));
	Alumno *din1, *din2, *din3;
	din1 = malloc(5 * sizeof(Alumno));
	din2 = calloc(5, sizeof(Alumno));

	printf("Primer apuntador: \n");
	for (j = 0; j < 5; j++)
	{
		printf("Direccion[%d]=%d \n", j, din1 + j);
	}
	printf("\n");

	printf("Segundo apuntador \n");
	for (j = 0; j < 5; j++)
	{
		printf("Direccion[%d]=%d \n", j, din2 + j);
	}
	printf("\n");

	printf("Con realloc: \n");
	din3 = realloc(din2, 10);
	for (j = 0; j < 10; j++)
	{
		printf("&din3[%d]=%d \n", j, din3 + j);
	}

	// free(din1);
	// free(din3);
	// Liberando memoria con realloc 
	din1 = realloc(din1, 0);
	din3 = realloc(din3, 0);

	system("PAUSE");
}