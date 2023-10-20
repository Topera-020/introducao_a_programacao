#include <iostream>

using namespace std;

long double pi()  
{
 	long double pi, Y1, Y2, x;
 	pi = 0;
 	x = 0;
	long double d = 0.0000001;
	
	for (int i = 0; i <= 1/d; i++)
	{
		Y1 = 1 / (1 + x*x) ;
		x+=d;
		Y2 = 1 / (1 + x*x) ;
		pi += (Y1 + Y2)*d;
		//cout<<pi<<endl;
	}
	
	return (2*pi);
}

int main()
{
	cout<<"Pi = "<<pi()<<endl;
	
	system ("PAUSE");
	return(0);	
}
