/*
	Name: Aula 5 - Exercícios de ELSE-IF
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 09/03/20 20:01
	Description: Exercício 2 - Dois números inteiros
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int n1, n2, soma; //pega três variáveis
	
	printf("Escreva o number 1: "); //Pede pra escrever um número
	scanf("%d", &n1); //Usuário escreve tal número
	printf("Escreva o number 2: "); //Pede pra escrever um número
	scanf("%d", &n2); //Usuário escreve tal número
	soma = n1 + n2; //faz a soma dos dois números
		if(soma > 10) //se o resultado for maior que 10...
		{
			printf("O resultado da soma foi %d", soma ); //Mostra quanto foi o resultado que ficou na variável soma
		}
	
}	
