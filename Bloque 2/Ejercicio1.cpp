//1. Escribe la siguiente expresión como expresión en C++: (a/b) + 1

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double a, b, resultado;

    // Lectura de los valores de a y b
    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;

    // Cálculo de la expresión (a/b) + 1 (Y descrita también)
    resultado = (a / b) + 1;

    // Mostrar el resultado
    cout << "El resultado de la expresión (a/b) + 1 es: " << resultado << endl;

    return 0;
}
