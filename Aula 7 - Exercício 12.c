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
	int voto, i1, i2, i3, ivoto;
	
	ivoto = 0;
	while(ivoto <= 10) //enquanto o acumulador dos votos for menor que 200...
{
	printf("Digite o seu voto, 1 para a ChapaGay, 2 para a Toonix, 3 para a Koknese"); //explica os votos
	scanf("%d", &voto);
	if (voto == 1)
		i1++;
	if (voto == 2)
		i2++;
	if (voto == 3)
		i3++;
	ivoto++;
	//no caso ele pega o voto de cada um e vê qual das três é, se for algum gos três, o acumulador do tal voto adiciona mais um
}
	printf("Com %d votos, a ChapaGay ganhou %d votos, Toonix ganhou %d votos e Koknese ganhou %d votos", ivoto, i1, i2, i3);
}
