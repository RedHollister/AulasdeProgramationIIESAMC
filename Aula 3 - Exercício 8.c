/*
	Nome: Aula 3 - Exercícios de Estrutura SequenciaL
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 02/03/20 20:01
	Description: Exercício 8 - Fórmulas da Velocidade e Espaço do MRUV
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

int main ()
{
	int v0, s0, a, deltat, v, s; //pega os seguintes variáveis em números não quebrados

	printf("Diga qual a velocidade inicial : ");
	scanf("%d", &v0); //pede e então lê as horas e o valor de cada hora
	printf("Diga qual o espaço inicial: ");
	scanf("%d", &s0);
	printf("Diga a aceleraçao: ");
	scanf("%d", &a);
	printf("Diga a diferença de tempo ocorrida: ");
	scanf("%d", &deltat);
	v = v0 + (a * deltat); //faz o valor de cada hora vezes cada hora trabalhada
	printf("Sua velocidade final is: %d", v);
	s = s0 + (v0 * deltat) + (a * (deltat*deltat))/2; //pega desconto de 11% de INSS e depois retira do salário brut
	printf("\n Seu espaço final deu %d", s); //mostra o resultado como salário líquido
	
	
}
