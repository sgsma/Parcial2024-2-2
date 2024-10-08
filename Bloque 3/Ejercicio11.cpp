/*11. Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dólares.*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variable
    double saldo = 1000.0, cantidad;
    int opcion;

    // Menú del cajero automático
    do {
        cout << "\nCAJERO AUTOMÁTICO" << endl;
        cout << "1. Depositar dinero" << endl;
        cout << "2. Retirar dinero" << endl;
        cout << "3. Consultar saldo" << endl;
        cout << "4. Salir" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Cantidad a depositar: ";
                cin >> cantidad;
                saldo += cantidad;
                cout << "Depósito exitoso. Saldo actual: $" << saldo << endl;
                break;
            case 2:
                cout << "Cantidad a retirar: ";
                cin >> cantidad;
                if (cantidad <= saldo) {
                    saldo -= cantidad;
                    cout << "Retiro exitoso. Saldo actual: $" << saldo << endl;
                } else {
                    cout << "Saldo insuficiente." << endl;
                }
                break;
            case 3:
                cout << "Saldo actual: $" << saldo << endl;
                break;
            case 4:
                cout << "Gracias por usar el cajero automático." << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
        }
    } while (opcion != 4);

    return 0;
}
