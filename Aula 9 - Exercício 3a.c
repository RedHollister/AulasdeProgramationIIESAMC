/*
	Nome: Aula 9 
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 04/05/2020
	Description: Exercício 3a - desenhar um quadrado usando o C
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()

{
 int lin, col; //linhas e colunas em forma de variáveis?
 char ch; //caracter
 
 printf("Digite x: "); //ele pede pra digitar um caracter, como o x
 ch = getche(); //acho que ele pega esse mesmo caracter e o usa, que nem como no scanf
 system("cls"); //ué

 for(lin=1; lin<=4; lin++) //para o lin que começa como 1, enquanto ele for menor ou igual que 4, ele vai adicionando mais um
 {
	for(col=1; col<=8; col++) //para o col que começa como 1, enquanto ele for menor ou igual a 8, ele vai adicionando mais um
 	{
		if((lin+col)%2==0) //se a soma do lin e do col depois o resto deles (depois da divisão) for igual a 0, ele...
		{
			//1+1/2 = 0 logo ele vai escrever
 			printf("%c%c", ch,ch); //vai escrever o caracter duas vezes
 		}
 	}
 	printf("\n");
 }
 system("pause");
 return 0;
}
