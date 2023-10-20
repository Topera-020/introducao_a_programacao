#include <iostream>
#include <cstdlib>
using namespace std;

double soma (int d){
	double s=0;
	double n=1;
	for (int i=0; i<d; i++){
		n=n*2;
		s += n/(d-i);
		//cout <<n<<" /  "<<d-i<< endl;
	}
	return (s);	
}



int main (void){
	int d;
	cout<<"Digite o valor d do denomindaor: ";
	cin>>d;
	cout<<"Resultado: "<<soma(d)<<endl;
	
	system ("PAUSE");
	return(0);	
}
