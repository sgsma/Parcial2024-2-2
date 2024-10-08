/*3. Realice un programa que lea de la entrada estándar los siguientes datos de
una persona:

Edad: dato de tipo entero.
Sexo: dato de tipo carácter.
Altura en metros: dato de tipo real.

Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int edad;
    char sexo;
    float altura;

    // Lectura de los datos
    cout << "Ingresa la edad: ";
    cin >> edad;
    
    cout << "Ingresa el sexo (M/F): ";
    cin >> sexo;
    
    cout << "Ingresa la altura en metros: ";
    cin >> altura;

    // Mostrar los datos ingresados
    cout << "\nDatos ingresados:" << endl;
    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << " metros" << endl;

    return 0;
}
