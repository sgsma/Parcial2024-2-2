/*15. Realice un programa que solicite al usuario que piense un número entero
entre el 1 y el 100. El programa debe generar un número aleatorio en ese mismo
rango [1-100], e indicarle al usuario si el número que digitó es menor o mayor
al número aleatorio, hasta que lo adivine. Mostrar el número de intentos.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Inicializar la semilla para generar números aleatorios
    int numero = rand() % 100 + 1; // Número aleatorio entre 1 y 100
    int intento, intentos = 0;

    cout << "Piensa en un número entre 1 y 100 y adivina cuál es el número generado.\n";

    do {
        cout << "Ingresa tu intento: ";
        cin >> intento;
        intentos++;

        if (intento > numero) {
            cout << "El número es menor." << endl;
        } else if (intento < numero) {
            cout << "El número es mayor." << endl;
        }

    } while (intento != numero);

    cout << "¡Correcto! Adivinaste el número en " << intentos << " intentos." << endl;

    return 0;
}
