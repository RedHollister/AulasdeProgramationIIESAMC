/*
	Nome: Aula 3 - Exerc�cios de Estrutura SequenciaL
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 02/03/20 20:01
	Description: Exerc�cio 3 - Dizer um n�mero e depois mostrar o seu antecessor e seu sucessor
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

int main()
{
	int num, ant, suc;
	
	printf("Digite um number qualquer: "); //pede um n�mero qualquer ao usu�rio
	scanf("%d", &num); //l� o n�mero que o usu�rio receber
	ant = num - 1; //faz a conta pra achar o antecessor
	suc = num +1; //o mesmo de cima mas pro sucessor
	printf("O Seu number digitado foi: %d, o seu antecessor is %d e seu sucessor is %d", num, ant, suc); //mostra o resultado
	
	
	
	
	
}
