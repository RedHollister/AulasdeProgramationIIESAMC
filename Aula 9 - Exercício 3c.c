/*
	Nome: Aula 9 
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 04/05/2020
	Description: Exercício 3c - desenhar um xis
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){
 int lin, col;
 char ch;
 
 printf("Digite um caracter: ");
 ch = getche();
 system("cls");

 for(lin=1; lin<=16; lin++)
 {
	for(col=1; col<=16; col++)
 	{
 		if((lin-col)%16==0)
		{
 			printf("%c", ch);
 		}
 		if((lin+col)%16==0)
		{
 			printf("%c", ch);
 		}
 		else
			 printf("  ");
 	}
	 printf("\n");
 }
 system("pause");
 return 0;
}
