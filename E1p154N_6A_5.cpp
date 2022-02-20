/*E1p154N_6A_5        Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:24/10/2019*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    srand(time( NULL));
    int x=0, y=0, N=24;
	float vect[N], suma= 0, media= 0, max= 0, min= 0, i=0;
	

for(int i=0; i<N; i++)
    {
	    vect[i]= (rand()%1000) * 0.1 + 1;
	    if(i!=0)
	    {
	    	suma= suma + vect[i];
		}
		else
		{
		    suma=max=min=vect[i];
			x=y=i;
			}
			if(vect[i] > max)
			{
			    max= vect[i];
			    x= i;
			}
			if(vect[i] < min)
			{
                min= vect[i];
				y= i;
				}
				printf("%f grados\t%dhrs\n", vect[i], i);
				}
				media=suma/N;
				printf("\nMedia= %f grados Celsius\nMas alta= %f grados Celsius a las %d horas\nMas baja= %f grados Celsius a las %d horas\n", media, max, x, min, y);
				return 0;
} 
