#include <iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int a [8][8];
	int b [4][4];
	int c [4][4];
	int d [4][4];
	int e [4][4];
	
	
	for (int i = 0; i < 8; i++)
	{
		   for (int j = 0; j < 8; j++)
	{
		 cout<<"digite o valor de A "<<i<<" "<<j<<endl;
		 cin>> a[i][j] ;                
	}               
	}
	for (int i = 0; i < 8; i++)
	{
		   for (int j = 0; j < 8; j++)
	{
		 cout<< a[i][j]<<"\t";                
	}               
		cout<<endl;
	}
	cout<<endl;
	cout<<"matriz B:"<<endl;
	for (int i = 0; i < 4; i++)
	{
		   for (int j = 0; j < 4; j++)
	{
		 cout<< a[i][j]<<"\t";                
	}               
		cout<<endl;
	}
	cout<<"matriz C:"<<endl;
	for (int i = 4; i < 8; i++)
	{
		   for (int j = 0; j < 4; j++)
	{
		 cout<< a[i][j]<<"\t";                
	}               
		cout<<endl;
	}
	cout<<"matriz D:"<<endl;
	for (int i = 0; i < 4; i++)
	{
		   for (int j = 4; j < 8; j++)
	{
		 cout<< a[i][j]<<"\t";                
	}               
		cout<<endl;
	}
	cout<<"matriz E:"<<endl;
	for (int i = 4; i < 8; i++)
	{
		   for (int j = 4; j < 8; j++)
	{
		 cout<< a[i][j]<<"\t";                
	}               
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
	     
