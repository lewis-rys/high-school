#include <iostream>
using namespace std;
int main ()
{   
	float acumulador = 0, n, a;
    int contador=0;
    cout<<"ingrese cantidad de numeros"<< endl;
    cin>> n;
	while (contador<n)
	{
		cout<<"ingrese numero"<< endl;
		cin>> a;
	   acumulador=acumulador+a;
	   contador=(contador+1);
	}
	 cout<<"resultado "<<acumulador<< endl;
	return 0;
}
