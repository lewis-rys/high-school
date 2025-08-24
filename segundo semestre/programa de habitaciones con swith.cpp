#include<iostream>
using namespace std;
int main()
{
	int opcion;
	cout <<"Seleccciona una habitacion para obtener sus caracteristicas"<< endl;
	cout <<"Habitacion 1 (Escribe 1)"<< endl;
	cout <<"Habitacion2 (Escribe 2)"<< endl;
	cout <<"Habitacion 3 (Escribe 3)"<< endl;
	cout <<"Habitacion 4 (Escribe 4)"<< endl;
	cout <<"Habitacion 5 (Escribe 5)"<< endl;
	cout <<"Esperando que el usuario escribe una opcion..."<< endl;
	cin >> opcion;
	switch (opcion)
	{
		case 1:
			cout <<"La habitacion 1 es color azul, tiene 2 camas y esta en planta numero 1."<< endl;
			break;
			case 2:
				cout <<"La habitacion 2 es color roja, tiene 1 cama y esta en la planta numero 1."<< endl;
				break;
				case 3:
					cout <<"La habitacion 3 es color verde, tiene 3 camas y esta en la planta numero 2."<< endl;
					break;
						case 4:
							cout <<"La habitacion 4 es color rosa, tiene 2 camas y esta en la planta numero 2."<< endl;
							break;
							case 5:
								cout <<"La habitacion 5 es color gris tiene 1 cama y esta en la planta numero 3."<< endl;
								break;
								default:
									cout <<"habitacion no encontrada"<< endl;
									break;
				
	}
	return 0;
}
