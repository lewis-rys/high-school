#include <iostream>
using namespace std;
int main ()
{
	int variable;
	cout <<"ingresa temperatura deseada"<< endl;
	cin >> variable;
	if (variable>=100)
	{
		cout<<"arriba del punto de ebullicion"<< endl;
	}
	else
	{
		cout<<"debajo del punto de ebullicion"<< endl;
	}
	return 0;
}
