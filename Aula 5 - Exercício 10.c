/*
	Nome: Aula 5 - Estrutura IF-ELSE
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 23/03/2020 - 20:22
	Description: Exercício 10 - INSS alíquota
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	float sal, INSS, saldev; //pega três variáveis
	
	printf("Digite o seu salary: "); //Pede para digitar o seu salário
	scanf("%f", &sal); //Você digita o salário na variável sal
	if (sal < 1174.86) //Se o salário for menor que esse...
	{
		INSS = 0.08; //o INSS será 8%
		printf("seu INSS deu 8 por cento \n"); //dirá isso
		saldev = sal * INSS; //fará conta com o salário dado
		printf("E seu salary que deve is: %.2f", saldev); //e falará qual a quantia que ele deve
	}
	else if (sal >= 1174.86 && sal <= 1958.10)
	{
		INSS = 0.09; //o INSS será 9%
		printf("seu INSS deu 9 por cento \n"); //dirá isso
		saldev = sal * INSS; //fará conta com o salário dado
		printf("E seu salary que deve is: %.2f", saldev); //e falará qual a quantia que ele deve
	}
	else if (sal >= 1958.10 && sal <= 3916.20)
	{
		INSS = 0.11; //o INSS será 11%
		printf("seu INSS deu 11 por cento \n");  //dirá isso
		saldev = sal * INSS; //fará conta com o salário dado
		printf("E seu salary que deve is: %.2f", saldev); //e falará qual a quantia que ele deve
	}
	else
	{
		saldev = 430.78; //Já dará a quantia que ele deve
		printf("E seu salary que deve is: R$%.2f ", saldev); //E falará isso...
	}
	
	
	
	
}
