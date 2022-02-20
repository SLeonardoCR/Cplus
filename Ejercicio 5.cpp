#include <stdio.h>
main()
{
	int x=0, y=0, salir=0;
	printf("\nConjetura de ULAM \nIngrese un numero entero positivo\n");
	scanf("%d", &x);
	do
	{
		if(x%2==0)
		{
			x=x/2;
		}
		else
		{
			x=x*3+1;
		}
		printf("%d, ", x);
	}while(x!=1);
	printf("\n\nIngrese 1 para hacerlo de nuevo... Otro numero para salir\n");
	scanf("%d", &salir);
	if(salir==1)
	{
	return main();
    }
    return(0);
}
