#include <iostream>
#include <cstdlib>
using namespace std;

int main (void)
{
	int d, n, exp10;
	cout<<"Insira o numero n base decimal: "<<endl;
	cin>>n;
	d=0;
	exp10 = 1;
	
	while (n>0)
	{
		d+=(n%2)*exp10;
		n=n/2;
		exp10*=10;				
	}
	
	cout<<"Resultado: "<<d<<endl;
	
	system ("PAUSE");
	return(0);
}

