/*
	Nome:Aula 7 - While
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 13/04/2020 - 20:10
	Description: Exerc�cio 6 - N�meros em crescente para dar 1220400
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int n;  //pega apenas uma vari�vel
	
	printf("Digite um n�mero qualquer que dever� ir somando 10 em 10 at� chegar ao grande n�mero de 1220400");
	scanf("%d", &n);
	while(n < 1220400) //Enquanto ela for menor que 1220400...
	{
		n= n + 10; //n vai fazer mais 10 at� que chuegue ao grande n�mero
		printf(" Number deu: %d \n", n);
	}
	
	
	
	
	
	
}
