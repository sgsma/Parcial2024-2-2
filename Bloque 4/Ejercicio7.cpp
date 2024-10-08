//7. Escriba un programa que calcule el valor de: 1+2+3+...+n

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    // Leer el valor de n
    cout << "Ingresa un número entero positivo: ";
    cin >> n;

    // Calcular la suma de 1+2+3+...+n
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    // Mostrar el resultado
    cout << "La suma de 1+2+3+...+" << n << " es: " << suma << endl;

    return 0;
}
