/*14. En una clase de 5 alumnos se han realizado tres exámenes y se requiere
determinar el número de:
a) Alumnos que aprobaron todos los exámenes.
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron únicamente el último examen.
*/

#include <iostream>
using namespace std;

int main() {
    int alumnos = 5, examenes = 3;
    int calificaciones[alumnos][examenes];
    int todos_aprobados = 0, al_menos_uno = 0, ultimo_examen_aprobado = 0;

    // Leer las calificaciones de los alumnos
    for (int i = 0; i < alumnos; i++) {
        cout << "Ingresa las calificaciones del alumno " << i + 1 << " (tres exámenes): ";
        for (int j = 0; j < examenes; j++) {
            cin >> calificaciones[i][j];
        }
    }

    // Calcular las estadísticas
    for (int i = 0; i < alumnos; i++) {
        bool aprobo_todos = true;
        bool aprobo_ultimo = calificaciones[i][2] >= 60; // Último examen

        for (int j = 0; j < examenes; j++) {
            if (calificaciones[i][j] < 60) {
                aprobo_todos = false;
            }
        }

        if (aprobo_todos) todos_aprobados++;
        if (aprobo_ultimo) ultimo_examen_aprobado++;
        if (aprobo_todos || aprobo_ultimo) al_menos_uno++;
    }

    // Mostrar resultados
    cout << "Alumnos que aprobaron todos los exámenes: " << todos_aprobados << endl;
    cout << "Alumnos que aprobaron al menos un examen: " << al_menos_uno << endl;
    cout << "Alumnos que aprobaron únicamente el último examen: " << ultimo_examen_aprobado << endl;

    return 0;
}
