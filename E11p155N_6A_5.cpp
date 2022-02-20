/*E11p155N_6A_5        Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:24/10/2019*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
main()
{
	srand(time( NULL));
	float num=0, Cad[10], x=0;
	int i=0;
	
	for(i=0; i<10; i++)
	{
		Cad[i]=rand()%1000*.1;
		x=x+Cad[i];
		printf(" %f", Cad[i]);
	}
	x=x/10;
	printf("\n El promedio es %f", x);
	Sleep(1500);
	printf("\n\n\nLos mayores que el promedio son:\n %f", x);
	for(i=0; i<10; i++)
	{
		if(Cad[i]>x)
		{
			printf("\n%f", Cad[i]);
		}
	}
	Sleep(1500);
	printf("\n\n\nLos menores o iguales son:\n %f", x);
	for(i=0; i<10; i++)
	{
		if(Cad[i]<=x)
		{
			printf("\n%f", Cad[i]);
		}
	}
	return(0);
}
