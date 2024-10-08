/*16. Realice un programa que calcule la descomposición en factores primos de
un número entero.
Por ejemplo: 20 = 2*2*5.
*/

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingresa un número entero: ";
    cin >> numero;

    cout << "La descomposición en factores primos de " << numero << " es: ";

    for (int i = 2; i <= numero; i++) {
        while (numero % i == 0) {
            cout << i;
            numero /= i;
            if (numero > 1) {
                cout << "*";
            }
        }
    }

    cout << endl;

    return 0;
}
