/*8. Escriba un programa que lea de la entrada estándar los dos catetos de un
triángulo rectángulo y escriba en la salida estándar su hipotenusa.*/

#include <iostream>
#include <cmath> // Librería para funciones matemáticas

using namespace std;

int main() {
    // Declaración de variables
    double cateto1, cateto2, hipotenusa;

    // Lectura de los dos catetos
    cout << "Ingresa el valor del primer cateto: ";
    cin >> cateto1;
    cout << "Ingresa el valor del segundo cateto: ";
    cin >> cateto2;

    // Cálculo de la hipotenusa usando el teorema de Pitágoras
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    // Mostrar la hipotenusa
    cout << "La hipotenusa del triángulo es: " << hipotenusa << endl;

    return 0;
}
