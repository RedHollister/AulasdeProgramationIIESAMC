/*
	Nome: Aula 3 - Exercícios de Estrutura SequenciaL
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 02/03/20 20:01
	Description: Exercício 4 - Reajuste de 1% numa conta poupança
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

int main ()
{
	float poupan, reajuste, Superpan;
	
	printf("Digite o valor de sua conta poupança: "); //O computador vai pedir para o usuário colocar o valor da conta poupança
	scanf("%f", &poupan);
	reajuste = poupan *0.01; //ele pega a conta da poupança vezes o 1%
	Superpan = poupan + reajuste; //soma o reajuste a poupança
	printf("O valor da sua poupança reajustada is %.2f", Superpan); //o Computador coloca a variável da poupança mais o ajuste na tela
	
	
	
	
	
}

