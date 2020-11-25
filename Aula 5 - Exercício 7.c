/*
	Nome: Aula 5 - Estrutura IF-ELSE
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 23/03/2020 - 20:22
	Description: Exercício 7 - IMC
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	float kg, m, IMC; //pega três variáveis

	
	printf("digite seus kilos: "); //pede pro usuário digitar a massa dele em kilos
	scanf("%f", &kg); //essa digitação vai pra variável kilos
	printf("digite sua altura: "); //pede pro usuário digitar a altura dele em metros
	scanf("%f", &m); //essa digitação vai pra variável altura/m
	IMC = kg/(m*m);
	if(IMC < 18.5) //se o valor da variável for maior a 18,5...
		{
			printf("Abaixo do peso normal"); //apenas fala que o número é maior que 20
		}
	else if (IMC >= 18.5 && IMC < 25)	//mas, se for número maior que 18,5 e menor que 25...
		{
			printf("Peso normal"); //apenas fala que o número é iguak que 20
		}
	else if (IMC > 25 && IMC < 30) //mas, se for número maior que 25 e menor que 30...
		{
			printf("Acima do peso normal");
		}
	else
		{
			printf("Obesidade");
		}

	
}
