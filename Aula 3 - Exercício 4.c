/*
	Nome: Aula 3 - Exerc�cios de Estrutura SequenciaL
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 02/03/20 20:01
	Description: Exerc�cio 4 - Reajuste de 1% numa conta poupan�a
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

int main ()
{
	float poupan, reajuste, Superpan;
	
	printf("Digite o valor de sua conta poupan�a: "); //O computador vai pedir para o usu�rio colocar o valor da conta poupan�a
	scanf("%f", &poupan);
	reajuste = poupan *0.01; //ele pega a conta da poupan�a vezes o 1%
	Superpan = poupan + reajuste; //soma o reajuste a poupan�a
	printf("O valor da sua poupan�a reajustada is %.2f", Superpan); //o Computador coloca a vari�vel da poupan�a mais o ajuste na tela
	
	
	
	
	
}

