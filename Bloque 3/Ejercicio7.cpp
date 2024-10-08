/*7. Escriba un programa que solicite una edad (un entero) e indique en la salida estándar si la edad introducida está en el rango [18-25].*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variable
    int edad;

    // Lectura de la edad
    cout << "Ingresa tu edad: ";
    cin >> edad;

    // Comprobación si la edad está en el rango [18-25]
    if (edad >= 18 && edad <= 25) {
        cout << "La edad está en el rango de 18 a 25 años." << endl;
    } else {
        cout << "La edad no está en el rango de 18 a 25 años." << endl;
    }

    return 0;
}
