/*
	Nome:Aula 7 - While
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 13/04/2020 - 20:10
	Description: Exerc�cio 8 - N�meros que v�o mostrar seus fatoriais
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int n, AC;  //pega duas vari�veis
	printf("Digite um n�mero qualquer para mostrar ele fatorial, caso cair pra 0, o programa para"); //Fala que se ela digitar 0 o programa sai do while
	scanf("%d", &n); //Pega o valor da vari�vel n
	AC = n; //Faz ela tamb�m ser igual a n
	while(n != 0)
	{
		AC = AC * (n-1); //Faz o AC ser ele vezes o n�mero n menos 1 (Pra dar fatorial)
		n-- ; //Faz o n pequeno menos 1, para que assim o n�mero n v� decrescendo at� dar 0
		printf(" Number deu: %d \n", AC); //Mostra o valor que t� no AC
	}
	
	
	
	
	
	
}
