#include <iostream>
#include <cstdlib>
using namespace std;

double soma (int d){
	float i = 1;
	double s = 0;
	while (i<=d){
		s+= (2*i-1)/i;
		//cout<<(2*i-1)<<"/"<<i<<"  "<<s<<endl ;
		i++;
	}
	return(s);
}


int main (void)
{
	int n;
	cout<<"Digite o valor d do denomindaor: ";
	cin>>n;
	cout<<"Resultado: "<<soma(n)<<endl;
	
	system ("PAUSE");
	return(0);	
}
