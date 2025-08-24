#include <iostream>
using namespace std;
int main()
{
	int opcion;
	cout <<"selecciona una opcion:"<< endl;
	cout <<"enero selecciona 1"<< endl;
	cout <<"febrero selecciona 2"<< endl;
	cout <<"marzo selecciona 3"<< endl;
	cout <<"abril selecciona 4"<< endl;
	cout <<"mayo selecciona 5"<< endl;
	cout <<"junio selecciona 6"<< endl;
	cout <<"julio selecciona 7"<< endl;
	cout <<"agosto selecciona 8"<< endl;
	cout <<"septiembre selecciona 9"<< endl;
	cout <<"octubre selecciona 10"<< endl;
	cout <<"noviembre selecciona 11"<< endl;
	cout <<"diciembre selecciona 12"<< endl;
	cout <<"escribe el numero a continuacion...  :)    ";
	cin >> opcion;
	switch (opcion)
	{
		case 1:
	   cout <<"enero tiene 31 dias"<< endl;
		break;
		case 2:
		cout <<"febrero tiene 29 dias"<< endl;
		break;
		case 3:
		cout <<"marzo tiene 31 dias"<< endl;
		break;
		case 4:
		cout <<"abril tiene 29 dias"<< endl;
		break;
		case 5:
		cout <<"mayo tiene 31 dias"<< endl;
		break;
		case 6:
		cout <<"junio tiene 30 dias"<< endl;
		break;
		case 7:
		cout <<"julio tiene 31 dias"<< endl;
		break;
		case 8:
		cout <<"agosto tiene 30 dias"<< endl;
		break;
		case 9:
		cout <<"septiembre tiene 30 dias"<< endl;
		break;
		case 10:
		cout <<"octubre tiene tiene 31 dias"<< endl;
		break;
		case 11:
		cout <<"noviembre tiene 30 dias"<< endl;
		break;
		case 12:
		cout <<"diciembre tiene 31 dias"<< endl;
		break;
		default: 
		cout <<"mes no encontrado"<< endl;
		break;
		
	}
	return 0;
}

