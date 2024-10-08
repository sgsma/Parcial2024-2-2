/*4. Ejecute el programa del ejercicio anterior con entradas erróneas y
observe los resultados. Por ejemplo, introduzca un dato de tipo carácter
cuando se espera un dato de tipo entero.*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int edad;
    char sexo;
    float altura;

    // Lectura de los datos
    cout << "Ingresa la edad (número entero): ";
    cin >> edad;
    
    // Verificación de si la entrada fue errónea
    if (cin.fail()) {
        cout << "Error: Se esperaba un número entero para la edad." << endl;
        return 1;  // Finaliza el programa si hay error
    }

    cout << "Ingresa el sexo (M/F): ";
    cin >> sexo;
    
    cout << "Ingresa la altura en metros (número real): ";
    cin >> altura;

    // Verificación de si la entrada fue errónea
    if (cin.fail()) {
        cout << "Error: Se esperaba un número real para la altura." << endl;
        return 1;  // Finaliza el programa si hay error
    }

    // Mostrar los datos ingresados
    cout << "\nDatos ingresados:" << endl;
    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << " metros" << endl;

    return 0;
}
