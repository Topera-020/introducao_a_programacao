#include <iostream>
#include <cstdlib>
using namespace std;

int main (void)
{
	int n;
	float x, y;
	cout<<"Digite o valor de n: ";
	cin>>n;
	cout<<"Digite as coordenadas: ";
	for (n; n>0;n--)
	{	
		cin>>x>>y;
		
		if (x>=0 and y>=0 and x*x+y*y<=1){
			cout<<"pertence a H"<<endl;		
		}else{
			cout<<"nao pertence a H"<<endl;
		}
	}
	
	system ("PAUSE");
	return(0);
}

