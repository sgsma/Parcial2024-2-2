/*12. Hacer un menú que considere las siguientes opciones:
Caso 1: Cubo de un numero
Caso 2: Numero par o impar
Caso 3: salir.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int opcion, numero;

    do {
        // Mostrar menú
        cout << "\nMENU DE OPCIONES" << endl;
        cout << "1. Cubo de un número" << endl;
        cout << "2. Comprobar si un número es par o impar" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un número: ";
                cin >> numero;
                cout << "El cubo de " << numero << " es: " << pow(numero, 3) << endl;
                break;
            case 2:
                cout << "Ingresa un número: ";
                cin >> numero;
                if (numero % 2 == 0) {
                    cout << numero << " es par." << endl;
                } else {
                    cout << numero << " es impar." << endl;
                }
                break;
            case 3:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
        }
    } while (opcion != 3);

    return 0;
}
