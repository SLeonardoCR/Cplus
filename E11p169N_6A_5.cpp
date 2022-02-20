/*E11p169N_6A_5        Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:01/11/2019*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
main()
{
	srand(time( NULL));
	int m=0, n=0, y=0, SumaDP=0, SumaDI=0, simetria=0, ident=0, identidad=0, aux=0, maizq=0;
	printf("Ingrese el numero de la matriz nxn (Max 15)");
	scanf("%d", &m);
	n=m;
	int tabla[n][m];
	
	if(m>1&&m<16)
	{
	for(int i=0; i<n; i++)
	{
		for(int z=0; z<m; z++)
		{
			printf("Ingrese [%d][%d]", i, z);
			scanf("%d", &tabla[i][z]);
		}
	}
	system("CLS");
	for(int i=0; i<n; i++)
	{
		for(int z=0; z<m; z++)
		{
			printf("%d ", tabla[i][z]);
		}
		printf("\n ");
	}
}
	else
{
	system("CLS");
	printf("MINIMO 2 Y MAXIMO 15");
	Sleep(3000);
	system("CLS");
	return main();
}
for(int i=0; i<m; i++)
	{
		for(int s=0; s<n; s++)
		{
		if(tabla[i][s]==tabla[s][i])
		{
			simetria++;
		}
	}
	}
	int jaja=n*m;
	if(simetria==jaja)
	{
		printf("\nLa matriz es simetrica");
	}
	else
	{
		printf("\nLa matriz no es simetrica");
	}
	for(int i=0; i<m; i++)
	{
		for(int s=0; s<n; s++)
		{
		if(i==s)
		{
			if(tabla[i][s]==1)
			ident++;
		}
	}
	if(ident==n)
		{
			identidad++;
		}
	}
	if(identidad==1)
	{
		printf("\nLa matriz tiene identidad");
	}
	else
	{
		printf("\nLa matriz no tiene identidad");
	}
	aux=(m*m)/3;
	for(int i=1; i<m; i++)
	{
		for(int s=0; s<n; s++)
		{
			if(i>s)
			if(tabla[s][i]==0)
			maizq++;
		}
	}
	if(maizq==aux)
	{
		printf("\nTiene matriz triangular superior");
	}
	else
	{
		printf("\nNo tiene matriz triangular superior");
	}
	maizq=0;
	for(int i=1; i<m; i++)
	{
		for(int s=0; s<n; s++)
		{
			if(i>s)
			if(tabla[i][s]==0)
			maizq++;
		}
	}
	if(maizq==aux)
	{
		printf("\nTiene matriz triangular inferior");
	}
	else
	{
		printf("\nNo tiene matriz triangular inferior");
	}
	}
