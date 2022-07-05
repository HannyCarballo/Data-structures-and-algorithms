/*
 * Previo 2.0 a la práctica 3
 * Creación de un arreglo de estructuras
 */

#include <stdio.h>

void verAlumno();
void crearAlumno();

struct alumno
{
    char *nombre;
    char *apellido;
    int numCuenta;
    float promedio;
    char *asignaturas;
} alumno1, alumno2, alu,alumnoIngresado;
typedef struct alumno alumno;

struct asignatura
{
    char *nombre;
    int clave;
} materias;
typedef struct asignatura asignatura;

int main()
{
    short opcion = 0;
    while (1)
    {
        printf("\nPREVIO 2.0");
        printf("\nHECHO POR: HANNY CARBALLO");
        printf("\n\n");
        printf("Que desea realizar?\n");
        printf("1) Ver los datos del alumno.\n");
        printf("2) Crear un nuevo alumno.\n");
        printf("3) Salir.\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            verAlumno();
            break;

        case 2:
            crearAlumno(alumnoIngresado);
            break;

        case 3:
            return 0;
        default:
            printf("Opción no valida.\n");
        }
    }
    return 0;
}

void verAlumno()
{
    alumno1.nombre = "Juancho";
    alumno1.apellido = "Palacios";
    alumno1.numCuenta = 319236765;
    alumno1.promedio = 9.87;
    alumno1.asignaturas = "matematicas,fisica,historia";

    alumno2.nombre = "Rigoberto";
    alumno2.apellido = "Petrovsky";
    alumno2.numCuenta = 319354672;
    alumno2.promedio = 6.57;
    alumno2.asignaturas = "quimica,biologia,artes";

    printf("Los datos del alumno 1 son:\n");
    printf("Alumno: %s %s\nnum. cuenta %d\npromedio %.2f\nasignaturas %s", alumno1.nombre, alumno1.apellido, alumno1.numCuenta, alumno1.promedio, alumno1.asignaturas);
    printf("\n\n");
    printf("Los datos del alumno 2 son:");
    printf("\nAlumno: %s %s\nnum. cuenta %d\npromedio %.2f\nasignaturas %s", alumno2.nombre, alumno2.apellido, alumno2.numCuenta, alumno2.promedio, alumno2.asignaturas);
    printf("\n\n");
}

void crearAlumno(alumno alumnoIngresado)
{
    printf("Por favor, ingresa los datos del alumno\n");
    printf("\nIngresa el nombre del alumno:\n");
    scanf("%s", &alumnoIngresado.nombre);
    printf("Ingresa su apellido\n");
    scanf("%s", &alumnoIngresado.apellido);
    printf("Ingresa su numero de cuenta\n");
    scanf("%d", &alumnoIngresado.numCuenta);
    printf("Ingresa su promedio\n");
    scanf("%.2f", &alumnoIngresado.promedio);
    printf("Ingresa la materia que lleva el alumno\n");
    scanf("%s", &materias.nombre);
    printf("Ingresa la clave de la materia\n");
    scanf("%d", &materias.clave);
    printf("Los datos del alumno ingresado son:\n");
    printf("Nombre: %s", alumnoIngresado.nombre);
    printf("%s\n", alumnoIngresado.apellido);
    printf("Numero de cuenta: %d", alumnoIngresado.numCuenta);
    printf("Promedio:%.2f", alumnoIngresado.promedio);
    printf("Asignatura y clave: %s, %d", materias.nombre, materias.clave);
}