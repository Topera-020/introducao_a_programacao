#include <iostream>

using namespace std;

long double pi(int t)  
{
 	double pi, Y1, Y2, x;
 	pi = 0;
	double d = 0.0000001;
	
	for (int i = 0; i <= 100000000000000; i++)
	{
		Y1 = 1/(1+x*x);
		x += d;
		Y2 = 1/(1+x*x);
		pi += (Y2-Y1)*d/2;
		
		cout<<Y1<<endl;
	}
	
	return (pi);
}

int main()
{
	int n;
	cout<<"Digite o valor do numero de parcelas a serem analizadas:\n";
	cout<<"Pi = "<<pi(n)<<endl;
	
	system ("PAUSE");
	return(0);	
}

