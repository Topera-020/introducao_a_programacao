#include <iostream>
#include<cstdlib>
using namespace std;


int main() {
    int n, m;
    
    cin>>n>>m;
    int v [n][m];
    
    cout<<m<<n;
    
    for (int i=0; i<=m;i++)
		{for (int j=0; j<=n;j++)
			{cin>>v[i][j];}}
			
    cout<<v[1][1];
    
    
    
    printf("\n");
    free(v);
    return 0;
}
