/*
	Nome:Aula 9 - For - While - Do
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 13/04/2020 - 20:10
	Description: Exerc�cio 1b - Tabuada do 2, indo at� o 9, usando o while
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int result, a; //uma var�avel
	
	printf("Agora usando o while \n"); //Cara � a mesma bosta q o outro mas dessa vez com for
	while(a <= 10)
	{
		result = 2*a;
		printf("%d \n", result);
		a++;
		
	}
return (0);
	
}

