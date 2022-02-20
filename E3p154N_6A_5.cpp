/*E3p154N_6A_5        Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:01/11/2019*/
#include <stdio.h>
main()
{
	int NUM[20], x=0, y=0, i=0;
	for(i=0; i<20; i++){
		printf("Da el valor de NUM[%d]", i);
		scanf("%d", &NUM[i]);
	}
	for(i=0; i<20; i++){
		if(NUM[i]%2==0)
		y=y+NUM[i];
	}
	printf("Suma de pares  %d", y);
	for(i=0; i<20; i++){
		if(NUM[i]>x)
			if(NUM[i]%2==1)
				x=NUM[i];
	}
	printf("\nEl mayor impar  %d", x);
	x=0;
	for(i=0; i<20; i++){
		if(NUM[i]>x)
			if(NUM[i]%2==0)
				x=NUM[i];
	}
	printf("\nEl mayor par  %d", x);
}
