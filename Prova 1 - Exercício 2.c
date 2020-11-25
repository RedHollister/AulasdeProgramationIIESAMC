/*
	Nome: Prova P1
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 18/05/2020
	Description: Exercício 2 - Comissário de bordo Requisitos
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int idade, grau, sexo;
	float altura;
	
	printf("Primeiro Requisito, digite sua idade: ");
	scanf("%d", &idade); //pega a idade que é o primeiro requisito da pessoa
	if ((idade > 18) && (idade < 29)) //Se for maior que 18 e menor que 29...
	{
		printf("Tens segundo grau completo?(1 para sim e 0 para not)");
		scanf("%d", &grau);
		if (grau == 1) //Iremos fazer tipo escada, o primeiro já foi feito, agora se o grau foi feito ou não
		{
			printf("Digite seu sexo (1 para mulher e 0 para homem)");
			scanf("%d", &sexo);
			printf("Digite Sua altura");
			scanf("%f", &altura); //Pega a altura e o sexo da pessoa
			if ((altura > 1.58 && sexo == 1) || (altura > 1.65 && sexo == 0)) //Se for mulher e for maior que 1,58 passa, se for homem e for maior que 1,65 passa
				printf("Requisitos atendidos!");
			else printf("Requisito not atingido!");
			
			
		}
		else printf("Requisito not atingido!");
	}
	else printf("Requisito not atingido!");
	
	
}
