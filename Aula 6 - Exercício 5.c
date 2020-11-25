/*
	Nome:Aula 6 - Switch
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 06/04/2020 - 21:17
	Description: Exercício 5 - Meses do Ano
*/


#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int mes;
	
	printf("Digite o number de um month do ano: ");
	scanf("%d", &mes);
	if ((mes <= 12) && (mes >= 1)){
		switch (mes)
		{
			case 2:  
			printf("Tem 28 ou 29 dias");
			break;

			case 4:
			case 6:
			case 9:
			case 11:
			printf ("Tem 30 dias");
			break;

			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			printf("Tem 31 dias");
			break;
		}
	}
}		
