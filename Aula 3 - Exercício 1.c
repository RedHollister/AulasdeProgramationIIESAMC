/*
	Nome: Aula 3 - Exerc�cios de Estrutura SequenciaL
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 02/03/20 20:01
	Description: Exerc�cio 1 - Conversor de kilo em gramas continha
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

int main ()
{

	float kilos ,gramas; //float � usado para n�meros quebrados que tenham v�rgula, vai que a pessoa usa kilogramas ou gramas com casas depois da v�rgula
	
	printf("Escreva o quanto de kilos tem o objeto: "); //o PC escreve na tela para pedir pro usu�rio informar kilos
	scanf("%f", &kilos); //ele pega do teclado o valor dado pelo usu�rio
	gramas = kilos *1000; //ele faz a conta vezes 1000 para dar em gramas
	printf("O objeto teve: %.2f", gramas); //ele escreve usando a vari�vel como baese quantass gramas deu
	
	
	


}
