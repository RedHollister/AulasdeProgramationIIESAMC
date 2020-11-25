/*
	Nome: Aula 3 - Exercícios de Estrutura SequenciaL
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 02/03/20 20:01
	Description: Exercício 7 - INSS e o salário do funcionário
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

int main ()
{
	float valordh,salbruto, inss, salliquid; //pega os seguintes variáveis em números quebrados
	int horas; //pega as horas em número inteiro sem quebra
	
	printf("Diga quantas horas trabalhou: ");
	scanf("%d", &horas); //pede e então lê as horas e o valor de cada hora
	printf("Diga qual o valor de cada hora trabalhada: ");
	scanf("%f", &valordh);
	salbruto = horas * valordh; //faz o valor de cada hora vezes cada hora trabalhada
	printf("Seu salario bruto is: %.2f", salbruto);
	inss = salbruto * 0.11; //pega desconto de 11% de INSS e depois retira do salário bruto
	salliquid = salbruto - inss;
	printf("\n Seu valor de salario liquido deu %f", salliquid); //mostra o resultado como salário líquido
	
	
	
	
	
}
