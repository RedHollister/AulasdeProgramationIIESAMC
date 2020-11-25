/*
	Nome:Aula 7 - While
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 13/04/2020 - 20:10
	Description: Exercício 5 - Números ímpares no intervalo 30,10 decrescente
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int n;  //pega apenas uma variável
	n = 1; //Já dá pra ela o valor de 1
	printf("Digite um número qualquer para mostrar ao quadrado, caso for 0, o programa para");
	while(n != 0) //Enquanto ela for diferente de 0...
	{
		scanf("%d", &n);
		n = n*n; //Faz a conta de ao quadrado no n
		printf(" Number deu: %d \n", n);
	}
	
	
	
	
	
	
}
