/*6. Escriba un programa que lea las tres notas de un alumno y calcule la
nota final media de dicho alumno*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double nota1, nota2, nota3, promedio;

    // Lectura de las tres notas
    cout << "Ingresa la primera nota: ";
    cin >> nota1;
    cout << "Ingresa la segunda nota: ";
    cin >> nota2;
    cout << "Ingresa la tercera nota: ";
    cin >> nota3;

    // Cálculo del promedio
    promedio = (nota1 + nota2 + nota3) / 3;

    // Mostrar el promedio
    cout << "La nota final media es: " << promedio << endl;

    return 0;
}
