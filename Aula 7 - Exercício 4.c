/*
	Nome:Aula 7 - While
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 13/04/2020 - 20:10
	Description: Exerc�cio 4 - N�meros �mpares no intervalo 30,10 decrescente
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int i;  //pega apenas uma vari�vel
	i = 30; //J� d� pra ela o valor de 30
	i = i - 1; //Faz a conta de menos 1 no i para que assim uma hora ou outra ele n�o seja mais menor ou igual a 20, saindo desse while e do programa
	while(i >=10) //Enquanto ela for maior ou igual a 10...
	{
		printf("\n Number: %d",i);
		i= i - 2; //Faz a conta de menos 2 no i para que assim uma hora ou outra ele n�o seja mais maior ou igual a 10, saindo desse while e do programa
		
		
	}
	
	
	
	
	
	
}
