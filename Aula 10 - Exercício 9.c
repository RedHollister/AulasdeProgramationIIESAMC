/*
	Nome: Aula 10
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 11/05/2020
	Description: Exerc�cio 9 - 10 bois no frigorifico
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int boi, nbois, boigor, boimag;
	
	boigor = 0;
	boimag = 1000;
	printf("10 Bois no frigorifico, vamos ver qual is o mais gordo e qual o mais magro \n");
	for(nbois = 0; nbois < 10;nbois++) //Sendo o n�mero de bois igual a 0, enquanto ele for menor ou igual a 10, vai aumentando mais um nele
	{
    	printf("Peso desse boi no colar: ");
    	scanf("%d", &boi); //pede e escreve o n�mero de quilos do boi atual
    	if (boi > boigor)
    		boigor = boi; //se o peso do boi atual for maior que a do boi mais gordo, o peso do boi mais gordo vai se tornar a dele
    	if (boi < boimag)
    		boimag = boi; //mesma coisa da do boi mais magro, por�m usando comparativo se o peso � o menor 
	} 
	printf("O peso do boi mais gordo foi: %d Kg e a do mais magro foi %d Kg", boigor, boimag);
	
}
