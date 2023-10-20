//Prova t�picos de Programa��o
//Thales Gomes Maurin 
//11175712
//Engenharia mecatr�nica EESC-USP

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
			//para cada c�lula de A, a func�o soma os valores das celulas vizinhas;
			//(j� aplicando o peso da m�dia ponderada);
			//as condicionas s�o utilizadas para delimitar as bordas da matriz;
			//dessa forma a fun�ao n�o usara valores fora da matriz A.
			
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
			
			//a m�dia � atribu�da a correspndente c�lula da matriz B
			
			soma/=8;
			B[i][j]=soma;
		} 
	}
}

float vizinhos::get(int i, int j)
{
	//essa fun��o permite acessar os valores da celula [i][j] da matriz B.
	return B[i][j];
}

//Para usar essa classe:
//crie um objeto da classe "vizinho"
//use uma matriz A[20][20] para isso
//para acessar o valor das c�lulas de B, use a fun��o get
//a funcao get(i, j) retorna os valores de B[i][j]
//use la�os for junto com  afuncao get para acessar a matriz inteira


