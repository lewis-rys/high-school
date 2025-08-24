#include <iostream>
using namespace std;
int main ()
{
	int a, x;
	double b, d, e, f, g, j, y, z, l, pago;
	cout<<"BIENVENIDO AL ESTADIO RUIZ MARTINEZ"<< endl;
	cout<<"seleccione una seccion del estadio:"<< endl;
	cout<<"Sol general seleccione 1"<< endl;
	cout<<"Sol preferente seleccione 2"<< endl;
	cout<<"Sombra seleccione 3"<< endl;
	cout<<"Trinuna seleccione 4"<< endl;
	cout<<"Palco seleccione 5"<< endl;
	cin >> a;
	cout<<"	Precio de los boletos:"<< endl;
	cout<<"Sol general 3 dolares"<< endl;
	cout<<"Sol preferente 5 dolares"<< endl;
	cout<<"Sombra 8 dolares"<< endl;
	cout<<"Tribuna 15 dolares"<< endl;
	cout<<"Palco 20 dolares"<< endl;
	cout<<""<< endl;
	cout<<"Ingrese cantidad de boletos que decea comprar:"<< endl;
	cin >> b;
	switch (a)
	{
	case 1:
		cout<<"Sol general seleccionado"  << endl;
		cout<<"cantidad de entradas compradas  "<<b<< endl;
		d=b*3;
		cout<<"Precio a pagar sin descuento  "<<d<< endl;
		cout<<""<< endl;
			double y, z, l;
			int x;
		cout<<"Seleccione forma de pago"<< endl;
		cout<<"Efectivo 15% de descuento seleccione 1"<< endl;
		cout<<"Cupon 10% de descuento  seleccione 2"<< endl;
		cout<<"TC/DC 5% de descuento seleccione 3"<< endl;
			cout<<""<< endl;
		cin >> x;
		switch (x)
		{
		case 1:
		 y=d*0.15;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break; 
		 case 2:
		 	y=d*0.10;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break;
		 case 3:
		 y=d*0.05;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break;
		 	default:
		 		cout<<"forma de pago no existente"<< endl;
		 		break;
		 	}
		 		cout<<""<< endl;
		g=d-y;
		cout<<"Pago con descuento  "<<g<< endl;
		 j=g*18;
		cout<<"Precio con descuento en MXN  "<<j<< endl;
		break;
		
		
		case 2:	
		 cout<<"Sol preferente seleccionado"  << endl;
		cout<<"cantidad de entradas compradas  "<<b<< endl;
		d=b*5;
		cout<<"Precio a pagar sin descuento  "<<d<< endl;
			cout<<""<< endl;
		cout<<"Seleccione forma de pago"<< endl;
		cout<<"Efectivo 15% de descuento seleccione 1"<< endl;
		cout<<"Cupon 10% de descuento seleccione 2"<< endl;
		cout<<"TC/DC 5% de descuento seleccione 3"<< endl;
			cout<<""<< endl;
		cin >> x;
		switch (x)
		{
		case 1:
		 y=d*0.15;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break; 
		 case 2:
		 	y=d*0.10;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break;
		 case 3:
		 y=d*0.05;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break;
		 	default:
		 		cout<<"forma de pago no existente"<< endl;
		 		break;
		 	}
		g=d-y;
		cout<<"Pago con descuento  "<<g<< endl;
		 j=g*18;
		cout<<"Precio con descuento en MXN  "<<j<< endl;
		break;
		
		
		case 3:
			cout<<"Sombra seleccionado"  << endl;
		cout<<"cantidad de entradas compradas  "<<b<< endl;
		d=b*8;
		cout<<"Precio a pagar sin descuento  "<<d<< endl;
			cout<<""<< endl;
		cout<<"Seleccione forma de pago"<< endl;
		cout<<"Efectivo 15% de descuento seleccione 1"<< endl;
		cout<<"Cupon 10% de descuento seleccione 2"<< endl;
		cout<<"TC/DC 5% de descuento seleccione 3"<< endl;
			cout<<""<< endl;
		cin >> x;
		switch (x)
		{
		case 1:
		 y=d*0.15;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break; 
		 case 2:
		 	y=d*0.10;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break;
		 case 3:
		 y=d*0.05;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break;
		 	default:
		 		cout<<"forma de pago no existente"<< endl;
		 		break;
		 	}
		g=d-y;
		cout<<"Pago con descuento  "<<g<< endl;
		 j=g*18;
		cout<<"Precio con descuento en MXN  "<<j<< endl;
		break;
		
		
		case 4:
			cout<<"Tribuna seleccionado"  << endl;
		cout<<"cantidad de entradas compradas  "<<b<< endl;
		d=b*15;
		cout<<"Precio a pagar sin descuento  "<<d<< endl;
			cout<<""<< endl;
		cout<<"Seleccione forma de pago"<< endl;
		cout<<"Efectivo 15% de descuento seleccione 1"<< endl;
		cout<<"Cupon 10% de descuento seleccione 2"<< endl;
		cout<<"TC/DC 5% de descuento seleccione 3"<< endl;
			cout<<""<< endl;
		cin >> x;
		switch (x)
		{
		case 1:
		 y=d*0.15;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break; 
		 case 2:
		 	y=d*0.10;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break;
		 case 3:
		 y=d*0.05;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break;
		 	default:
		 		cout<<"forma de pago no existente"<< endl;
		 		break;
		 	}
		g=d-y;
		cout<<"Pago con descuento  "<<g<< endl;
		 j=g*18;
		cout<<"Precio con descuento en MXN  "<<j<< endl;
		break;
		
		
				
		case 5:
			cout<<"Palco seleccionado"  << endl;
		cout<<"cantidad de entradas compradas  "<<b<< endl;
		d=b*20;
		cout<<"Precio a pagar sin descuento  "<<d<< endl;
			cout<<""<< endl;
		cout<<"Seleccione forma de pago"<< endl;
		cout<<"Efectivo 15% de descuento seleccione 1"<< endl;
		cout<<"Cupon 10% de descuento seleccione 2"<< endl;
		cout<<"TC/DC 5% de descuento seleccione 3"<< endl;
			cout<<""<< endl;
		cin >> x;
		switch (x)
		{
		case 1:
		 y=d*0.15;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break; 
		 case 2:
		 	y=d*0.10;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break;
		 case 3:
		 y=d*0.05;
		 cout<<"El descuento es de:  "<<y<< endl;
		 break;
		 	default:
		 		cout<<"forma de pago no existente"<< endl;
		 		break;
		 	}
		g=d-y;
		cout<<"Pago con descuento  "<<g<< endl;
		 j=g*18;
		cout<<"Precio con descuento en MXN  "<<j<< endl;
		break;
   }
   return 0;
}
