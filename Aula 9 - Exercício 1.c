/*
	Nome:Aula 9 - For - While - Do
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 13/04/2020 - 20:10
	Description: Exercício 1a - Tabuada do 2, indo até o 9, usando for
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int result, a; //uma varíavel

	printf("Tabuada 2 ao 9 (ou 10)\n"); //fala que vai a tabuada do 2 até o 9
	for ( a=1; a <= 10; a++) //para a variável do int de valor 1, enquanto ela for menor ou igual a 10, ela vai adicionando mais 1
	{
		result = 2*a;
		printf("%d \n",result);
	}
	
	printf(" \n Agora usando o while \n");
	while(a <= 10)
	{
		result = 2*a;
		printf("%d \n", result);
		a++;
		
	}
return (0);
	
}

