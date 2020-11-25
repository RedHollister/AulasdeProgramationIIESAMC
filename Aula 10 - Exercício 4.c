/*
	Nome: Aula 10
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 11/05/2020
	Description: Exercício 4 - intervalo de 30 a 10 em ímpares e em ordem decrescente
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int n = 30;
	//bó dar valor de 30 nele aí a gente "decresce" o dando valor de 29 no for kekekekeke
	printf("Number de 30 a 10 decrescente, indo de impar em impar: \n");
	printf("\n Number: %d", n);
	for(n = 29; n >= 10;n= n - 2) //para o n sendo igual ao 29, enquanto ele for maior ou igual que 10, vai decrescendo de 2 em 2 no n
	{
    	printf("\n Number: %d", n);
	} 
	
	
}
