/*3. Realice un programa que calcule y muestre en la salida estándar la suma de
los cuadrados de los 10 primeros enteros mayores que cero.*/

#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    // Calcular la suma de los cuadrados de los 10 primeros enteros
    for (int i = 1; i <= 10; i++) {
        suma += i * i;
    }

    // Mostrar la suma
    cout << "La suma de los cuadrados de los 10 primeros enteros es: " << suma << endl;

    return 0;
}
