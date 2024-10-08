/*1. Escriba un programa que lea dos números y determine cuál de ellos es
el mayor.*/

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

    // Comparación de los dos números
    if (num1 > num2) {
        cout << "El mayor es: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "El mayor es: " << num2 << endl;
    } else {
        cout << "Ambos números son iguales." << endl;
    }

    return 0;
}
