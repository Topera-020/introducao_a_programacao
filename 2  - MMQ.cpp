#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	double SX, SY, SX2, SXY;
	float x, y;
	int n;
	cout<<"insira o numero de pontos a serem adicionados:\n";
	cin >> n;
		
	for (int i=1; i<= n; i++)
	{
		cout<<"insira as coordenadas do ponto "<<i<<endl;	
		cin>>x>>y;
		cout<<endl;
		
		SX+= x;
		SY += y;
		SX2 += x*x;
		SXY += x*y;
	
	}
	
	double a, b;
	a = (n*SXY - SX*SY)/(n*SX2-SX*SX);
	
	b = (SY*SX2-SX*SXY)/(n*SX2-SX*SX);
	cout<<"Os coeficientes da equacao sao: \n a = "	<<a<<"\t b = "<<b<<endl<<endl<<"equacao:\n \t("<< a<<")*x + ("<<b<<")\n\n";
	
	system ("PAUSE");
	return(0);
}
}
