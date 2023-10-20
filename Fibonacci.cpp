#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{
	int n, a, b, i;
	
	cout<<"Digite um numero\n";
	cin>>n;
	a = 1;
	b = 1;
	
	if (n>2){
		for (i=2; i<n; i++){
			b = a+b;
			a = b-a;
					
		}	
	}
	cout<<b<<endl;
	
	system ("PAUSE");
	return (0);
}
