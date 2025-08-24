#include<iostream>
using namespace std;
int main ()
{
	int a, b, c, d;
	cout<<"ingrese sueldo del empleado"<< endl;
	cin >> a;
	b=((a*0.15)+a);
	cout<<"aumento del 15%: "<<b<< endl;
	c=(b-(b*0.001));
	cout<<"descuento por cuota sindical: "<<c<< endl;
	d=(c-(c*0.05));
	cout<<"descuento por ISR"<<d<< endl;
	cout<<"pago fianl"<<d<< endl;
}
