#include <iostream>
using namespace std;
int main ()
{
	int a, b;
	int contador1=0;
	int contador2=0;
	int contador3=0;
	int contadorgeneral=0;
	cout<<"Ingrese la cantidad maxima de numeros"<< endl;
	cin >> b;
	do
	{
		cout<<"Ingrese los numeros deseados"<< endl;
		cin >> a;
		if (a<15)
		{
			contador1=(contador1+1);
		}
		else if (a>50)
		{
			contador2=(contador2+1);
		}
		else if (a>=15 && a<=50)
		{
			contador3=(contador3+1);
		}
		contadorgeneral++;
	}
	while (contadorgeneral < b);
	cout<<"menor a 15: "<<contador1<< endl;
	cout<<"mayor de 50: "<<contador2<< endl;
	cout<<"entre 15 y 50: "<<contador3<< endl;
	return 0;
}
