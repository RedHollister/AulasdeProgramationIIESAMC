/*
	Nome: PP 1 - Dois Exerc�cios
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 07/03/2020
	Description: Exerc�cio 2 - M�dia dos Pluviom�tricos
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

int main()
{
	float m1, m2, m3, media;
	
	printf("Digite o indice pluviometrico do month 1: ");
	scanf("%f", &m1);
	printf("Digite o indice pluviometrico do month 2: ");
	scanf("%f", &m2);
	printf("Digite o indice pluviometrico do month 3: ");
	scanf("%f", &m3);
	media = (m1 + m2 + m3)/3;
	printf("A media dos indices pluviometricos foi: %.2f", media);
	
	
	
	
}
