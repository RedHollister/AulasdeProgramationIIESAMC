/*
	Nome:Aula 8 - While Ainda
	Copyright: ESAMC - Francisco
	Author: Elton
	Date: 13/04/2020 - 20:10
	Description: Exercício 2 - Porto Alegre e Pessoas
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include <conio.h>

int main()
{
	int ip, igre, iint, iout, sal_gre, sal_int,sal_out, clb, sal, city, citpa;
	float med_gre, med_int;
	ip = 0;
	citpa = 0;
	igre = 0;
	iout = 0;
	sal_gre = 0;
	sal_int = 0;
	while(ip < 5)
	{
		printf("Qual seu clube de preferência? (1-Gremio2-Inter3-Outros): ");
		scanf("%d", &clb);
		if (clb == 1) //Grêmio
		{
			igre++;
			printf("\n Digite o seu salary: ");
			scanf("%d", &sal);
			sal_gre = sal_gre + sal;
			printf("\n Digite sua cidade de origem (1-Porto Alegre2-Outros): ");
			scanf("%d", &city);
			
		}
		if (clb == 2) //Internacional
		{
			iint++;
			printf("\n Digite o seu salary: ");
			scanf("%d", &sal);
			sal_int = sal_int + sal;
			printf("\n Digite sua cidade de origem (1-Porto Alegre2-Outros): ");
			scanf("%d", &city);
		}
		if (clb ==3) //Outros
		{
			iout++;
			printf("\n Digite o seu salary: ");
			scanf("%d", &sal);
			sal_out = sal_out + sal;
			printf("\n Digite sua cidade de origem (1-Porto Alegre2-Outros): ");
			scanf("%d", &city);
			if (city == 1)
				citpa++;
		}
	ip++;	
	}
	printf("\n Com %d pessoas entrevistadas,\n deram %d torcedores do gremio,\n %d torcedores do inter e \n %d torcedores de outros", ip, igre, iint, iout);
	med_gre = sal_gre/ip;
	med_int = sal_int/ip;
	printf("\n O salary medio dos torcedores do gremio is %.2f e \n dos torcedores do inter is %.2f", med_gre, med_int);
	printf("\n número de pessoas nascidas em Porto Alegre que não torcem por nenhum dos dois primeiros clubes is %d", citpa);
}
