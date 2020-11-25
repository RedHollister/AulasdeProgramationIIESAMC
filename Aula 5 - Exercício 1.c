/*
	Nome: Aula 5 - Estrutura IF-ELSE
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 23/03/2020 - 20:22
	Description: Exercício 1 - Idade menor que 18 anos
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int idade, tempo; //pega duas variáveis

	
	printf("Diga quantos anos you tem: "); //pede pro usuário digitar seus anos
	scanf("%d", &idade); //essa digitação vai pra variável idade
	if( idade < 18) //se o valor da variável for menor que 18...
		{
			tempo = 18 - idade; //ele fará a conta pra ver o quanto resta entre esse 18 e a idade que ficou menor
			printf("Lhe faltam ainda %d anos para completar 18 anos", tempo); //e diz quanto faltou usando o resto/ valor da variável tempo
		}

	
}
