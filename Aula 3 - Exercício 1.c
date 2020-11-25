/*
	Nome: Aula 3 - Exercícios de Estrutura SequenciaL
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 02/03/20 20:01
	Description: Exercício 1 - Conversor de kilo em gramas continha
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

int main ()
{

	float kilos ,gramas; //float é usado para números quebrados que tenham vírgula, vai que a pessoa usa kilogramas ou gramas com casas depois da vírgula
	
	printf("Escreva o quanto de kilos tem o objeto: "); //o PC escreve na tela para pedir pro usuário informar kilos
	scanf("%f", &kilos); //ele pega do teclado o valor dado pelo usuário
	gramas = kilos *1000; //ele faz a conta vezes 1000 para dar em gramas
	printf("O objeto teve: %.2f", gramas); //ele escreve usando a variável como baese quantass gramas deu
	
	
	


}
