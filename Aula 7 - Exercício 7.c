/*
	Nome:Aula 7 - While
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 13/04/2020 - 20:10
	Description: Exercício 7 - Números que deverão dar -79
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int n;  //pega apenas uma variável
	
	printf("Digite um number qualquer que devera ir somando ate chegar ao number -79");
	scanf("%d", &n);
	while(n < -79) //Enquanto ela for menor que -79...
	{
		n = n + 1; //Faz mais um até que dê -79
		printf("Number deu: %d \n", n);
	}
	while(n > -79) //Enquanto ela for maior que -79...
	{
		n = n - 1; //Faz menos 1 até que dê -79
		printf("Number deu: %d \n",n);
	}
	
	
	
	
	
	
}
