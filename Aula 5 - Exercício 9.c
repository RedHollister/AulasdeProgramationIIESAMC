/*
	Nome: Aula 5 - Estrutura IF-ELSE
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 23/03/2020 - 20:22
	Description: Exercício 9 - ângulos de um triângulo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	float ang1, ang2, ang3;
	
	printf("digite o angulo 1: "); //pede pro usuário digitar o ângulo 1 do triângulo
	scanf("%f", &ang1); //essa digitação vai pra variável ang1
	printf("digite o angulo 2: "); //pede pro usuário digitar o ângulo 2 do triângulo
	scanf("%f", &ang2); //essa digitação vai pra variável ang2
	printf("digite o angulo 3: "); //pede pro usuário digitar o ângulo 3 do triângulo
	scanf("%f", &ang3); //essa digitação vai pra variável ang3
	if((ang1 == 90 && ang2 != 90 && ang3 != 90) || (ang2 == 90 && ang1 != 90 && ang3 != 90) || (ang3 == 90 && ang1 != 90 && ang2 != 90)) //se APENAS um ângulo for igual a 90...
		{
			printf("Triangulo Retangulo"); //É um triângulo Retângulo
		}
	else if((ang1 > 90 && ang2 <= 90 && ang3 <= 90) || (ang2 > 90 && ang1 <= 90 && ang3 <= 90) || (ang3 > 90 && ang1 <= 90 && ang2 <= 90))	//mas, se APENAS um ângulo for maior que 90...
		{
			printf("Triangulo Obtusangulo"); // É um Obtusângulo
		}
	else //Se todos os lados forem maiores que 90...
		{
			printf("Triangulo Acutangulo"); //É um triângulo Acutângulo
		}
	
	
	
}

