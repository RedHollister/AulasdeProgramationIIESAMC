/*
	Nome: Aula 9 
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 04/05/2020
	Description: Exerc�cio 3e - desenhar um tri�ngulo que come�a grande e termina pequeno
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()

{
 int lin, col; //linhas e colunas em forma de vari�veis?
 char ch; //caracter
 
 printf("Digite x: "); //ele pede pra digitar um caracter, como o x
 ch = getche(); //acho que ele pega esse mesmo caracter e o usa, que nem como no scanf
 system("cls"); //u�

 for(lin=1; lin<=8; lin++) //para o lin que come�a como 1, enquanto ele for menor ou igual que 4, ele vai adicionando mais um
 {
	for(col=1; col<=8; col++) //para o col que come�a como 1, enquanto ele for menor ou igual a 8, ele vai adicionando mais um
 	{
 		if((lin - col) < 0) //se a soma do lin e do col depois o resto deles (depois da divis�o) for igual a 0, ele...
		{
			//se linhas s�o iguais a colunas ent�o ele escreve
 			printf("%c", ch,ch); //vai escrever o caracter duas vezes
 		}
 		
 	}
 	printf("\n");
 }
 system("pause");
 return 0;
}
