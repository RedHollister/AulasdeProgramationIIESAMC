/*
	Nome:Aula 7 - While
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 13/04/2020 - 20:10
	Description: Exercício 9 - Números que deverão mostrar seus divisores
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int n, AC, BC;  //pega três variáveis
	printf("Digite um número qualquer e veja quais seus divisores"); //Fala que se ela digitar 0 o programa sai do while
	scanf("%d", &n); //Pega o valor da variável n
	AC = n; //Faz ela também ser igual a AC
	
	while(n != 0)
	{
		AC = AC / (n-1); //Faz o AC ser ele vezes o número n menos 1 (Pra dar fatorial)
		BC = AC * (n-1);
		n-- ; //Faz o n pequeno menos 1, para que assim o número n vá decrescendo até dar 0
		if (BC == BC)
		{
			printf("Number que is divisor de %d, is: %d \n", AC, n);
		}
		
	}
	
	
	
	
	
	
}
