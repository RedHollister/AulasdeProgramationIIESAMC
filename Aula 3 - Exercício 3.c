/*
	Nome: Aula 3 - Exercícios de Estrutura SequenciaL
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 02/03/20 20:01
	Description: Exercício 3 - Dizer um número e depois mostrar o seu antecessor e seu sucessor
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

int main()
{
	int num, ant, suc;
	
	printf("Digite um number qualquer: "); //pede um número qualquer ao usuário
	scanf("%d", &num); //lê o número que o usuário receber
	ant = num - 1; //faz a conta pra achar o antecessor
	suc = num +1; //o mesmo de cima mas pro sucessor
	printf("O Seu number digitado foi: %d, o seu antecessor is %d e seu sucessor is %d", num, ant, suc); //mostra o resultado
	
	
	
	
	
}
