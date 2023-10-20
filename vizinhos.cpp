//Prova tópicos de Programação
//Thales Gomes Maurin 
//11175712
//Engenharia mecatrônica EESC-USP

#include <iostream>
#include <cstdlib>
#include "vizinhos.h"
#define LEN 20

using namespace std;

vizinhos::vizinhos(int A [LEN][LEN])
{	
	float soma;
	
	//vamos comecar com dois fors para ler a matriz A;
	for (int i=0; i<LEN; i++)
	{
		for (int j=0; j<LEN; j++)
		{ 
			//para cada célula de A, a funcão soma os valores das celulas vizinhas;
			//(já aplicando o peso da média ponderada);
			//as condicionas são utilizadas para delimitar as bordas da matriz;
			//dessa forma a funçao não usara valores fora da matriz A.
			
			soma = 0;
			
			if (i!=0)
			{	
				if (j!=0)
				{soma+= (0.1)*A[i-1][j-1];}
				
				soma+= (0.15)*A[i-1][j];
				
				if (j!=LEN-1)
				{soma+= (0.1)*A[i-1][j+1];}
			}
			
			if (j!=0)
				{soma+= (0.15)*A[i][j-1];}
				
			if (j!=LEN-1)
				{soma+= (0.15)*A[i][j+1];}
				
			
			if (i!=LEN-1)
			{	
				if (j!=0)
				{soma+= (0.1)*A[i+1][j-1];}
				
				soma+= (0.15)*A[i+1][j];
				
				if (j!=LEN-1)
				{soma+= (0.1)*A[i+1][j+1];}
			}
			
			//a média é atribuída a correspndente célula da matriz B
			
			soma/=8;
			B[i][j]=soma;
		} 
	}
}

float vizinhos::get(int i, int j)
{
	//essa função permite acessar os valores da celula [i][j] da matriz B.
	return B[i][j];
}

//Para usar essa classe:
//crie um objeto da classe "vizinho"
//use uma matriz A[20][20] para isso
//para acessar o valor das células de B, use a função get
//a funcao get(i, j) retorna os valores de B[i][j]
//use laços for junto com  afuncao get para acessar a matriz inteira


