#include <iostream>
using namespace std;
int main ()
{
	float cali;
	float acumulador= 0;
	for (int i = 1; i <= 3; i++)
	{
	cout<<"ingrese la calificacion: ";
	cin >> cali;
	acumulador= (acumulador + cali / 3);
	cout<<"el promedio es: "<<acumulador<< endl;
    }
	return 0;
}
