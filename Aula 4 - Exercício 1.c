/*
	Name: Aula 4 - Exerc�cios de Estrutura Condicional
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 09/03/20 20:01
	Description: Exerc�cio 1 - Idade de uma pessoa menor que 18
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int idade, tempo; //pega duas vari�veis

	
	printf("Diga quantos anos you tem: "); //pede pro usu�rio digitar seus anos
	scanf("%d", &idade); //essa digita��o vai pra vari�vel idade
	if( idade < 18) //se o valor da vari�vel for menor que 18...
		{
			tempo = 18 - idade; //ele far� a conta pra ver o quanto resta entre esse 18 e a idade que ficou menor
			printf("Lhe faltam ainda %d anos para completar 18 anos", tempo); //e diz quanto faltou usando o resto/ valor da vari�vel tempo
		}

	
}
