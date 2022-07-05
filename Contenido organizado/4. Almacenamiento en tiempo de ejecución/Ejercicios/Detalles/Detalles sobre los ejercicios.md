# Almacenamiento en tiempo de ejecución

### Objetivo Lab 
Utilizarás funciones en lenguaje c que permiter reservar y almacenar información de manera dinámica (en tiempo de ejecución).

### Objetivo Clase 
Comprender el uso básico de apuntadores aplicado al almacenamiento en tiempo de ejecución, así como las funciones esenciales para el trabajo de los mismos

### Ejercicios

##### Ejercicio 1
Compila y ejecuta el código “ejercicio1” posteriormente responde las preguntas. 
<p>a. Captura la pantalla con la ejecución del programa y explica de manera detallada, los resultados que se observan.</p>
<p>b. Modifica la asignación inicial de “*ptr” de tal modo que ahora se utilice la función calloc, compila, ejecuta y explica la diferencia con la ejecución previa.</p>
<p>c. Agrega instrucciones para asignar valores en las localidades de memoria reservadas con memoria dinámica. (deberás asignar valores múltiplos de 3 (3,6,9...) Se deberá mostrar en pantalla los valores asignados y la dirección de éstos</p>
<p>d. Agrega instrucciones para utilizar la función realloc para redimensionar “ptr” con un nuevo tamaño de 25 espacios</p>
- Utiliza realloc para asignar el nuevo tamaño en el mismo apuntador ptr
- Utiliza realloc para asignar el nuevo tamaño en el apuntador ptr3
<p>Imprime las direcciones y los valores del apuntador obtenido con realloc</p>
<p>Indica si se conservan los valores que se habían asignado previamente</p>
<p>Finalmente indica si hay diferencias entre asignar realloc al mismo apuntador (ptr) o a uno nuevo (ptr3)</p>

##### Ejercicio 2
Codifica, compila y ejecuta el código “ejercicio2” posteriormente responde las preguntas.
<p>a. Explica los resultados que se muestran en pantalla.</p>
<p>b. ¿Cuál es el tamaño de la estructura Alumno? ¿Cómo se obtiene ese tamaño?</p>
<p>c. Agrega las instrucciones al código para pedir al usuario los datos de los alumnos que se reservan en el programa</p>
<p>d. Explica de qué forma se podría liberar la memoria reservada por la función calloc o malloc sin utilizar la función free, realiza el intento en código e indica tus resultados</p>

##### Ejercicio 3
- Diseña un tipo abstracto de dato llamado Automovil en el cual puedas encapsular elementos
marca, modelo, placas, etc.
- Elabora un programa en el cual se incluya la definición de tu tipo abstracto de dato, y utilizando memoria dinámica crea un “arreglo dinámico de automóviles” en el cual se solicite al usuario en tiempo de ejecución, el tamaño de dicho arreglo.
- Dentro de la función principal del programa, el usuario deberá indicar y llenar el número de autos acorde con el tamaño del arreglo.
- Recuerda que es recomendable el uso de funciones para trabajar con implementaciones de tipo abstracto de datos.
- Realiza las pruebas necesarias ejecutando tu código.