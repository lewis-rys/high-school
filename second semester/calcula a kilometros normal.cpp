#include <iostream>
using namespace std;
int main ()
{
	int impresoras, opcion, x, y, a, b, c;
	cout<<"Bienvenido a Pinta facil Ingrese los datos a continuacion"<< endl;
	cout<<"seleccione su forma de pago"<< endl;
		cout<<"seleccione 1  para efectivo"<< endl;
			cout<<"seleccione 2 para TC/TD"<< endl;
				cout<<"Seleccione 3 para vale de regalo"<< endl;
				cin >> opcion;
					cout<<"ingrese cantidad de impresoras"<< endl;
				     cin >> impresoras;
	switch (opcion)
	{
	case 1:
		    cout<<"Detalles de pago"<< endl;
			cout<<"forma de pago en efectivo"  << endl;
			cout<<"cantidad de impresoras compradas   "  <<impresoras<< endl;
			cout<<"precio unitario es de 3500 pesos"   << endl;
			x= impresoras*3500;
			cout<<"Precio sin descuento  "<<x<< endl;
			y= x*0.10;
			cout<<"descuento  "<<y<< endl;
			c= x-y;
			cout<<"ptrcio con descuento"<<c<< endl;
			b= x*0.16;
			cout<<"iva es de  "<<b<< endl;
			a= (x-y)+b;
			cout<<"Total a pagar  "<<a<< endl;
			cout<<"fin del detalle de pago"<< endl;
			break;
		
			
			case 2:
		    cout<<"Detalles de pago"<< endl;
		    cout<<"forma de pago en TC/DC"<< endl;
			cout<<"precio unitario es de 3500 pesos"<< endl;
			cout<<"cantidad de impresoras compradas  "<<impresoras<< endl;
			x= impresoras*3500;
			cout<<"Precio sin descuento  "<<x<< endl;
			y= x*0.05;
			cout<<"descuento  "<<y<< endl;
			c= x-y;
			cout<<"ptrcio con descuento"<<c<< endl;
			b= x*0.16;
			cout<<"iva es de  "<<b<< endl;
			a= (x-y)+b;
			cout<<"Total a pagar "<<a<< endl;
				b= a*0.16;
			cout<<"iva es de  "<<b<< endl;
			cout<<"fin del detalle de pago"<< endl;
			break;
			
			
			case 3:
		    cout<<"Detalles de pago"<< endl;
			cout<<"forma de pago en vale de regalo"<< endl;
			cout<<"precio unitario es de 3500 pesos"<< endl;
			cout<<"cantidad de impresoras compradas  "<<impresoras<< endl;
			x= impresoras*3500;
			cout<<"Precio sin descuento  "<<x<< endl;
			y= x*0.15;
			cout<<"descuento"  <<y<< endl;
			c= x-y;
			cout<<"ptrcio con descuento"<<c<< endl;
			b= x*0.16;
			cout<<"iva es de  "<<b<< endl;
			a= (x-y)+b;
			cout<<"Total a pagar  "<<a<< endl;
			cout<<"fin del detalle de pago"<< endl;
			break;
			
			default:
            cout<<"error limitese a solo numeros"<< endl;
            break;
        }
		return 0;		
}
