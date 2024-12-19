#include <iostream>
using namespace std;
int main() {
int array[15];
int contadorPares = 0, contadorImpares = 0, contadorCeros = 0;
// Ingresar los valores del array
for(int i = 0; i < 15; i++) {
cout << "Ingrese el valor para la posición " << i + 1 << ": ";
cin >> array[i];
}
// Contar números pares, impares y ceros
for(int i = 0; i < 15; i++) {
if(array[i] == 0) {
contadorCeros++;
} else if(array[i] % 2 == 0) {
contadorPares++;
} else {
contadorImpares++;
}
}
cout << "Cantidad de números pares: " << contadorPares << endl;
cout << "Cantidad de números impares: " << contadorImpares << endl;
cout << "Cantidad de ceros: " << contadorCeros << endl;
return 0;
}
