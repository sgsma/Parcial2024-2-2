/*12. Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n*/

#include <iostream>
using namespace std;

int main() {
    int n, resultado = 0;

    cout << "Ingresa un número entero positivo: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            resultado -= i; // Restar si es par
        } else {
            resultado += i; // Sumar si es impar
        }
    }

    cout << "El resultado de la expresión es: " << resultado << endl;

    return 0;
}
