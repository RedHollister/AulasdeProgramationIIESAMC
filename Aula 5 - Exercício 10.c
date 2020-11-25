/*
	Nome: Aula 5 - Estrutura IF-ELSE
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 23/03/2020 - 20:22
	Description: Exerc�cio 10 - INSS al�quota
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	float sal, INSS, saldev; //pega tr�s vari�veis
	
	printf("Digite o seu salary: "); //Pede para digitar o seu sal�rio
	scanf("%f", &sal); //Voc� digita o sal�rio na vari�vel sal
	if (sal < 1174.86) //Se o sal�rio for menor que esse...
	{
		INSS = 0.08; //o INSS ser� 8%
		printf("seu INSS deu 8 por cento \n"); //dir� isso
		saldev = sal * INSS; //far� conta com o sal�rio dado
		printf("E seu salary que deve is: %.2f", saldev); //e falar� qual a quantia que ele deve
	}
	else if (sal >= 1174.86 && sal <= 1958.10)
	{
		INSS = 0.09; //o INSS ser� 9%
		printf("seu INSS deu 9 por cento \n"); //dir� isso
		saldev = sal * INSS; //far� conta com o sal�rio dado
		printf("E seu salary que deve is: %.2f", saldev); //e falar� qual a quantia que ele deve
	}
	else if (sal >= 1958.10 && sal <= 3916.20)
	{
		INSS = 0.11; //o INSS ser� 11%
		printf("seu INSS deu 11 por cento \n");  //dir� isso
		saldev = sal * INSS; //far� conta com o sal�rio dado
		printf("E seu salary que deve is: %.2f", saldev); //e falar� qual a quantia que ele deve
	}
	else
	{
		saldev = 430.78; //J� dar� a quantia que ele deve
		printf("E seu salary que deve is: R$%.2f ", saldev); //E falar� isso...
	}
	
	
	
	
}
