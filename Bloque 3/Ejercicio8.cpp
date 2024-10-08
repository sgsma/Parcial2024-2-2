/*8. Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad.*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int num1, num2, num3, num4;

    // Lectura de los tres primeros números
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    cout << "Ingresa el tercer número: ";
    cin >> num3;

    // Lectura del cuarto número
    cout << "Ingresa el cuarto número: ";
    cin >> num4;

    // Comprobación de coincidencia
    if (num4 == num1 || num4 == num2 || num4 == num3) {
        cout << "El cuarto número coincide con uno de los anteriores." << endl;
    } else {
        cout << "El cuarto número no coincide con ninguno de los anteriores." << endl;
    }

    return 0;
}
