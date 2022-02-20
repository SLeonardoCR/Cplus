/*E15p169N_6A_5        Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:04/11/2019*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
int main() {
    int y=1, cont=1, cara[50][50], x=0;
    printf("MATRIZ CARACOL\n Ingrese el numero n de la matriz nxn (min. 2): ");
    scanf("%d", &x);
    
	if(x>1)
	{
    for(int f=0; f<x; f++){
		for(int j=0; j<x; j++){
			cara[f][j]=0;
		}
	}
    for(int i= 0; i<x; i++){
        if ( y == 1 ) {
            for ( int j = 0; j < x; j++ ) {
                if (cara[i][j] == 0 )
                   cara[i][j] = cont++;
            }
        }
        y++;
        if ( y == 2 ) {
            for ( int j = 0; j < x; j++ ) {
                if (cara[j][x - ( i + 1 )] == 0 )
                   cara[j][x - ( i + 1 )] = cont++;
            }
}
        y++;       
        if ( y == 3 ) {
            for ( int j = x - 1; j >= 0; j-- ) {
                if (cara[x - ( i + 1 )][j] == 0 )
                   cara[x - ( i + 1 )][j] = cont++;
            }
        }
        y++;
        if ( y == 4 ) {
            for ( int j = x - 1; j >= 0; j-- ) {
                if (cara[j][i] == 0 )
                   cara[j][i] = cont++;
            }
        }
        y=1;
    }
    for(int z=0; z<x; z++){
        for(int j=0; j<x; j++) {
        	if(cara[z][j]<10){
        		printf("0");
			}
			if(cara[z][j]<100){
				printf("0");
			}
			printf("%d ",cara[z][j]);
        }
        printf("\n");
    }
}
else
{
	system("CLS");
	printf("\nMINIMO 2");
	Sleep(1500);
	system("CLS");
	return main();
}
    return 0;
}
