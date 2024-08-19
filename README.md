# funcionesMenuFibonacciFactorial
Estructura General del Programa
El programa tiene un menú que permite al usuario elegir entre varias opciones:

Calcular el factorial de un número ingresado por el usuario.
Generar una serie de Fibonacci hasta un número ingresado por el usuario.
Generar una serie de Fibonacci (pidiendo el número dentro de la función).
Calcular el factorial de un número (pidiendo el número dentro de la función).
Salir del programa.
El programa está compuesto por varias funciones, cada una con su propósito. Las funciones principales son:

menu(): Muestra las opciones al usuario y devuelve la opción seleccionada.
factorial(int num): Calcula el factorial de un número ingresado por el usuario.
fibonacci(int num): Genera una serie de Fibonacci hasta un número dado.
factorial1(): Calcula el factorial de un número pidiéndoselo al usuario directamente dentro de la función.
fibonacci1(): Genera una serie de Fibonacci pidiendo el número dentro de la función.
Recorrido del Programa
1. Función menu()
Propósito: Mostrar las opciones disponibles al usuario y devolver la opción seleccionada.
Flujo:
Limpia la pantalla (system("cls")).
Muestra el menú.
Espera a que el usuario ingrese una opción y la devuelve al main.
2. Función factorial(int num)
Propósito: Calcular el factorial de un número dado como argumento.
Flujo:
Toma un número entero como argumento (num).
Inicializa una variable fact en 1.
Recorre un bucle for desde 1 hasta num.
En cada iteración, multiplica fact por el valor actual del bucle (i).
Al final del bucle, fact contiene el factorial del número, y se devuelve ese valor.
3. Función fibonacci(int num)
Propósito: Generar y mostrar una serie de Fibonacci hasta un número de términos especificado.
Flujo:
Toma un número entero como argumento (num), que indica cuántos términos de la serie se deben generar.
Inicializa dos variables (num1 y num2) en 1, que representan los dos primeros números de la serie.
Muestra los dos primeros números.
Recorre un bucle for desde 1 hasta num.
En cada iteración, calcula el siguiente número en la serie sumando num1 y num2.
Muestra el resultado y actualiza num1 y num2 para continuar con la siguiente iteración.
4. Función factorial1()
Propósito: Similar a factorial(int num), pero en lugar de recibir el número como argumento, lo solicita dentro de la función.
Flujo:
Solicita al usuario un número para calcular el factorial.
Realiza el cálculo de la misma manera que en factorial(int num) y devuelve el resultado.
5. Función fibonacci1()
Propósito: Similar a fibonacci(int num), pero en lugar de recibir el número como argumento, lo solicita dentro de la función.
Flujo:
Solicita al usuario un número hasta donde se generará la serie de Fibonacci.
Genera y muestra la serie de Fibonacci de la misma manera que en fibonacci(int num).
Ejecución General
Inicio del Programa:

Se ejecuta main() y se inicializa op en 0.
El programa entra en un bucle do-while que se repetirá hasta que op sea igual a 5.
Ejecución de menu():

Se llama a la función menu() para mostrar el menú y obtener la opción seleccionada.
Según la opción elegida, el programa entra en el switch y ejecuta el bloque de código correspondiente.
Ejecución de la Función Seleccionada:

Dependiendo de la opción, el programa llama a la función correspondiente (factorial, fibonacci, etc.).
Si es la opción 5, el bucle se rompe y el programa termina.
Ejemplo de Recorrido
Si el usuario selecciona la opción 1 (calcular el factorial de un número):

Se llama a factorial(int num) dentro del switch y se solicita al usuario que ingrese un número.
El programa calcula el factorial de ese número y muestra el resultado.
Este proceso se repite para cada opción del menú hasta que el usuario decide salir.
