#include <iostream>
using namespace std;
int main ()
{
	int x;
	int y=0;
	int contador1=0;
	int contador2=0;
	int contador3=0;
	cout<<"ingrese los numeros"<< endl;
	cin >> y;
	do
	 {
	cout<<"ingrese los numeros deseados"<< endl;
	cin >> x;
	if (x<=15)
	{
		contador1=(contador1+1);
	}
	else if (x>=50)
	{
		contador2=(contador2+1);
	}
	else if (x<=15 && x>=50)
	{
	    contador3=(contador3+1);
    }
     }
	while (y<100);
	cout<<contador1<< endl;
	cout<<contador2<< endl;
	cout<<contador3<< endl;
	return 0;
}
