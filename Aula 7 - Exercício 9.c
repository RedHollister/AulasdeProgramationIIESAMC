/*
	Nome:Aula 7 - While
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 13/04/2020 - 20:10
	Description: Exerc�cio 9 - N�meros que dever�o mostrar seus divisores
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int n, AC, BC;  //pega tr�s vari�veis
	printf("Digite um n�mero qualquer e veja quais seus divisores"); //Fala que se ela digitar 0 o programa sai do while
	scanf("%d", &n); //Pega o valor da vari�vel n
	AC = n; //Faz ela tamb�m ser igual a AC
	
	while(n != 0)
	{
		AC = AC / (n-1); //Faz o AC ser ele vezes o n�mero n menos 1 (Pra dar fatorial)
		BC = AC * (n-1);
		n-- ; //Faz o n pequeno menos 1, para que assim o n�mero n v� decrescendo at� dar 0
		if (BC == BC)
		{
			printf("Number que is divisor de %d, is: %d \n", AC, n);
		}
		
	}
	
	
	
	
	
	
}
