/*10. Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).*/

#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    long long suma = 0;

    cout << "Ingresa un número entero positivo: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma += factorial(i);
    }

    cout << "La suma de factoriales es: " << suma << endl;

    return 0;
}
