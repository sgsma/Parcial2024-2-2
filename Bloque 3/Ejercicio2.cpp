/*2. Escriba un programa que lea tres números y determine cuál de ellos es
el mayor.*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double num1, num2, num3;

    // Lectura de los tres números
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    cout << "Ingresa el tercer número: ";
    cin >> num3;

    // Comparación de los tres números para encontrar el mayor
    if (num1 >= num2 && num1 >= num3) {
        cout << "El mayor es: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "El mayor es: " << num2 << endl;
    } else {
        cout << "El mayor es: " << num3 << endl;
    }

    return 0;
}
