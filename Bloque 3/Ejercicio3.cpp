/*3. Realice un programa que lea un valor entero y determine si se trata de un
número par o impar.*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variable
    int numero;

    // Lectura del número
    cout << "Ingresa un número entero: ";
    cin >> numero;

    // Determinar si es par o impar
    if (numero % 2 == 0) {
        cout << "El número " << numero << " es par." << endl;
    } else {
        cout << "El número " << numero << " es impar." << endl;
    }

    return 0;
}
