//Prova tópicos de Programação
//Thales Gomes Maurin 
//11175712
//Engenharia mecatrônica EESC-USP

#include <iostream>
#include <cstdlib>
#include "vizinhos.h"
#define LEN 20

using namespace std;

int main (void)
{
	//Criar A
	int A [LEN][LEN];
	for (int i=0; i<LEN; i++)
	{
		for (int j=0; j<LEN; j++)
		{ 
			A[i][j] = 8;
		}
	}
	
	//imprime matriz A
	for (int i=0; i<LEN; i++)
	{
		for (int j=0; j<LEN; j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//Criar B
	vizinhos B(A);
	
	//imprime matriz B
	cout<<"\nImprimindo B\n\n";
	for (int i=0; i<LEN; i++)
	{
		for (int j=0; j<LEN; j++)
		{
			cout<<B.get(i,j)<<" ";
		}
		cout<<endl;
	}
		
	return 0;
}
