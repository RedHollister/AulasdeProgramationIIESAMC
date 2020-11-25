/*
	Nome: Aula 5 - Estrutura IF-ELSE
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 23/03/2020 - 20:22
	Description: Exercício 5 - Coisas a ver com 20
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int numero; //pega uma variável

	
	printf("Manda o number: "); //pede pro usuário digitar o número
	scanf("%d", &numero); //essa digitação vai pra variável número
	if(numero > 20) //se o valor da variável for maior a 20...
		{
			printf("O number is maior que 20"); //apenas fala que o número é maior que 20
		}
	if (numero == 20)	//mas, se for número igual a 20...
		{
			printf("O number is igual a 20"); //apenas fala que o número é iguak que 20
		}
	if (numero < 20)
		{
			printf("O number is menor que 20");
		}

	
}
