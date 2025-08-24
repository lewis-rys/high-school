#include<iostream>
using namespace std;
int main ()
{
	int a, b, c;
	double  d, e, f, g, h;
	cout<<"ingrese tipo de vehiculo "<< endl;
	cout<<""<< endl;
	cout<<"Vehiculo particular seleccione 1 "<< endl;
	cout<<"Autobus seleccione 2"<< endl;
	cout<<"Microbus seleccione 3"<< endl;
	cout<<"Motosicleta seleccione 4"<< endl;
	cout<<"Mototaxi seleccione 5"<< endl;
	cout<<"Otros seleccione 6"<< endl;
	cin >> c;
	switch (c)
	{
	case 1:
		cout<<"Vehiculo particular seleccionado"<< endl;
		cout<<"Precio preestablecido en dolares 0.75"<< endl;
		cout<<""<< endl;
		int b;
		cout<<"Seleccione forma de pago"<< endl;
		cout<<""<< endl;
	    cout<<"Efectivo No hay ningun incremento seleccione 1"<< endl;
	    cout<<"TC/DC, costo adicional del 3% seleccione 2"<< endl;
	    cin >> b;
		switch (b)
		{
	    case 1:
	    cout<<"Efectivo, No hay ningun incremento"<< endl;
	    cout<<"Total a pagar en Dolares 0.75"<< endl;
	    cout<<"Total a pagar en mxn  12"<< endl;
	    break;
	    case 2:
	    	cout<<"TC/DC seleccionado, incremento del 3%"<< endl;
	    	f=0.75*0.03;
	    	g=0.75+f;
	    	cout<<"Total a pagar en dolares (con incremento)"<<g<< endl;
	    	h=g*16;
	    	cout<<"precio a pagar en MXN "<<h<< endl;
	    	break;
			}
			break;
			case 2:
				cout<<"Autobus seleccionado"<< endl;
		cout<<"Precio preestablecido en dolares 1.50"<< endl;
		cout<<""<< endl;
		cout<<"Seleccione forma de pago"<< endl;
		cout<<""<< endl;
	    cout<<"Efectivo No hay ningun incremento seleccione 1"<< endl;
	    cout<<"TC/DC, costo adicional del 3% seleccione 2"<< endl;
	    cin >> b;
		switch (b)
		{
	    case 1:
	    cout<<"Efectivo, No hay ningun incremento"<< endl;
	    cout<<"Total a pagar en Dolares 1.50"<< endl;
	    cout<<"Total a pagar en mxn  24"<< endl;
	    break;
	    case 2:
	    	cout<<"TC/DC seleccionado, incremento del 3%"<< endl;
	    	f=1.50*0.03;
	    	g=1.50+f;
	    	cout<<"Total a pagar en dolares (con incremento)"<<g<< endl;
	    	h=g*16;
	    	cout<<"precio a pagar en MXN "<<h<< endl;
	    	break;
		}
		break;
		case 3:
			cout<<"	Microbus seleccionado"<< endl;
		cout<<"Precio preestablecido en dolares 1.25"<< endl;
		cout<<""<< endl;
		cout<<"Seleccione forma de pago"<< endl;
		cout<<""<< endl;
	    cout<<"Efectivo No hay ningun incremento seleccione 1"<< endl;
	    cout<<"TC/DC, costo adicional del 3% seleccione 2"<< endl;
	    cin >> b;
		switch (b)
		{
	    case 1:
	    cout<<"Efectivo, No hay ningun incremento"<< endl;
	    cout<<"Total a pagar en Dolares 1.25"<< endl;
	    cout<<"Total a pagar en mxn  7.5"<< endl;
	    break;
	    case 2:
	    	cout<<"TC/DC seleccionado, incremento del 3%"<< endl;
	    	f=1.25*0.03;
	    	g=1.25+f;
	    	cout<<"Total a pagar en dolares (con incremento)"<<g<< endl;
	    	h=g*16;
	    	cout<<"precio a pagar en MXN "<<h<< endl;
	    	break;	
	}
	break;
	case 4:
		cout<<"Motosicleta seleccionado"<< endl;
		cout<<"Precio preestablecido en dolares 0.25"<< endl;
		cout<<""<< endl;
		cout<<"Seleccione forma de pago"<< endl;
		cout<<""<< endl;
	    cout<<"Efectivo No hay ningun incremento seleccione 1"<< endl;
	    cout<<"TC/DC, costo adicional del 3% seleccione 2"<< endl;
	    cin >> b;
		switch (b)
		{
	    case 1:
	    cout<<"Efectivo, No hay ningun incremento"<< endl;
	    cout<<"Total a pagar en Dolares 0.25"<< endl;
	    cout<<"Total a pagar en mxn  4"<< endl;
	    break;
	    case 2:
	    	cout<<"TC/DC seleccionado, incremento del 3%"<< endl;
	    	f=0.25*0.03;
	    	g=0.25+f;
	    	cout<<"Total a pagar en dolares (con incremento)"<<g<< endl;
	    	h=g*16;
	    	cout<<"precio a pagar en MXN "<<h<< endl;
	    	break;
	}
	break;
	case 5:
	cout<<"Mototaxi seleccionado"<< endl;
		cout<<"Precio preestablecido en dolares 0.50"<< endl;
		cout<<""<< endl;
		cout<<"Seleccione forma de pago"<< endl;
		cout<<""<< endl;
	    cout<<"Efectivo No hay ningun incremento seleccione 1"<< endl;
	    cout<<"TC/DC, costo adicional del 3% seleccione 2"<< endl;
	    cin >> b;
		switch (b)
		{
	    case 1:
	    cout<<"Efectivo, No hay ningun incremento"<< endl;
	    cout<<"Total a pagar en Dolares 0.50"<< endl;
	    cout<<"Total a pagar en mxn  8"<< endl;
	    break;
	    case 2:
	    	cout<<"TC/DC seleccionado, incremento del 3%"<< endl;
	    	f=0.50*0.03;
	    	g=0.50+f;
	    	cout<<"Total a pagar en dolares (con incremento)"<<g<< endl;
	    	h=g*16;
	    	cout<<"precio a pagar en MXN "<<h<< endl;
	    	break;
	    }
		break;	
			case 6:
			cout<<"Otros seleccionado"<< endl;
		cout<<"Precio preestablecido en dolares 3"<< endl;
		cout<<""<< endl;
		cout<<"Seleccione forma de pago"<< endl;
		cout<<""<< endl;
	    cout<<"Efectivo No hay ningun incremento seleccione 1"<< endl;
	    cout<<"TC/DC, costo adicional del 3% seleccione 2"<< endl;
	    cin >> b;
		switch (b)
		{
	    case 1:
	    cout<<"Efectivo, No hay ningun incremento"<< endl;
	    cout<<"Total a pagar en Dolares 3"<< endl;
	    cout<<"Total a pagar en mxn  48"<< endl;
	    break;
	    case 2:
	    	cout<<"TC/DC seleccionado, incremento del 3%"<< endl;
	    	f=3*0.03;
	    	g=3+f;
	    	cout<<"Total a pagar en dolares (con incremento)"<<g<< endl;
	    	h=g*16;
	    	cout<<"precio a pagar en MXN "<<h<< endl;
	    	break;
		}	
	}
		return 0;
}
