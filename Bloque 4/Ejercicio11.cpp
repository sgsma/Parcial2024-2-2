/*11. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n*/

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingresa un número entero positivo: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma += (1 << i); // 1 << i es equivalente a 2^i
    }

    cout << "La suma de potencias de 2 es: " << suma << endl;

    return 0;
}
