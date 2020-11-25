/*
	Nome:Aula 6 - Switch
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 06/04/2020 - 21:17
	Description: Exercício 4 - Data Juliana e Resto
*/


#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int dtJuliana, dia, mes, ano, resto; //Pega cinco variáveis
	
	printf("Digite o dia: ");
	scanf("%d", &dia);
	printf("Digite o month: ");
	scanf("%d", &mes);
	printf("Digite o ano: ");
	scanf("%d", &ano); //Pede que o usuário forneça as variáveis as always, e as faça ser digitadas também
	dtJuliana = (1461*(ano + 4800 +(mes - 14)/12))/4+ (367 * (mes-2-12*((mes - 14)/12)))/12 - (3*((ano+4900+(mes - 14)/12)/100))/4 + dia - 32075;
	resto = dtJuliana%7; //faz a conta da fórmula da Data Juliana, depois tenta pegar o resto dessa mesma Data dividido por 7
	switch(resto) //o switch vai usar como objeto de comparação a variável resto
	{
		case 0: //se caso o número da variável resto deu 0...
		printf("Is Segunda-Feira");
		break;

		case 1: //se caso o número da variável resto deu 1...
		printf("Is Terca-Feira");
		break;
		
		case 2: //se caso o número da variável resto deu 2...
		printf("Is Quarta-Feira");
		break;

		case 3: //se caso o número da variável resto deu 3...
		printf("Is Quinta-Feira");
		break;

		case 4: //se caso o número da variável resto deu 4...
		printf("Is Sexta-Feira");
		break;

		case 5: //se caso o número da variável resto deu 5...
		printf("Is Sabado");
		break;
		
		case 6: //se caso o número da variável resto deu 6...
		printf("Is Domingo");
		break;
	}
	getch();
		
	
}
