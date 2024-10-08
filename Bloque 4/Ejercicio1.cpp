/*1. Realice un programa que solicite de la entrada estándar un entero del 1 al
10 y muestre en la salida estándar su tabla de multiplicar.*/

#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar un número entre 1 y 10
    cout << "Ingresa un número del 1 al 10: ";
    cin >> numero;

    if (numero < 1 || numero > 10) {
        cout << "Número fuera de rango. Debe estar entre 1 y 10." << endl;
        return 1;
    }

    // Mostrar la tabla de multiplicar del número
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
