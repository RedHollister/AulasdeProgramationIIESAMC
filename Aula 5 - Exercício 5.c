/*
	Nome: Aula 5 - Estrutura IF-ELSE
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 23/03/2020 - 20:22
	Description: Exerc�cio 5 - Coisas a ver com 20
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int numero; //pega uma vari�vel

	
	printf("Manda o number: "); //pede pro usu�rio digitar o n�mero
	scanf("%d", &numero); //essa digita��o vai pra vari�vel n�mero
	if(numero > 20) //se o valor da vari�vel for maior a 20...
		{
			printf("O number is maior que 20"); //apenas fala que o n�mero � maior que 20
		}
	if (numero == 20)	//mas, se for n�mero igual a 20...
		{
			printf("O number is igual a 20"); //apenas fala que o n�mero � iguak que 20
		}
	if (numero < 20)
		{
			printf("O number is menor que 20");
		}

	
}
