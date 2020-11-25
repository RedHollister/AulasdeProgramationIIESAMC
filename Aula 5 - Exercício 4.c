/*
	Nome: Aula 5 - Estrutura IF-ELSE
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 23/03/2020 - 20:22
	Description: Exercício 6 - Idade menor que 18 anos, flor da idade e maior idade
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int idade; //pega uma variável

	
	printf("Diga quantos anos you tem: "); //pede pro usuário digitar seus anos
	scanf("%d", &idade); //essa digitação vai pra variável idade
	if( idade < 18) //se o valor da variável for menor que 18...
		{
			printf("You is ainda menor de idade"); //apenas fala que o cara é menor de idade
		}
	else if (18 <= idade < 65)	//mas, se for qualquer valor que não seja maior ou igual que 18...
		{
			printf("You is na flor da idade");
		}
	else 
		{
			printf("You is na melhor idade");
		}

	
}
