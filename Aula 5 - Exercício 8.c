/*
	Nome: Aula 5 - Estrutura IF-ELSE
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 23/03/2020 - 20:22
	Description: Exercício 8 - Triângulo X, Y, Z
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	float X, Y, Z; //pega três variáveis

	
	printf("digite o comprimento do lado X: "); //pede pro usuário digitar o lado X do triângulo
	scanf("%f", &X); //essa digitação vai pra variável X
	printf("digite o comprimento do lado Y: "); //pede pro usuário digitar o lado Y do triângulo
	scanf("%f", &Y); //essa digitação vai pra variável Y
	printf("digite o comprimento do lado Z: "); //pede pro usuário digitar o lado Z do triângulo
	scanf("%f", &Z); //essa digitação vai pra variável Z
	printf("Not sei fazer o calculo da propriedade \n");
	if(X == Z && X == Y && Y == Z) //se os 3 lados forem iguais...
		{
			printf("Triangulo Equilatero"); //É um triângulo Equilátero
		}
	else if (X == Z  && Z != Y || Z == Y && X != Y || Y == X && X != Z )	//mas, se apenas dois lados forem iguais...
		{
			printf("Triangulo Isosceles"); // É um triângulo Isósceles
		}
	else //Se todos os lados forem diferentes...
		{
			printf("Triangulo Escaleno"); //É um triângulo Escaleno
		}

	
}
