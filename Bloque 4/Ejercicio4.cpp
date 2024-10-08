/*4. Escriba un programa que tome cada 4 horas la temperatura exterior,
leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del día, la temperatura más alta y la más baja.*/

#include <iostream>
using namespace std;

int main() {
    double temperatura, suma = 0, temperaturaMaxima = -1000, temperaturaMinima = 1000;

    // Tomar 6 temperaturas
    for (int i = 1; i <= 6; i++) {
        cout << "Ingresa la temperatura medida en la hora " << i * 4 << ": ";
        cin >> temperatura;
        
        suma += temperatura;

        // Comprobar la temperatura máxima
        if (temperatura > temperaturaMaxima) {
            temperaturaMaxima = temperatura;
        }

        // Comprobar la temperatura mínima
        if (temperatura < temperaturaMinima) {
            temperaturaMinima = temperatura;
        }
    }

    // Calcular la temperatura media
    double temperaturaMedia = suma / 6;

    // Mostrar resultados
    cout << "La temperatura media del día es: " << temperaturaMedia << "°C" << endl;
    cout << "La temperatura más alta es: " << temperaturaMaxima << "°C" << endl;
    cout << "La temperatura más baja es: " << temperaturaMinima << "°C" << endl;

    return 0;
}
