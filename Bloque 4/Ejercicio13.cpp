/*13. Hacer un programa que realice la serie Fibonacci -> 1 1 2 3 5 8 13...n*/

#include <iostream>
using namespace std;

int main() {
    int n, a = 1, b = 1, siguiente;

    cout << "Ingresa el número de términos de la serie Fibonacci: ";
    cin >> n;

    cout << "Serie Fibonacci: " << a << " " << b << " ";

    for (int i = 3; i <= n; i++) {
        siguiente = a + b;
        cout << siguiente << " ";
        a = b;
        b = siguiente;
    }

    cout << endl;

    return 0;
}
