#include <iostream>
using namespace std;
int main()
{
	int cal1, cal2, cal3, resultado;
	cout <<"ingresa calificacion 1"<< endl;
	cin >> cal1;
	cout <<"ingresa calificacion 2"<< endl;
    cin >> cal2;
	cout <<"ingresa calificacion 3"<< endl;
	cin >> cal3;
	resultado= (cal1+cal2+cal3)/3;
	if (resultado>6)
	{
		cout <<"El alumno esta aprobado y su promedio es  "<<resultado<< endl;
	}
	else
	{
	cout <<"El alumno esta no aprovado y su promedio es  "<<resultado<< endl;	
	}
	return 0;
}

