/*
	Nome:Aula 6 - Switch
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 06/04/2020 - 21:17
	Description: Exerc�cio 3 - Produto com Margem de Lucro
*/


#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main()
{
	float preco, marge, precsoma;
	int codi;
	
	printf("Digite o price do seu produto: ");
	scanf("%f", &preco);
	printf("Digite a Categoria do Produto (1 Horti, 2 Lati, 3 Carnes, 4 Peixes, 5 Aves, 6 Ovos) \n");
	scanf("%d", &codi); //Pede para o usu�rio digitar o pre�o e tamb�m o c�digo da qual esse pre�o ser� submetido
	switch(codi) //O Switch ter� como objeto de compara��o a vari�vel codi
	{
		case 1: //Caso o valor da var�avel deu 1...
		printf("You escolheu a Categoria Hortifruti, com Margem de Lucro de 80 por cento \n");
		marge = preco*0.80;
		precsoma = preco + marge; //Faz a soma com o pre�o normal mais a Margem de Lucro
		printf("O Price do produto mais 80 por cento de margem de Lucro deu R$%.2f Reais", precsoma);
		break;
		
		case 2: //Caso o valor da var�avel deu 2...
		printf("You escolheu a Categoria Laticineos, com Margem de Lucro de 80 por cento \n");
		marge = preco*0.80;
		precsoma = preco + marge; //Faz a soma com o pre�o normal mais a Margem de Lucro
		printf("O Price do produto mais 80 por cento de margem de Lucro deu R$%.2f Reais", precsoma);
		break;
		
		case 3: //Caso o valor da var�avel deu 3...
		printf("You escolheu a Categoria Carnes, com Margem de Lucro de 100 por cento \n");
		marge = preco*1;
		precsoma = preco + marge; //Faz a soma com o pre�o normal mais a Margem de Lucro
		printf("O Price do produto mais 100 por cento de margem de Lucro deu R$%.2f Reais", precsoma);
		break;
		
		case 4: //Caso o valor da var�avel deu 4...
		printf("You escolheu a Categoria Peixes, com Margem de Lucro de 100 por cento \n");
		marge = preco*1;
		precsoma = preco + marge; //Faz a soma com o pre�o normal mais a Margem de Lucro
		printf("O Price do produto mais 100 por cento de margem de Lucro deu R$%.2f Reais", precsoma);
		break;
		
		case 5: //Caso o valor da var�avel deu 5...
		printf("You escolheu a Categoria Aves, com Margem de Lucro de 90 por cento \n");
		marge = preco*0.90;
		precsoma = preco + marge; //Faz a soma com o pre�o normal mais a Margem de Lucro
		printf("O Price do produto mais 90 por cento de margem de Lucro deu R$%.2f Reais", precsoma);
		break;
		
		case 6: //Caso o valor da var�avel deu 6...
		printf("You escolheu a Categoria Ovos, com Margem de Lucro de 90 por cento \n");
		marge = preco*0.90;
		precsoma = preco + marge; //Faz a soma com o pre�o normal mais a Margem de Lucro
		printf("O Price do produto mais 90 por cento de margem de Lucro deu R$%.2f Reais", precsoma);
		break;
	
		default:
		printf("Code incorreto...");

	}
	getch();
	
}
	
	
