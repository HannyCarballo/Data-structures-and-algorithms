#include <stdio.h>

typedef struct
{
    char calle[20];
    int num;
    char colonia[20];
    int cPostal;
} Direccion;

typedef struct
{
    int numCuenta;
    char nombre[15];
    char apellido[15];
    float promedio;
    Direccion domicilio;
} Alumno;

Alumno crearAlumno(int, char *, char *, float);
Alumno pedirDatos();
void imprimirAlumno(Alumno);

Alumno crearAlumno(int numeroC, char *name, char *lastname, float prom)
{
    Alumno alumnoCreado;
    alumnoCreado.numCuenta = numeroC;
    strcpy(alumnoCreado.nombre, name);
    strcpy(alumnoCreado.apellido, lastname);
    alumnoCreado.promedio = prom;
    return alumnoCreado;
}

Alumno pedirDatos()
{
    Alumno alumnoCreado;
    printf("Ingrese el numero de cuenta del alumno \n");
    scanf("%d", &alumnoCreado.numCuenta);
    printf("Ingrese el nombre del alumno \n");
    scanf("%s", alumnoCreado.nombre);
    printf("Ingrese el apellido del alumno \n");
    scanf("%s", alumnoCreado.apellido);
    printf("Ingrese el promedio del alumno \n");
    scanf("%f", &alumnoCreado.promedio);
    printf("Ahora ingresaras la direccion del alumno\n");
    printf("Ingrese la calle\n");
    scanf("%s", alumnoCreado.domicilio.calle);
    printf("Ingrese el numero de calle\n");
    scanf("%d", &alumnoCreado.domicilio.num);
    printf("Ingrese la colonia\n");
    scanf("%s", alumnoCreado.domicilio.colonia);
    printf("Ingrese el Codigo Postal\n");
    scanf("%d", &alumnoCreado.domicilio.cPostal);
    printf("\n");
    imprimirAlumno(alumnoCreado);
}

void imprimirAlumno(Alumno alumnoCreado)
{
    printf(">>>Datos del alumno<<<\n");
    printf("Numero de cuenta: %d \n", alumnoCreado.numCuenta);
    printf("Nombre: %s \n", alumnoCreado.nombre);
    printf("Apellido: %s \n", alumnoCreado.apellido);
    printf("Promedio: %.2f \n", alumnoCreado.promedio);
    printf("Direccion: calle %s, num %d, colonia %s, C.P %d \n ", alumnoCreado.domicilio.calle, alumnoCreado.domicilio.num, alumnoCreado.domicilio.colonia, alumnoCreado.domicilio.cPostal);
    printf("\n");
}