#include "colaDoble.c"

void main()
{
    short opcion = 0;
    int num;

    printf("\n\tHola, bienvenido\n");
    // printf("Para acceder al men%c de opciones primero debes registrar un autom%cvil\n", 163, 162);

    printf("Nota: Es muy recomendable que si primero elige la opci%cn de registrar autom%cviles\n", 162, 162);
    printf("primero elija la opci%cn 3 o 4 antes que la 2, ya que si elige primero la opci%cn 2\n", 162, 162);
    printf("estar%ca desencolando la cola y cuando elija las opciones 3 o 4 ya no aparecer%c\n", 161, 160);
    printf("registro alguno de los autom%cviles que registr%c", 162, 162);

    while (1)
    {
        printf("\n\n");
        printf("-----MEN%c DE OPCIONES-----\n", 233);
        printf("\nElegir una opci%cn:\n", 162);
        printf("1) Registrar aut%cmovil\n", 162);
        printf("2) Ver los datos registrados\n");
        printf("3) Ver si hay elementos registrados o si se encuentra vac%co el conjunto de autos\n", 161);
        printf("4) Conocer la posici%cn de cada dato registrado\n", 162);
        printf("5) Salir.\n");
        scanf("%d", &opcion);
        printf("\n");
        switch (opcion)
        {
        case 1:
            printf("%cCu%cntos elementos tiene la cola circular doble de autom%cviles?\n", 168, 160, 162);
            scanf("%d", &num);
            fflush(stdin);
            Automovil *apunAuto = (Automovil *)malloc(num * sizeof(Automovil));
            Cola colaAutos = crearCola(num);

            int cont;
            for (cont = 0; cont < num; ++cont)
            {
                // llenando los datos de la estructura automovil
                printf("\nInserte los datos del elemento %d del conjunto.\n", cont);
                printf("Marca del autom%cvil \n", 162);
                fgets(apunAuto[cont].marca, 20, stdin);
                fflush(stdin);
                printf("Modelo del autom%cvil \n", 162);
                fgets(apunAuto[cont].modelo, 20, stdin);
                fflush(stdin);
                printf("Placa del autom%cvil \n", 162);
                fgets(apunAuto[cont].placa, 20, stdin);
                fflush(stdin);
                // ingresa a la cola
                encolarFinal(&colaAutos, apunAuto[cont]);
            }
            free(apunAuto);
            break;

        case 2:
            for (cont = 0; cont < num; cont++)
            {
                // imprimiendo datos de la estructura automovil
                Automovil devueltaCola = desencolarInicio(&colaAutos);
                printf("Datos del autom%cvil %d\n", 162, cont);
                printf("La marca del autom%cvil es: %s", 162, devueltaCola.marca);
                printf("El modelo del autom%cvil es: %s", 162, devueltaCola.modelo);
                printf("La placa del autom%cvil es: %s", 162, devueltaCola.placa);
                printf("\n");
            }
            break;

        case 3:
            printf("\nSi aun no hay autom%cviles registrados se imprimir%c un 1, si ya hay autom%cviles registrados se imprimir%c un 0\n", 162, 160, 162, 160);
            printf("%d\n", isEmpty(colaAutos));
            printf("\n");
            break;

        case 4:
            mostrarValores(colaAutos);
            mostrarIndices(colaAutos);
            break;

        case 5:
            return 0;
        default:
            printf("Opción no v%clida.", 160);
        }
    }
    return 0;
}