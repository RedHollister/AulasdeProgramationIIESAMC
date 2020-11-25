/*
	Nome:Aula 8 - While Ainda
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 13/04/2020 - 20:10
	Description: Exercício 1 - Eleições das 3 chapas
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int voto, i1, i2, i3, i0, ib, ivoto;
	float porcen;
	ivoto = 0;
	ib = 0;
	i2 = 0;
	i0 = 0;
	while(ivoto < 10) //enquanto o acumulador dos votos for menor que 200...
{
	printf("Digite o seu voto, 1 para a ChapaGay, 2 para a Toonix, 3 para a Koknese"); //explica os votos
	scanf("%d", &voto);
	if (voto == 1)
		i1++;
	else if (voto == 2)
		i2++;
	else if (voto == 3)
		i3++;
	else if (voto == 0)
		i0++;
	else ib++;
	ivoto++;
	//no caso ele pega o voto de cada um e vê qual das três é, se for algum gos três, o acumulador do tal voto adiciona mais um, tem o zero e o branco
}
	printf("Com %d votos,\n a ChapaGay ganhou %d votos,\n Toonix ganhou %d votos e \n Koknese ganhou %d votos,\n houveram %d votos nulos e \n %d votos brancos \n ", ivoto, i1, i2, i3, i0, ib);

	if (i1 > i2 && i1 > i3)
	{
		porcen= i1/ivoto;
		if (porcen > 0.5)
			printf("\n ChapaGay ganhou!");
	}	
	else if (i2 > i1 && i2 > i3)
	{
		porcen= i2/ivoto;
		if (porcen > 0.5)
			printf("\n Toonix ganhou!");
	}
	else if (i3 > i1 && i3 > i2)
	{
		porcen= i3/ivoto;
		if (porcen > 0.5)
			printf("\n Koknese ganhou!");
	}
		
	
}
