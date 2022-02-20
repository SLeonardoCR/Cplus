/*E12p169N_6A_5        Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:04/11/2019*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
main()
{
	srand(time( NULL));
	int m=0, n=0, suma=0;
	printf("Ingrese el numero de la matriz nxn (Max 15)");
	scanf("%d", &m);
	n=m;
	int NUM[n][m];
	
	if(n>1&&n<16)
	{
	for(int i=0; i<n; i++){
		for(int y=0; y<m; y++){
		    printf("Da el valor de NUM[%d][%d]", i, y);
		    scanf("%d", &NUM[i][y]);
	}
	}
	printf("Matriz normal\n");
	for(int i=0; i<n; i++){
		for(int y=0; y<m; y++){
	    	printf("%d  ", NUM[i][y]);
	}
	printf("\n\n");
	}
	printf("Matriz transpuesta\n");
	for(int y=0; y<n; y++){
		for(int i=0; i<m; i++){
	    	printf("%d  ", NUM[i][y]);
	}
	printf("\n\n");
	}
	for(int i=1; i<n-1; i++){
		for(int y=1; y<m-1; y++){
		    suma=suma+NUM[i][y];
	}
	}
	printf("La suma de los que no son periferia es %d", suma);
}
else
{
	system("CLS");
	printf("MAYOR QUE UNO Y MAXIMO 15!!!!");
	Sleep(2000);
	system("CLS");
	return main();
}
	return (0);
}
