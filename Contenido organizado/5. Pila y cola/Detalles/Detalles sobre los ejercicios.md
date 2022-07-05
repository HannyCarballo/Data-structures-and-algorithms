# Estructuras de Datos Lineales: Pila y Cola

### Objetivo Lab  
Revisarás las definiciones, características, procedimientos y ejemplos de las estructuras lineales pila y cola, con la finalidad de que comprendas sus estructuras y puedas implementarlas.

### Objetivo Clase  
Utilizar las funciones de una pila y de una cola para resolver problemas sencillos y conocer a fondo el funcionamiento de estas estructuras de datos

### Previo
Análisis de las operaciones
- Revisa los archivos que te fueron proporcionados para implementar las estructuras de pila y cola. Realiza un análisis de las funciones que tiene cada uno de ellos. 
- Elabora un programa sencillo para probar las funciones de la pila y cola y se muestren en pantalla las operaciones realizadas (programa1.c)
- Modifica la pila y cola de tal manera que en ellas se tenga un tamaño limitado
- Crea un nuevo programa basado en el anterior (programa2.c) para verificar que tu implementación de tamaño limitado es correcta.

### Ejercicios

##### Ejercicio 1
Elabora un programa, utilizando la biblioteca de la pila, agrega las instrucciones para realizar lo siguiente:
- Crea una pila.
- Agrega las instrucciones para solicitar al usuario 7 valores para la pila
- Utilizando 2 pilas adicionales, escribe las instrucciones necesarias para determinar el mayor de los elementos que ingresó el usuario
<p>NOTA: Para el punto anterior NO puedes utilizar variables para almacenar datos, solamente puedes
utilizar las funciones push, pop, top & isEmpty</p>

##### Ejercicio 2
<p>Elabora un programa en el cual, el usuario ingrese 5 valores enteros que se almacenarán en una pila y con ayuda de una cola (sin usar variables auxiliares) se invierta el orden de los valores de la pila.</p>
<p>Se deberá mostrar el contenido final</p>

##### Ejercicio 3
<p>Crea la estructura Libro, que tendrá como miembros: [titulo, autor, número de páginas y clave]</p>
<p>Elabora un programa en el que, haciendo las modificaciones respectivas a la biblioteca cola, elabores una cola de Libros:</p>
- Se debe solicitar al usuario el número de Libros para leer.
- Una vez que el usuario ingresa el número de libros, el programa deberá solicitar al usuario los datos de cada uno (llenar los valores de las estructuras)
- Cada vez que el usuario termina de ingresar los datos de un libro este ingresa a la cola.
- Cuando el usuario termine de indicar los datos el programa deberá comenzar a “leer” los libros que están en la cola, de la siguiente manera
- Se deberá suponer que cada página se tarda 20 segundos en leer y se deberá calcular el tiempo de lectura en minutos basado en el número de páginas del libro.
- Cuando se extrae de la cola un libro, se verifica el número de páginas y se imprime tanto el nombre del libro como el tiempo aproximado de lectura en minutos.

<p>Ejemplo Libro 1: Nombre: “Rayuela”</p>

<p>Tiempo de impresión: 200 minutos// 600 páginas x 20 seg = 12000 segundos</p>

- Se deberá imprimir el tiempo de lectura de cada libro así como el tiempo total considerando todos los que se encontraban en la cola.