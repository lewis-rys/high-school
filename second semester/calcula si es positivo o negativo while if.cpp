#include <iostream>
using namespace std;
int main ()
{   
	float acumulador, n, num;
	int pos=0;
	int neg=0;
    int contador=0;
    cout<<"ingrese cantidad de numeros"<< endl;
    cin>> n;
	while (contador<n)
	{
		cout<<"ingrese numero"<< endl;
		cin>> num;
		if (num>0)
		{
	   pos=pos+1;
        }
	   else
	   {
	   neg=neg+1;
       }
       contador=contador+1;
	}
	 cout<<"numeros positivos "<<pos<< endl;
	 cout<<"numeros negativos "<<neg<< endl;
	return 0;
}
