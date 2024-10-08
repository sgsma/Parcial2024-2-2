/*6. Escriba un programa que lea de la entrada estándar un carácter e indique
en la salida estándar si el carácter es una vocal minúscula, es una vocal
mayúscula o no es una vocal.*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variable
    char caracter;

    // Lectura del carácter
    cout << "Ingresa un carácter: ";
    cin >> caracter;

    // Comprobación si es una vocal minúscula, mayúscula o no es una vocal
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
        cout << "El carácter '" << caracter << "' es una vocal minúscula." << endl;
    } else if (caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
        cout << "El carácter '" << caracter << "' es una vocal mayúscula." << endl;
    } else {
        cout << "El carácter '" << caracter << "' no es una vocal." << endl;
    }

    return 0;
}
