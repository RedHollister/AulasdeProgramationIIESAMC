/*
	Nome: Aula 3 - Exerc�cios de Estrutura SequenciaL
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 02/03/20 20:01
	Description: Exerc�cio 8 - F�rmulas da Velocidade e Espa�o do MRUV
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

int main ()
{
	int v0, s0, a, deltat, v, s; //pega os seguintes vari�veis em n�meros n�o quebrados

	printf("Diga qual a velocidade inicial : ");
	scanf("%d", &v0); //pede e ent�o l� as horas e o valor de cada hora
	printf("Diga qual o espa�o inicial: ");
	scanf("%d", &s0);
	printf("Diga a acelera�ao: ");
	scanf("%d", &a);
	printf("Diga a diferen�a de tempo ocorrida: ");
	scanf("%d", &deltat);
	v = v0 + (a * deltat); //faz o valor de cada hora vezes cada hora trabalhada
	printf("Sua velocidade final is: %d", v);
	s = s0 + (v0 * deltat) + (a * (deltat*deltat))/2; //pega desconto de 11% de INSS e depois retira do sal�rio brut
	printf("\n Seu espa�o final deu %d", s); //mostra o resultado como sal�rio l�quido
	
	
}
