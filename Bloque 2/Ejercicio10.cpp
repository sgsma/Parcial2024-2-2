/*10. Escriba un programa que calcule las soluciones de una ecuación de
segundo grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que:

(-b + sqrt(pow(b,2) - 4*a*c)) / (2*a) 
y 
(-b - sqrt(pow(b,2) - 4*a*c)) / (2*a)*/

#include <iostream>
#include <cmath> // Librería para funciones matemáticas

using namespace std;

int main() {
    // Declaración de variables
    double a, b, c, discriminante, solucion1, solucion2;

    // Lectura de los coeficientes a, b y c
    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;
    cout << "Ingresa el valor de c: ";
    cin >> c;

    // Cálculo del discriminante
    discriminante = pow(b, 2) - 4 * a * c;

    // Verificación si las soluciones son reales
    if (discriminante < 0) {
        cout << "La ecuación no tiene soluciones reales." << endl;
    } else {
        // Cálculo de las dos soluciones
        solucion1 = (-b + sqrt(discriminante)) / (2 * a);
        solucion2 = (-b - sqrt(discriminante)) / (2 * a);

        // Mostrar las soluciones
        cout << "Las soluciones de la ecuación son:" << endl;
        cout << "Solución 1: " << solucion1 << endl;
        cout << "Solución 2: " << solucion2 << endl;
    }

    return 0;
}
