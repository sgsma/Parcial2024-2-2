//4. Comprobar si un número digitado por el usuario es positivo o negativo.

#include <iostream>
using namespace std;

int main() {
    // Declaración de variable
    double numero;

    // Lectura del número
    cout << "Ingresa un número: ";
    cin >> numero;

    // Comprobación si es positivo o negativo
    if (numero > 0) {
        cout << "El número " << numero << " es positivo." << endl;
    } else if (numero < 0) {
        cout << "El número " << numero << " es negativo." << endl;
    } else {
        cout << "El número es cero." << endl;
    }

    return 0;
}
