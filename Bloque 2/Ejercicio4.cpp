//4. Escribe la siguiente expresión como expresión en C++: a + (b/(c-d))

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double a, b, c, d, resultado;

    // Lectura de los valores de a, b, c y d
    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;
    cout << "Ingresa el valor de c: ";
    cin >> c;
    cout << "Ingresa el valor de d: ";
    cin >> d;

    // Cálculo de la expresión a + (b/(c-d))
    resultado = a + (b / (c - d));

    // Mostrar el resultado
    cout << "El resultado de la expresión a + (b/(c-d)) es: " << resultado << endl;

    return 0;
}
