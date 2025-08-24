#include <iostream>
using namespace std;
int main ()
{
	int x;
	do
	 {
	cout<<"ingrese un numero del 1 al 10"<< endl;
	cin >> x;
     }
	while ((x<1)||(x>1000));
	for (int i=1; i<=1000; i++)
	{
		cout<<x<<"*"<<i<<"="<<x*i<< endl;
	}
	return 0;		
}
