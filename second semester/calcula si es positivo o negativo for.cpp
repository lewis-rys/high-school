#include <iostream>
using namespace std;
int main()
{
    int a;
    int n;
    cout << "Ingrese la cantidad de n�meros a evaluar: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Ingrese el n�mero " << i << ": ";
        cin >> a;

        if (a > 0)
            cout << "El n�mero " << a << " es positivo." << endl;
        else if (a < 0)
            cout << "El n�mero " << a << " es negativo." << endl;
        else
            cout << "El n�mero ingresado es cero." << endl;
    }
    return 0;
}
