#include <iostream>
using namespace std;

int main() {
    float cali;
    float acumulador = 0;
    int cantidad = 3;

    for (int i = 1; i <= cantidad; i++) {
        cout << "Ingrese la calificacion " << i << ": ";
        cin >> cali;
        acumulador = acumulador + cali;
    }

    float promedio = acumulador / cantidad;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}

