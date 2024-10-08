/*9. Realice un programa que calcule el valor que toma la siguiente función para
unos valores dados de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)*/

#include <iostream>
#include <cmath> // Librería para funciones matemáticas

using namespace std;

int main() {
    // Declaración de variables
    double x, y, resultado;

    // Lectura de los valores de x e y
    cout << "Ingresa el valor de x: ";
    cin >> x;
    cout << "Ingresa el valor de y: ";
    cin >> y;

    // Comprobación de que el denominador no sea 0 para evitar división por cero
    if (pow(y, 2) - 1 == 0) {
        cout << "Error: División por cero, el denominador no puede ser 0." << endl;
    } else {
        // Cálculo de la función f(x,y) = sqrt(x) / (pow(y,2)-1)
        resultado = sqrt(x) / (pow(y, 2) - 1);

        // Mostrar el resultado
        cout << "El resultado de la función f(x,y) es: " << resultado << endl;
    }

    return 0;
}
