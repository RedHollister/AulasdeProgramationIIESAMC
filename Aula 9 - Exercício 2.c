/*
	Nome:Aula 9 - For - While - Do
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 13/04/2020 - 20:10
	Description: Exercício 2 - Tabular função de x e y, usando for
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int x, y, f;
	
	y = 1;
	x = 2;
	printf("\n Para x igual a %d e y igual a %d ...", x, y);
	f = (x*x*x*x+3*x*y+y*y*y)/(2*x*y+3*x+4*y+2);
	printf("Resultado deu %d \n", f);
	for(x=2 ;x <= 8;x = x + 2)
	{
		y = y + 2;
		printf("\n Para x igual a %d e y igual a %d ...", x, y);
     	f = (x*x*x*x+3*x*y+y*y*y)/(2*x*y+3*x+4*y+2);
		printf("Resultado deu %d \n", f);
	
	} 
	
	
	
	
	
	
	
}
