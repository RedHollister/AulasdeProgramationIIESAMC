/*
	Name: Aula 4 - Exerc�cios de Estrutura Condicional
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 09/03/20 20:01
	Description: Exerc�cio 2 - Dois n�meros inteiros
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int n1, n2, soma; //pega tr�s vari�veis
	
	printf("Escreva o number 1: "); //Pede pra escrever um n�mero
	scanf("%d", &n1); //Usu�rio escreve tal n�mero
	printf("Escreva o number 2: "); //Pede pra escrever um n�mero
	scanf("%d", &n2); //Usu�rio escreve tal n�mero
	soma = n1 + n2; //faz a soma dos dois n�meros
		if(soma > 10) //se o resultado for maior que 10...
		{
			printf("O resultado da soma foi %d", soma ); //Mostra quanto foi o resultado que ficou na vari�vel soma
		}
	
}	
