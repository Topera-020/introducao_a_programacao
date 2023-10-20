#include <iostream>
#include <cstdlib>
using namespace std;

int main (void)
{
	int d, n, pot2;
	cout<<"Insira o numero na base binaria: "<<endl;
	cin>>n;
	d=0;
	pot2=1;
	
	while (n>0){
		d += (n%10)*pot2;
		pot2*=2;
		n=n/10;		
	}
	
	cout<<"Resultado: "<<d<<endl;
		
	system ("PAUSE");
	return(0);
}
