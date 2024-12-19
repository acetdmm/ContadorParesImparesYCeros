# Contador de Pares, Impares y Ceros en un Array

Este programa en C++ permite ingresar 15 números en un array y luego cuenta cuántos de esos números son pares, impares y cuántos son ceros. El propósito principal de este código es practicar el uso de arrays y las estructuras de control en C++ para clasificar números según su valor.

## Propósito del Código

El programa pide al usuario ingresar 15 números y luego los clasifica en tres categorías:
1. Números pares.
2. Números impares.
3. Números ceros.

## ¿Qué incluye el código?

1. **Declaración del Array**
   - El programa comienza con la declaración de un array de 15 enteros llamado `array` para almacenar los valores ingresados por el usuario.
     ```cpp
     int array[15];
     ```

2. **Contadores de Pares, Impares y Ceros**
   - Se declaran tres variables para llevar el conteo de números pares, impares y ceros:
     ```cpp
     int contadorPares = 0, contadorImpares = 0, contadorCeros = 0;
     ```

3. **Ingreso de Valores**
   - El programa pide al usuario ingresar 15 valores enteros a través de un ciclo `for`:
     ```cpp
     for(int i = 0; i < 15; i++) {
         cout << "Ingrese el valor para la posición " << i + 1 << ": ";
         cin >> array[i];
     }
     ```

4. **Clasificación de los Números**
   - Se utiliza otro ciclo `for` para recorrer el array y clasificar cada número ingresado:
     - Si el número es 0, incrementa el contador de ceros.
     - Si el número es par (divisible por 2), incrementa el contador de números pares.
     - Si el número es impar (no divisible por 2), incrementa el contador de números impares.
     ```cpp
     for(int i = 0; i < 15; i++) {
         if(array[i] == 0) {
             contadorCeros++;
         } else if(array[i] % 2 == 0) {
             contadorPares++;
         } else {
             contadorImpares++;
         }
     }
     ```

5. **Salida del Resultado**
   - Finalmente, el programa imprime la cantidad de números pares, impares y ceros:
     ```cpp
     cout << "Cantidad de números pares: " << contadorPares << endl;
     cout << "Cantidad de números impares: " << contadorImpares << endl;
     cout << "Cantidad de ceros: " << contadorCeros << endl;
     ```

## ¿Cómo usar el programa?

1. **Compilación del Código**
   - Compila el código utilizando un compilador de C++:
     ```bash
     g++ contadorParesImparesYCeros.cpp -o contadorParesImparesYCeros
     ```

2. **Ejecución del Programa**
   - Ejecuta el programa desde la terminal:
     ```bash
     ./contadorParesImparesYCeros
     ```

3. **Interacción con el Usuario**
   - El programa pedirá que ingreses 15 números, uno por uno. Luego de ingresar todos los números, el programa mostrará cuántos de ellos son pares, cuántos son impares y cuántos son ceros.

   Ejemplo de ejecución:
   ```plaintext
   Ingrese el valor para la posición 1: 10
   Ingrese el valor para la posición 2: 25
   Ingrese el valor para la posición 3: 0
   ...
   Cantidad de números pares: 5
   Cantidad de números impares: 9
   Cantidad de ceros: 1
