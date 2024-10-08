//3. Escribe la siguiente expresión como expresión en C++: (a+(b/c))/(d+(e/f))

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double a, b, c, d, e, f, resultado;

    // Lectura de los valores de a, b, c, d, e y f
    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;
    cout << "Ingresa el valor de c: ";
    cin >> c;
    cout << "Ingresa el valor de d: ";
    cin >> d;
    cout << "Ingresa el valor de e: ";
    cin >> e;
    cout << "Ingresa el valor de f: ";
    cin >> f;

    // Cálculo de la expresión (a+(b/c))/(d+(e/f))
    resultado = (a + (b / c)) / (d + (e / f));

    // Mostrar el resultado
    cout << "El resultado de la expresión (a+(b/c))/(d+(e/f)) es: " << resultado << endl;

    return 0;
}
