#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	double SX, SY, SX2, SXY;
	float x, y;
	int n;
	cout<<"insira o numero a ser claclulada a raiz:\n";
	cin >> y;
	cout<<"insira o numero de aproximacoes:\n";
	cin >> n;
	
	
	x = y/2;
	if (n>1)
	{
		for (int i=1; i<= n; i++)
			{
				x = (x*x + y)/2/x;
			}
	
	}
	cout<<"\n raiz de "<<y<<" e aproximadamente: "<<x<<endl;
	system ("PAUSE");
	return(0);
}
