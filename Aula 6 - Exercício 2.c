/*
	Nome:Aula 6 - Switch
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 06/04/2020 - 21:17
	Description: Exercício 2 - Produto parcelado ou a vista
*/


#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main()
{
	float preco, descont, prest, parcel;
	int codi;
	
	printf("Digite o price do seu produto: ");
	scanf("%f", &preco);
	printf("Digite a forma de pagamento, 1 para Vista, 2 para Duas parcelas, 3 para three parcelas e 4 para 4 a 6 parcelas \n");
	scanf("%d", &codi); //Pede para o usuário digitar o preço e também o código da qual esse preço será submetido
	switch(codi) //O Switch terá como objeto de comparação a variável codi
	{
		case 1: //Caso o valor da varíavel deu 1...
		printf("You escolheu a vista, com desconto de 30 por cento \n");
		descont = preco*0.30;
		prest = preco - descont; 
		printf("You vai pagar em uma prestation o valor de R$%.2f Reais", prest);
		break;
		
		case 2: //Caso o valor da varíavel deu 2...
		printf("You escolheu Duas parcelas, com desconto de 20 por cento \n");
		descont = preco*0.20;
		prest = preco - descont;
		parcel = prest/2; //Faz as contas do preço menos o desconto, assim dando as parcelas e tals
		printf("You vai pagar em duas prestations o valor de R$%.2f Reais", parcel);
		break;
		
		case 3: //Caso o valor da varíavel deu 3...
		printf("You escolheu Three parcelas, com desconto de 10 por cento \n");
		descont = preco*0.10;
		prest = preco - descont;
		parcel = prest/3; //Faz as contas do preço menos o desconto, assim dando as parcelas e tals
		printf("You vai pagar em three prestations o valor de R$%.2f Reais", parcel);
		break;
		
		case 4: //Caso o valor da varíavel deu 4...
		printf("You escolheu 4 a 6 parcelas, sem desconto \n");
		parcel = preco/6;
		printf("You vai pagar em seis prestations o valor de R$%.2f Reais", parcel);
		break;
	

		default:
		printf("Code incorreto...");

	}
	getch();
	
	
	
	
	
	
}
