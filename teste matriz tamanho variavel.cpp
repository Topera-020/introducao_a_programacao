#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, m;
    int *v;
    int i, j;
    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &n);
    scanf("%d", &m);
    v = (int *)malloc(n * sizeof(int));
    
    for (i = 0; i < n; ++i) {
    	for (j = 0; j < m; ++j) 
		{
         v[i] = i+j;
    	}
    }
    
    for (i = 0; i < n; ++i) 
	{
    	for (j = 0; j < m; ++j) 
		{
         printf("%d ", v[i]);
    	}
    }
    
    printf("\n");
    free(v);
    return 0;
}
