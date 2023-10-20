#include <stdio.h>

int main (void){
	
	int numero, resultado;
	int fibo (int numero, int i, int j);
	
	
	printf("Digite um numero\n");
	scanf("%i",&numero);
	printf("\n");
	fibo  (numero, 0, 1);
	printf("\n");
	
	return 0;
}

int fibo  (int numero, int i, int j){
	j = j + i;
	i = j - i;
	printf("%i ", j);
	if (j > numero){
		return 0;
	}
	else{ 
		fibo (numero, i, j);
	}
}
	
	
