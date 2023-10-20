#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{
	int x, n, exp;
	
	cout<<"Digite o número e seu expoente: ";
	cin>>x>>n;
	
	for (exp=1; n>=1; n--)
	{
		exp=exp*x;	
	}
	
	cout<<"Rsultado: "<<exp<<endl;
	
	system ("PAUSE");
	return (0);
}
