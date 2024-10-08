/*6. Escriba un programa que calcule x^y, donde tanto x como y son enteros
positivos, sin utilizar la función pow.*/

#include <iostream>
using namespace std;

int main() {
    int x, y, resultado = 1;

    // Leer los valores de x e y
    cout << "Ingresa el valor de x: ";
    cin >> x;
    cout << "Ingresa el valor de y: ";
    cin >> y;

    // Calcular x^y
    for (int i = 1; i <= y; i++) {
        resultado *= x;
    }

    // Mostrar el resultado
    cout << x << "^" << y << " = " << resultado << endl;

    return 0;
}
