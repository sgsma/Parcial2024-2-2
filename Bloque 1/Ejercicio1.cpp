/*1. Escribe un programa que lea de la entrada estándar dos números y muestre
en la salida estándar su suma, resta, multiplicación y división.*/

#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    double num1, num2;

    // Lectura de los dos números
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;

    // Operaciones aritméticas
    double suma = num1 + num2;
    double resta = num1 - num2;
    double multiplicacion = num1 * num2;
    double division;

    // Manejo de la división por cero
    if (num2 != 0) {
        division = num1 / num2;
    } else {
        cout << "Error: División por cero no es permitida." << endl;
        return 1; // Termina el programa si hay división por cero
    }

    // Mostrar resultados
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicación: " << multiplicacion << endl;
    cout << "División: " << division << endl;

    return 0;
}