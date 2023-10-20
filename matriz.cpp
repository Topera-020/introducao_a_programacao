#include <iostream>
#include<cstdlib>
using namespace std;


int transposta ( int I, int J, int *a)
{
	int *aux;
	for (int i=0; i < I; i++)
		{
			for (int j=0; j < J; j++)
				{
					aux = a;
					a += j*J+i-(J*i+j);
					cout<<*a<<"\t";
					a = aux + 1;
				}
			cout<<endl;
					
		}
}


	
	
	


int main ()
{
	int I, J;
	cout<<"Insira o numero de linhas e de colunas:"<<endl;
	cin>>I>>J;
	
	int a [I][J];
	int n = *(&a + 1) - a;
	
	for (int i=0; i<I; i++)
		{for (int j=0; j<J; j++)
		
			{cout<<"Insira o elemento de posicao "<<1+i <<",  "<<1+j<<endl;
			
			cin>>a[i][j];}}
	
	cout<<endl;
	
	cout<<"A matriz dada foi:"<<endl<<endl;
	for (int i=0; i<I;i++)
		{for (int j=0; j<J;j++)
			{cout<<a[i][j]<<"\t";}
			cout<<endl;}
	
	cout<<endl;
	
	cout<<"Sua transposta e:\n"<<endl;
	
	transposta ( I, J, &a[0][0]);
	
	system("pause");
	return 0;
	
}
