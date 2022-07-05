#include <stdio.h>

struct gerente
{
    char *nombre;
    char *apellido;
    float salario;
} g1;
typedef struct gerente gerente;

struct producto
{
    int clave;
    char *nombre;
    char *unidad;
    float precio;
} p;
typedef struct producto producto;

struct seccion
{
    char *empleado;
    int codigo_seccion;
    char *categoria;
    producto producto[10];
} st;
typedef struct seccion seccion;

struct tienda
{
    gerente g1;
    char *nombre;
    int codigo;
    seccion seccion[5];
} t;
typedef struct tienda tienda;

struct empleado
{
    char *nombre;
    char *apellido;
    char *rango;
} e1;
typedef struct empleado empleado;

tienda crearTiendaDepartamental();
seccion crearSeccionTienda();
producto crearProducto();
gerente inicializarGerente();
empleado inicializarEmpleado();
void mostrarTiendasDep();
void mostrarSecciones();
void mostrarProductos();

int main()
{
    printf("\tBIENVENIDX\t\n");
    inicializarGerente();
    //creando tienda departamental
    printf("Ingresa el nombre de la tienda\n");
    scanf("Tienda: %s", &t.nombre, "\n");
    crearTiendaDepartamental(t, t.nombre);
    printf("Ingresa el código de la tienda\n");
    scanf("Codigo de la tienda: %d", &t.codigo, "\n");
    crearTiendaDepartamental(t, t.codigo);
    crearSeccionTienda();
    crearProducto();
    empleado e[5];
    mostrarTiendasDep();
    mostrarSecciones();
    mostrarProductos();
    return 0;
}

gerente inicializarGerente()
{
    g1.nombre = "Ernesto";
    g1.apellido = "Ramirez";
    g1.salario = 100000;
    return (g1);
}

tienda crearTiendaDepartamental()
{
    tienda t;
    gerente g1;
    seccion s1;
}

seccion crearSeccionTienda()
{
    seccion st;
    printf("Ingresa el nombre del empleado");
    scanf("Empleado 1: %s", &st.empleado, "\n");
    printf("Ingresa el codigo de la sección\n");
    scanf("Codigo de la seccion: %d", &st.codigo_seccion, "\n");
    printf("Ingresa la categoria de la seccion\n");
    scanf("Categoria: %s", &st.categoria);
    producto p1;
}

producto crearProducto()
{
    producto p;
    printf("Ingresa la clave del producto\n");
    scanf("Clave: %d", &p.clave);
    printf("Ingresa el nombre del producto\n");
    scanf("Nombre del producto: %s", &p.nombre);
    printf("Ingresa la unidad del producto");
    scanf("Unidad: %s", &p.unidad);
    printf("Ingresa el precio del producto\n");
    scanf("Precio: %f", &p.precio);
}

empleado inicializarEmpleado()
{
    e1.nombre = "Ramon";
    e1.apellido = "Montesori";
    e1.rango = "Intermedio";
}

void mostrarTiendasDep()
{
    gerente inicializarGerente();
    tienda crearTiendaDepartamental();
    seccion crearSeccionTienda();
    printf("\t\tTIENDA\t\t\n");
    printf("Gerente: %s %s,%.2f\n", inicializarGerente(), "\n");
    printf("Tienda: %s", t.nombre);
    printf("Codigo de la tienda: %d", t.codigo);
    printf("Seccion");
}

void mostrarSecciones()
{
    empleado empleado;
    printf("\t\tSECCIONES\t\t\n");
    printf("Empleado: %s %s, rango %s\n", empleado.nombre, empleado.apellido, empleado.rango);
    printf("Codigo de la seccion: %d", &st.codigo_seccion, "\n");
    printf("Categoria: %s", &st.categoria);
    printf("Productos");
}

void mostrarProductos()
{
    printf("\t\t\nPRODUCTOS\t\t\n");
    printf("Clave: %d", &p.clave);
    printf("Nombre del producto: %s", &p.nombre);
    printf("Unidad: %s", &p.unidad);
    printf("Precio: %f", &p.precio);
}