#include <iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int a [8];
	int b [8];
	int x, p;
	cout<<"digite o primeiro byte completo dando espaco entre os algarismos:"<<endl;
	cin>>b[0]>>b[1]>>b[2]>>b[3]>>b[4]>>b[5]>>b[6]>>b[7];
	cout<<"digite o segundo byte completo dando espaco entre os algarismos:"<<endl;
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7];
	
	for (int i = 0; i < 8; i++)
	{
		cout<<(a[i]==b[i] and a[i]==1);                     
	}
	system("pause");
	return 0;
}
	     
