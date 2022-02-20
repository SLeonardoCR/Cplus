//Campos Rangel Sergio Leonardo
//No. de Control 19141127
#include<stdio.h>
#include<math.h>

	
main ()
{
int x=0;
			float pi=0, y=3;
			printf("SERIE B\n");
			for(x=3;x<401;x=x+2)
			{
				pi=pi-(4/y);
				printf("4/%d=%f  ", x, pi);
				y+=2;
				x=x+2;
				pi=pi+(4/x);
				printf("4/%d=%f  ", x, pi);
				y+=2;
				}
			}
