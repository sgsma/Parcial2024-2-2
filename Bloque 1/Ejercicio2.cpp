/*2. Escribir un programa que lea de la entrada estándar el precio de un producto y muestre
en la salida estándar el precio del producto al aplicarle el IVA.*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double precio, precioConIVA;
    const double IVA = 0.19; // IVA del 19%

    // Lectura del precio del producto
    cout << "Ingresa el precio del producto: ";
    cin >> precio;

    // Cálculo del precio con IVA
    precioConIVA = precio + (precio * IVA);

    // Mostrar el precio con IVA
    cout << "El precio del producto con IVA es: " << precioConIVA << endl;

    return 0;
}
