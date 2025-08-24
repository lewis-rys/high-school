#include <iostream>
using namespace std;

int main() {
    int impresoras, opcion;
    float x, y, a;

    cout << "Bienvenido a Pinta Facil. Ingrese los datos a continuacion" << endl;
    cout << "Seleccione su forma de pago:" << endl;
    cout << "1 - Efectivo" << endl;
    cout << "2 - TC/TD" << endl;
    cout << "3 - Vale de regalo" << endl;
    cin >> opcion;

    cout << "Ingrese cantidad de impresoras: ";
    cin >> impresoras;

    x = impresoras * 3900;  // precio sin descuento

    switch (opcion) {
        case 1:
            cout << "\nDetalles de pago" << endl;
            cout << "Forma de pago: Efectivo" << endl;
            cout << "Precio unitario: 3900 pesos" << endl;
            cout << "Cantidad: " << impresoras << endl;
            cout << "Total sin descuento: " << x << endl;
            y = x * 0.10;   // 10%
            cout << "Descuento: " << y << endl;
            a = x - y;
            cout << "Total a pagar: " << a << endl;
            break;

        case 2:
            cout << "\nDetalles de pago" << endl;
            cout << "Forma de pago: TC/TD" << endl;
            cout << "Precio unitario: 3900 pesos" << endl;
            cout << "Cantidad: " << impresoras << endl;
            cout << "Total sin descuento: " << x << endl;
            y = x * 0.05;   // 5%
            cout << "Descuento: " << y << endl;
            a = x - y;
            cout << "Total a pagar: " << a << endl;
            break;

        case 3:
            cout << "\nDetalles de pago" << endl;
            cout << "Forma de pago: Vale de regalo" << endl;
            cout << "Precio unitario: 3900 pesos" << endl;
            cout << "Cantidad: " << impresoras << endl;
            cout << "Total sin descuento: " << x << endl;
            y = x * 0.15;   // 15%
            cout << "Descuento: " << y << endl;
            a = x - y;
            cout << "Total a pagar: " << a << endl;
            break;

        default:
            cout << "Error: Opción no válida." << endl;
            break;
    }

    return 0;
}

