/*9. Cambiar un número entero con el mismo valor pero en romanos.*/

#include <iostream>
using namespace std;

void numeroRomano(int numero) {
    // Arreglos con números romanos y sus correspondientes valores
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    // Convertir a número romano
    for (int i = 0; i < 13; i++) {
        while (numero >= valores[i]) {
            cout << romanos[i];
            numero -= valores[i];
        }
    }
    cout << endl;
}

int main() {
    // Declaración de variable
    int numero;

    // Lectura del número
    cout << "Ingresa un número entero: ";
    cin >> numero;

    // Llamar a la función para mostrar el número en romano
    cout << "El número en romano es: ";
    numeroRomano(numero);

    return 0;
}
