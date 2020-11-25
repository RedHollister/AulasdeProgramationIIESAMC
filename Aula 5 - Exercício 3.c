/*
	Name: Aula 5 - Exercícios de ELSE-IF
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 09/03/20 20:01
	Description: Exercício 3 - Salário 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
	{
		float sal, vinte, prest; //três variáveis
		
		printf("Digite o valor de seu salary: "); //Computador pedirá para digitar o salário
		scanf("%f", &sal); //o usuário digitará dentro da variável sal
		printf("Digite o valor da preystation que tu queres: "); //Computador pedirá para digitar a prestação
		scanf("%f", &prest);//o usuário digitará dentro da variável prest
		vinte = sal * 0.20; //conta para dizer quanto é 20% do salário
		if(prest > vinte) //se a prestação for maior que o 20%...
		{
			printf("Esse caralho not vai dar not"); //o computador não deixará que isso aconteça
		}

		
	
	}
