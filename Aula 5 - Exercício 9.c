/*
	Nome: Aula 5 - Estrutura IF-ELSE
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 23/03/2020 - 20:22
	Description: Exerc�cio 9 - �ngulos de um tri�ngulo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	float ang1, ang2, ang3;
	
	printf("digite o angulo 1: "); //pede pro usu�rio digitar o �ngulo 1 do tri�ngulo
	scanf("%f", &ang1); //essa digita��o vai pra vari�vel ang1
	printf("digite o angulo 2: "); //pede pro usu�rio digitar o �ngulo 2 do tri�ngulo
	scanf("%f", &ang2); //essa digita��o vai pra vari�vel ang2
	printf("digite o angulo 3: "); //pede pro usu�rio digitar o �ngulo 3 do tri�ngulo
	scanf("%f", &ang3); //essa digita��o vai pra vari�vel ang3
	if((ang1 == 90 && ang2 != 90 && ang3 != 90) || (ang2 == 90 && ang1 != 90 && ang3 != 90) || (ang3 == 90 && ang1 != 90 && ang2 != 90)) //se APENAS um �ngulo for igual a 90...
		{
			printf("Triangulo Retangulo"); //� um tri�ngulo Ret�ngulo
		}
	else if((ang1 > 90 && ang2 <= 90 && ang3 <= 90) || (ang2 > 90 && ang1 <= 90 && ang3 <= 90) || (ang3 > 90 && ang1 <= 90 && ang2 <= 90))	//mas, se APENAS um �ngulo for maior que 90...
		{
			printf("Triangulo Obtusangulo"); // � um Obtus�ngulo
		}
	else //Se todos os lados forem maiores que 90...
		{
			printf("Triangulo Acutangulo"); //� um tri�ngulo Acut�ngulo
		}
	
	
	
}

