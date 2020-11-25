/*
	Nome: Aula 5 - Estrutura IF-ELSE
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 23/03/2020 - 20:22
	Description: Exercício 12 - Ano bissexto
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int ano, anopos400, anocomp400, anopos4, anocomp4, anopos100, anocomp100 ; //Ano normal, ano pós conta de divisão e ano pós comparação depois da conta de vezes
	
	printf("Digite o ano seu ai...: ");
	scanf("%d", &ano);
	anopos400 = ano/400;
	anocomp400 = anopos400 * 400;
	anopos4 = ano/4;
	anocomp4 = anopos4 * 4;
	anopos100 = ano/100;
	anocomp100 = anopos100 * 100;
	if (anocomp400 == ano)
	{
		printf("O ano is bissexto");
	}
	else if (anocomp4 == ano && anocomp100 != ano)
	{
		printf("O ano is bissexto");
	}
	else
	{
		printf("O ano not is bissexto");
	}
	

}
