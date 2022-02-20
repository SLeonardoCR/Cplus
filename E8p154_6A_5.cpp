/*E8p154N_6A_5        Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:24/10/2019*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int R[20], num=0, lista1[20], lista2[20], lista3[20], x=0, y=0, z=0, i=0;
	srand (time(NULL));
	x=0;
	y=0;
	z=0;
	for(i=0; i<=19; i++)
	{
		lista1[i]=0;
	}
	for(i=0; i<=19; i++)
	{
		lista2[i]=0;
	}
	for(i=0; i<=19; i++)
	{
		lista3[i]=0;
	}
	for(i=0; i<=19; i++)
	{
		num=rand()%150;
		if(num>-1&&num<51)
		{
			lista1[i]=num;
			x++;
		}
		else
		{
		if(num>=51&&num<=100)
		{
			lista2[y]=num;
			y++;
		}
		else
		{
			lista3[z]=num;
			z++;
		}
	}
	}
	printf("\nLista 1");
	for(i=0; i<=19; i++)
	{
		if(lista1[i]!=0)
		{
		printf("\n%d", lista1[i]);
		}
	}
	printf("\nLista 2");
	for(i=0; i<=19; i++)
	{
		if(lista2[i]!=0)
		{
		printf("\n%d", lista2[i]);
		}
	}
	printf("\nLista 3");
	for(i=0; i<=19; i++)
	{
		if(lista3[i]!=0)
		{
		printf("\n%d", lista3[i]);
	}
}
}
