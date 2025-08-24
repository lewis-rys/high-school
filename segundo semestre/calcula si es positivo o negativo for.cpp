#include <iostream>
using namespace std;
int main()
{
    int a;
    int n;
    cout << "Ingrese la cantidad de números a evaluar: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Ingrese el número " << i << ": ";
        cin >> a;

        if (a > 0)
            cout << "El número " << a << " es positivo." << endl;
        else if (a < 0)
            cout << "El número " << a << " es negativo." << endl;
        else
            cout << "El número ingresado es cero." << endl;
    }
    return 0;
}
