/*
	Nome:Aula 7 - While
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 13/04/2020 - 20:10
	Description: Exercício 6 - Números em crescente para dar 1220400
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int n;  //pega apenas uma variável
	
	printf("Digite um número qualquer que deverá ir somando 10 em 10 até chegar ao grande número de 1220400");
	scanf("%d", &n);
	while(n < 1220400) //Enquanto ela for menor que 1220400...
	{
		n= n + 10; //n vai fazer mais 10 até que chuegue ao grande número
		printf(" Number deu: %d \n", n);
	}
	
	
	
	
	
	
}
