#include <iostream>
#include<cstdlib>
using namespace std;


int transposta (int  *a, int n)
{
	cout<<a<<endl;
	
	
	for (int i=0; i<n;i++)
	{cout<<"\t"<<a[i]<<endl;}
	
	
}


int main ()
{
	int a [5];
	int n = *(&a + 1) - a;
	
	for (int i=0; i<n;i++)
	{cin>>a[i];}
	
	cout<<endl;
	
	for (int i=0; i<n;i++)
	{cout<<a[i]<<endl;}
	
	cout<<endl;
	
	cout<<a<<endl;
	transposta(a, n);
	
	system("pause");
	return 0;
	
}
