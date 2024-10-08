//8. Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

//Suma = n^2

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    // Leer el valor de n
    cout << "Ingresa un número entero positivo: ";
    cin >> n;

    // Calcular la suma de los números impares hasta 2n-1
    for (int i = 1; i <= 2*n - 1; i += 2) {
        suma += i;
    }

    // Mostrar el resultado
    cout << "La suma de los números impares hasta " << 2*n-1 << " es: " << suma << endl;

    return 0;
}
