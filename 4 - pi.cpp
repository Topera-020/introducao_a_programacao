#include <iostream>

using namespace std;

double pi(int t) 
{
	double pi = 1;
	double p = 1;
	for (int i = 1; i <= t; i++)
	{
		p = 2*i+1;
		p = 1/p;
		//cout<<"p  "<<p<<endl;
		
		if (p >= 0)
		{
			if  ( i%2 == 0 )
				{pi += p;}
			else 
				{pi -= p;}
		}
	}
	
return (4*pi);
}

int main()
{
	int n;
	cout<<"Digite o valor do numero de parcelas a serem analizadas:\n";
	cin>>n;
	cout<<"Pi = "<<pi(n)<<endl;
	
	system ("PAUSE");
	return(0);	
}

