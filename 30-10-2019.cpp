/*E5p107N_6A_5        Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:14/10/2019*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
main()
{
	int datos[4][4], x=0, y=0, suma=0;
	for(x=0; x<3; x++)
	{
		for(y=0; y<3; y++)
		{
			printf("Ingrese el numero en la matriz %d,%d\n", x, y);
			scanf("%d", &datos[x][y]);
			system("CLS");
		}
	}
	printf(" %d %d %d\n %d %d %d\n %d %d %d", datos[0][0], datos[0][1], datos[0][2], datos[1][0], datos[1][1], datos[1][2], datos[2][0], datos[2][1], datos[2][2]);
	for(x=0; x<3; x++)
	{
		for(y=0; y<3; y++)
		{
			suma=suma+datos[x][y];
		}
		datos[x][y]=suma;
		suma=0;
	}
	Sleep(500);
	system("CLS");
	printf(" %d %d %d   %d\n %d %d %d   %d\n %d %d %d   %d", datos[0][0], datos[0][1], datos[0][2], datos[0][3], datos[1][0], datos[1][1], datos[1][2], datos[1][3], datos[2][0], datos[2][1], datos[2][2], datos[2][3], datos[3][0], datos[3][1], datos[3][2]);
	
	datos[0][3]=datos[1][0]+datos[2][0]+datos[0][0];
	printf("\n\n %d", datos[0][3]);
	datos[1][3]=datos[1][1]+datos[2][1]+datos[0][1];
	printf(" %d", datos[1][3]);
	datos[2][3]=datos[1][2]+datos[2][2]+datos[0][2];
	printf(" %d", datos[2][3]);
	datos[3][3]=datos[0][3]+datos[1][3]+datos[2][3];
	printf(" %d\n ...", datos[3][3]);
	Sleep(4000);
}


