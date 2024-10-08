/*2. Realice un programa que lea de la entrada estándar números hasta que se
introduzca un cero. En ese momento el programa debe terminar y mostrar en la
salida estándar el número de valores mayores que cero leídos.*/

#include <iostream>
using namespace std;

int main() {
    int numero, contador = 0;

    // Leer números hasta que se introduzca un 0
    do {
        cout << "Ingresa un número (0 para terminar): ";
        cin >> numero;
        if (numero > 0) {
            contador++;
        }
    } while (numero != 0);

    // Mostrar la cantidad de valores mayores que 0
    cout << "Se ingresaron " << contador << " números mayores que cero." << endl;

    return 0;
}
