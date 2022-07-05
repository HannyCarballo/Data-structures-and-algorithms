# Apuntadores
### Objetivo Lab 
Utilizar apuntadores en lenguaje c para acceder a las localidades de memoria tanto de datos primitivos como de arreglo.

### Objetivo Clase
Utilizar apuntadores para modificar valores de variables indirectamente así como para realizar el manejo de arreglos y el paso por referencia en funciones

### Ejercicios

##### Ejercicio 1
Codifica el programa con las correcciones respectivas
<p align="center">
<img width="600" alt="image" src="https://user-images.githubusercontent.com/89166148/177226586-d6039db7-cf59-4dc0-9f72-2938aa3aff1e.png">
</p>

##### Ejercicio 2
Codifica y compila el siguiente programa.
<p align="center">
<img width="600" alt="image" src="https://user-images.githubusercontent.com/89166148/177226588-568f6726-314a-4baa-bce9-784c0c776093.png">
</p>

- Completa el programa para llenar correctamente el arreglo
- Dibuja el arreglo en papel señalando cuáles son los índices del arreglo que se almacenan en las variables a - d. posteriormente agrega impresión de pantalla de dichas variables para validar tu análisis.
<p align="center">
<img width="400" alt="image" src="https://user-images.githubusercontent.com/89166148/177227284-0c41e893-368a-4c75-a340-e36e90f0075e.png">
</p>

-  Utilizando el apuntador y un solo ciclo, recorre el arreglo de tal manera que se modifiquen todos sus valores de la siguiente manera: plano 0, valores múltiplos de 3 (3,6,9,12); plano 1: valores múltiplos de 6 (6,12,18,...), plano 2,valores múltiplos de 7 (7,14,21,28...) plano 3, valores múltiplos de 4 (4,8,12,16)

##### Ejercicio 3.
Escribe un programa en el cual se soliciten al usuario 2 valores(almacenadas en 2 variables) y mediante una función* que no devuelva ningún valor y que utilice paso por referencia, se calcule lo siguiente:
- El producto entre ambos valores
-  El producto del valor obtenido en el inciso a y el segundo valor ingresado
<p>Ejemplo: si el usuario ingresa 8 y 4</p>
<p>a) 8 x 4 = 32</p>
<p>b) 32 x 4 = 128</p>
<p>El resultado de a y b se debe almacenar en las mismas variables donde se almacenaron los datos ingresados por el usuario</p>
<p>*Nota: la función solicitada no debe contener ninguna instrucción “printf” ni ninguna variable auxiliar, ya que el print solo aparecerá en la función principal para mostrar los resultados</p>

##### Ejercicio 4
Escribe un programa que, dado un arreglo bidimensional de 6 x 5 con valores iniciales llenados aleatoriamente, modifique los valores de la siguiente manera
<p>El arreglo se pasará a una primera función donde solamente se modificarán las columnas “pares”, duplicando (multiplicando x 2) los valores originales
<p>Posteriormente habrá una segunda función donde solamente se modificarán las columnas impares multiplicando x 3 los valores originales</p>
<p>El programa deberá mostrar el arreglo original y el arreglo resultante después de pasar por las 2 funciones</p>
