/*
	Nome: Aula 3 - Exercícios de Estrutura SequenciaL
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 02/03/20 20:01
	Description: Exercício 2 - IMC
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

int main ()
{
	float kg, m, IMC; //pegar as três varíaveis em float e digitar .00
	
	printf("Digite o seu peso em kilos (e use ponto depois mais dois zeros): "); 
	scanf("%f", &kg); //ele pega o kilo e o aloca numa certa área da memória
	printf("Digite a sua altura (e use ponto depois mais dois zeros): "); //ele pede para colocar a altura
	scanf("%f", &m);
	IMC = kg/(m * m); //faz a conta do IMC
	printf("Seu IMC deu: %.2f",IMC); //diz quanto foi o IMC, ou resultado

}

