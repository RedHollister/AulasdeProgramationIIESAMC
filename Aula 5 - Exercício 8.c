/*
	Nome: Aula 5 - Estrutura IF-ELSE
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 23/03/2020 - 20:22
	Description: Exerc�cio 8 - Tri�ngulo X, Y, Z
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	float X, Y, Z; //pega tr�s vari�veis

	
	printf("digite o comprimento do lado X: "); //pede pro usu�rio digitar o lado X do tri�ngulo
	scanf("%f", &X); //essa digita��o vai pra vari�vel X
	printf("digite o comprimento do lado Y: "); //pede pro usu�rio digitar o lado Y do tri�ngulo
	scanf("%f", &Y); //essa digita��o vai pra vari�vel Y
	printf("digite o comprimento do lado Z: "); //pede pro usu�rio digitar o lado Z do tri�ngulo
	scanf("%f", &Z); //essa digita��o vai pra vari�vel Z
	printf("Not sei fazer o calculo da propriedade \n");
	if(X == Z && X == Y && Y == Z) //se os 3 lados forem iguais...
		{
			printf("Triangulo Equilatero"); //� um tri�ngulo Equil�tero
		}
	else if (X == Z  && Z != Y || Z == Y && X != Y || Y == X && X != Z )	//mas, se apenas dois lados forem iguais...
		{
			printf("Triangulo Isosceles"); // � um tri�ngulo Is�sceles
		}
	else //Se todos os lados forem diferentes...
		{
			printf("Triangulo Escaleno"); //� um tri�ngulo Escaleno
		}

	
}
