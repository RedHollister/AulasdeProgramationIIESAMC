/*
	Nome:Aula 6 - Switch
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 06/04/2020 - 21:17
	Description: Exerc�cio 4 - Data Juliana e Resto
*/


#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int dtJuliana, dia, mes, ano, resto; //Pega cinco vari�veis
	
	printf("Digite o dia: ");
	scanf("%d", &dia);
	printf("Digite o month: ");
	scanf("%d", &mes);
	printf("Digite o ano: ");
	scanf("%d", &ano); //Pede que o usu�rio forne�a as vari�veis as always, e as fa�a ser digitadas tamb�m
	dtJuliana = (1461*(ano + 4800 +(mes - 14)/12))/4+ (367 * (mes-2-12*((mes - 14)/12)))/12 - (3*((ano+4900+(mes - 14)/12)/100))/4 + dia - 32075;
	resto = dtJuliana%7; //faz a conta da f�rmula da Data Juliana, depois tenta pegar o resto dessa mesma Data dividido por 7
	switch(resto) //o switch vai usar como objeto de compara��o a vari�vel resto
	{
		case 0: //se caso o n�mero da vari�vel resto deu 0...
		printf("Is Segunda-Feira");
		break;

		case 1: //se caso o n�mero da vari�vel resto deu 1...
		printf("Is Terca-Feira");
		break;
		
		case 2: //se caso o n�mero da vari�vel resto deu 2...
		printf("Is Quarta-Feira");
		break;

		case 3: //se caso o n�mero da vari�vel resto deu 3...
		printf("Is Quinta-Feira");
		break;

		case 4: //se caso o n�mero da vari�vel resto deu 4...
		printf("Is Sexta-Feira");
		break;

		case 5: //se caso o n�mero da vari�vel resto deu 5...
		printf("Is Sabado");
		break;
		
		case 6: //se caso o n�mero da vari�vel resto deu 6...
		printf("Is Domingo");
		break;
	}
	getch();
		
	
}
