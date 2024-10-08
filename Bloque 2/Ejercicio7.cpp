/*7. La calificación final de un estudiante es el promedio de tres notas:
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un
60% y la nota de participación que cuenta el 10% restante. Escriba un programa
que lea las tres notas del alumno y escriba su nota final.*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double notaPracticas, notaTeorica, notaParticipacion, notaFinal;

    // Lectura de las tres notas
    cout << "Ingresa la nota de prácticas (30%): ";
    cin >> notaPracticas;
    cout << "Ingresa la nota teórica (60%): ";
    cin >> notaTeorica;
    cout << "Ingresa la nota de participación (10%): ";
    cin >> notaParticipacion;

    // Cálculo de la nota final ponderada
    notaFinal = (notaPracticas * 0.30) + (notaTeorica * 0.60) + (notaParticipacion * 0.10);

    // Mostrar la nota final
    cout << "La nota final del alumno es: " << notaFinal << endl;

    return 0;
}
