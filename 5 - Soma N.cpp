#include <iostream>
#include <cstdlib>
using namespace std;

int main (void)
{
	int n;
	float x, y;
	cout<<"Digite o valor de n: ";
	cin>>n;
	for (x=1; n!=0;n--)
	{		
		y += x/n;
		x+=1;
	}
		cout<<y<<endl;
	system ("PAUSE");
	return(0);
}
