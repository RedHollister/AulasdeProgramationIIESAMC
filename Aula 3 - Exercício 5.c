/*
	Nome: Aula 3 - Exercícios de Estrutura SequenciaL
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 02/03/20 20:01
	Description: Exercício 5 - Desconto de 9% num produto
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

int main ()
{
	float produto, desconto, vista;
	
	printf("Digite o valor do produto: "); //O computador vai pedir para o usuário colocar o valor do produto
	scanf("%f", &produto);
	desconto = produto *0.09; //ele pega a conta do produto vezes o 9%
	vista = produto - desconto; //subtrai o produto do desconto
	printf("O valor do sueu produto descontado is %.2f", vista); //o Computador coloca a variável do produto menos o desconto na tela
	
	
	
	
	
}

