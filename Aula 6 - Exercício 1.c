/*
	Nome:Aula 6 - Switch
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 06/04/2020 - 21:17
	Description: Exerc�cio 1 - dd/mm/aaaa
*/


#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int dia, mes, ano; //Pega tr�s vari�veis
	
	printf("Digite o dia: ");
	scanf("%d", &dia);
	printf("Digite o month: ");
	scanf("%d", &mes);
	printf("Digite o ano: ");
	scanf("%d", &ano); //Pede que o usu�rio forne�a elas as always, e as fa�a ser digitadas tamb�m
	switch(mes) //o switch vai usar como objeto de compara��o a vari�vel mes
	{
		case 1: //se caso o n�mero da vari�vel mes deu 1...
		printf("%d de Janeiro de %d", dia, ano);
		break;

		case 2: //se caso o n�mero da vari�vel mes deu 2...
		printf("%d de Fevereiro de %d", dia, ano);
		break;
		
		case 3: //se caso o n�mero da vari�vel mes deu 3...
		printf("%d de Mar�o de %d", dia, ano);
		break;

		case 4: //se caso o n�mero da vari�vel mes deu 4...
		printf("%d de Abril de %d", dia, ano);
		break;

		case 5: //se caso o n�mero da vari�vel mes deu 5...
		printf("%d de Maio de %d", dia, ano);
		break;

		case 6: //se caso o n�mero da vari�vel mes deu 6...
		printf("%d de Junho de %d", dia, ano);
		break;
		
		case 7: //se caso o n�mero da vari�vel mes deu 7...
		printf("%d de Julho de %d", dia, ano);
		break;
		
		case 8: //se caso o n�mero da vari�vel mes deu 8...
		printf("%d de Agosto de %d", dia, ano);
		break;
		
		case 9: //se caso o n�mero da vari�vel mes deu 9...
		printf("%d de Setembro de %d", dia, ano);
		break;
		
		case 10: //se caso o n�mero da vari�vel mes deu 10...
		printf("%d de Outubro de %d", dia, ano);
		break;
		
		case 11: //se caso o n�mero da vari�vel mes deu 11...
		printf("%d de Novembro de %d", dia, ano);
		break;
		
		case 12: //se caso o n�mero da vari�vel mes deu 12...
		printf("%d de Dezembro de %d", dia, ano);
		break;

		default:
		printf("Number do month is invalid...");

	}
	getch();
	
	
	
	
	
	
}
