/*
	Name: Aula 5 - Exerc�cios de ELSE-IF
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 09/03/20 20:01
	Description: Exerc�cio 3 - Sal�rio 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
	{
		float sal, vinte, prest; //tr�s vari�veis
		
		printf("Digite o valor de seu salary: "); //Computador pedir� para digitar o sal�rio
		scanf("%f", &sal); //o usu�rio digitar� dentro da vari�vel sal
		printf("Digite o valor da preystation que tu queres: "); //Computador pedir� para digitar a presta��o
		scanf("%f", &prest);//o usu�rio digitar� dentro da vari�vel prest
		vinte = sal * 0.20; //conta para dizer quanto � 20% do sal�rio
		if(prest > vinte) //se a presta��o for maior que o 20%...
		{
			printf("Esse caralho not vai dar not"); //o computador n�o deixar� que isso aconte�a
		}

		
	
	}
