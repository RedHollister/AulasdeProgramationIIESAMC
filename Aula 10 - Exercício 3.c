/*
	Nome: Aula 10
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 11/05/2020
	Description: Exercício 3 - intervalo de 0 a 20 em pares e em ordem crescente
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int n;
	
	printf("Number de 0 a 20 crescente, indo de par em par: \n");
	for(n = 0; n <= 20;n= n + 2)//para o n sendo igual ao 0, enquanto ele for menor ou igual que 20, vai aumentando de 2 em 2 no n
	{
    	printf("\n Number: %d", n);
	} 
	
	
}
