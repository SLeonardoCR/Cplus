/*E6PP93N_6A_5         Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:14/10/2019*/
#include <stdio.h>
#include <math.h>
main()
{
	char hola;
	printf("Selecione serie (a)(b)(c) u otra tecla para salir\n");
	scanf("%c", &hola);
	if(hola=='a')
	{
	int x1=0;
	float u=0, y1=0;
	printf("Serie a\n");
	for(x1=1;x1<=99;x1++)
	{
	y1++;
	printf("+1/%d", x1);
	u=u+(1/y1);
	printf("=%f ", u);
	}
	printf("\n1/n ya es igual a 0.01");
}
	
if(hola=='b')
{
	int x=0;
	float pi=0, y=3;
	printf("SERIE B\n");
	for(x=3;x<=399;x=x+2)
		{
			pi=pi-(4/y);
			fflush(stdin);
			printf("- 4/%d ", x);
			y+=2;
			if(x<=397)
			{
			x=x+2;
			pi=pi+(4/y);
			printf("+ 4/%d ", x);
			y+=2;
		}
		}
		printf("=%f", pi);
		x=x-2;
	printf("\n%f\n 4/%d es menor a 0.01", pi, x);
}
if(hola=='c')
{
	int x=0;
	float i=1, y=3;
	printf("SERIE B\n");
	printf("1 ");
	for(x=1;x<=98;x=x+2)
		{
			i=i+(4/y);
			fflush(stdin);
			printf("+ 1/%d ", x);
			y+=2;
			x=x+2;
			i=i-(4/y);
			printf("- 1/%d ", x);
			y+=2;
		}
		printf("=%f", i);
		x=x-2;
		printf("\n1/%d es menor a 0.01", x);
}
return(0);
	}
