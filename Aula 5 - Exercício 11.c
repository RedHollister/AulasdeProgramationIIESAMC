/*
	Nome: Aula 5 - Estrutura IF-ELSE
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 23/03/2020 - 20:22
	Description: Exerc�cio 11 - Profiss�o Requisitos
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int idade, sexo, grau; //Dar� tr�s vari�veis inteiros
	float altura; //dar� uma vari�vel float quebrado
	
	printf("Digite sua idade: " );
	scanf("%d", &idade);
	if (idade < 18 || idade > 29) //se a idade for menor que 18 ou maior que 29...
	{
		printf("Primeiro Requisito not atendido! ");
	}
	else //Se for dentro dos requisitos...
	{
		printf(" \n You tem segundo grau completo? (1 Para Sim e 0 Para Not)"); //Pergunta se a pessoa tem escolaridade
		scanf("%d", &grau);
		if (grau == 0 ) //Se for igual a 0...
		{
			printf("Segundo Requisito not atendido! ");
		}
		else if (grau == 1) //Se for igual a 1...
		{
			printf(" \n You is mulher ou homem? (1 Para Mulher e 0 Para Homem)");
			scanf("%d", &sexo);
			printf(" \n Quantos de altura you tem?");
			scanf("%f", &altura); // altura m�nima pra mulheres : 1,58  e pra homens: 1,65
			if ((sexo == 1 && altura < 1.58) || (sexo == 0 && altura < 1.65)) //Deve-se ver se a pessoa t� na altura correta dependendo do sexo
			{
				printf("\n Altura minima not atingida");
			}
			else if ((sexo == 1 && altura >= 1.58) || (sexo == 0 && altura >= 1.65))
			{
				printf("\n Requisitos minimos atingidos");
			}
			else //Ele deve ter escrevido algo diferente do 0 ou 1
			{
				printf("\n Escreveu errado a parte do Sexo porra");
			}
				
		}
		else //Ele deve ter escrevido algo fora do 0 ou 1
		{
			printf("\n � Caraio � 0 ou 1 Cacete");
		}
	}
	
	
}
