/*
	Nome: Aula 3 - Exerc�cios de Estrutura SequenciaL
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 02/03/20 20:01
	Description: Exerc�cio 2 - IMC
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

int main ()
{
	float kg, m, IMC; //pegar as tr�s var�aveis em float e digitar .00
	
	printf("Digite o seu peso em kilos (e use ponto depois mais dois zeros): "); 
	scanf("%f", &kg); //ele pega o kilo e o aloca numa certa �rea da mem�ria
	printf("Digite a sua altura (e use ponto depois mais dois zeros): "); //ele pede para colocar a altura
	scanf("%f", &m);
	IMC = kg/(m * m); //faz a conta do IMC
	printf("Seu IMC deu: %.2f",IMC); //diz quanto foi o IMC, ou resultado

}

