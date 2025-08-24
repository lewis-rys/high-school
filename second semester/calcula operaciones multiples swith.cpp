#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d;
	cout<<"Seleccione una opcion"<< endl;
	cout<<""<<endl;
	cout<<"1 suma"<< endl;
	cout<<"2 resta"<< endl;
	cout<<"3 multiplicacion"<< endl;
	cout<<"4 divicion"<< endl;
	cin >> a;
	switch (a)
	{
	    case 1:
	    	cout<<"escriba primer numero"<< endl;
	    	cin >> b;
	    	cout<<"escriba segundo numero"<< endl;
	    	cin >> c;
	    	d= b+c;
	    	cout<< "resultado: "<<d<< endl;
	    	break;
	    	case 2:
	    		cout<<"escriba primer numero"<< endl;
	    	cin >> b;
	    	cout<<"escriba segundo numero"<< endl;
	    	cin >> c;
	    	d= b-c;
	    	cout<< "resultado: "<<d<< endl;
	    	break;
	    	case 3:
	    		cout<<"escriba primer numero"<< endl;
	    	cin >> b;
	    	cout<<"escriba segundo numero"<< endl;
	    	cin >> c;
	    	d= b*c;
	    	cout<< "resultado: "<<d<< endl;
	    	break;
	    	case 4:
	    		cout<<"escriba primer numero"<< endl;
	    	cin >> b;
	    	cout<<"escriba segundo numero"<< endl;
	    	cin >> c;
	    	d= b/c;
	    	cout<< "resultado: "<<d<< endl;
	    	break;
	}
	return 0;
}
