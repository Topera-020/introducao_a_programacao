#include <iostream>

using namespace std;

double Y (double x)
{
	return (1 / (1 + x*x));
}


long double integral(int a, int b, int n)  
{
 	double pi, x;
 	pi = 0;
 	x = 0;
	double d = (b-a)/n;
	
	for (float i = 0; i <= n; i++)
	{

		pi += (Y(x))*d/2;
		x+=d;
		pi += (Y(x))*d/2;
	}
	return (pi);
}


int main()
{
	cout<<"Pi = "<<4*integral(0, 1, 10000)<<endl;
	
	system ("PAUSE");
	return(0);	
}
