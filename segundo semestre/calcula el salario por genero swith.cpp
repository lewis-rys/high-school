#include <iostream>
using namespace std;
int main()
{
	int genero, edad;
	cout <<"Seleccione su genero"<< endl;
	cout << "Ingrese 1 si es masculino"<<endl;
	cout << "Ingrese 2 si es femenino" << endl;
	cin >> genero;
	cout <<"Ingrese su edad"<< endl;
	cin >> edad;
	switch (genero)
	{
		case 1:
			if (edad>=25)
			{
				cout<<"Su pago es de 700"<< endl;
			}
			else
			{
				cout<<"Su pago es de 1000"<< endl;
			}
			break;
		case 2:
			if (edad>=18)
			{
				cout<<"Su pago es de 800"<< endl;
			}
			else 
			{
				cout<< "Su pago es de 500"<< endl;
			}
			break;
		default:
			cout <<"Error"<< endl;
			break;
	}
	return 0;
}
