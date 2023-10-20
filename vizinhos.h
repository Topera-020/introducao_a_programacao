//Prova tópicos de Programação
//Thales Gomes Maurin 
//11175712
//Engenharia mecatrônica EESC-USP

#include <iostream>
#define LEN 20

using namespace std;

class vizinhos
{
	float B[LEN][LEN];
	
	public:
		
	  	vizinhos(int A [LEN][LEN]);
	  	float get(int i, int j);
	  	
	  	//atraves dos valores de A, inicia a matriz B (Construtor de classe).
};

//Para usar essa classe:
//crie um objeto da classe "vizinho"
//use uma matriz A[20][20] para isso
//para acessar o valor das células de B, use a função get
//a funcao get(i, j) retorna os valores de B[i][j]
//use laços for junto com  afuncao get para acessar a matriz inteira









