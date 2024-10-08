//9. Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    // Leer el valor de n
    cout << "Ingresa un número entero positivo: ";
    cin >> n;

    // Calcular el factorial de n
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Mostrar el resultado
    cout << "El factorial de " << n << " es: " << factorial << endl;

    return 0;
}
