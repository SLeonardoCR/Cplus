/*E5p107N_6A_5        Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:14/10/2019*/
#include <stdio.h>
main()
{
	int cador=0, cando=0, x=0, z=0, y=0, salir=0;
	printf("De un numero a multiplicar\n");
	scanf("%d", &cando);
	printf("Por cuanto se va la multiplicar?\n");
	scanf("%d", &cador);
	x=cando;
	y=cador;
	 while(cando>=1)
	 {
	 	if(cando%2!=0)
	 z=z+cador;
	 cando=cando/2;
	 cador=cador*2;
}
	printf("El resultado de %d x %d = %d", x, y, z);
	printf("\nIngrese 1 para hacerlo de nuevo u otro para salir\n");
	scanf("%d", &salir);
	if(salir==1)
	{
		return main();
	}
	return(0);
}
