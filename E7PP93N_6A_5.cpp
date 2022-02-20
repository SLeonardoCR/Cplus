/*E7PP93N_6A_5         Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:14/10/2019*/
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	/* La funcion ltoa pasa una serie de numeros a una cadena de caracteres a la base indicada atte Leo jaja lo investigue*/	
	int salir=0, decimal=0;
	char hola, cadena[50];
	printf("Decimal a... (a)binario (b)octal (c)hexadecimal\n");
	scanf("%c", &hola);
	printf("Ingresa un numero decimal:\n");
    scanf("%d", &decimal);
    
    if(hola=='a'||hola=='b'||hola=='c')
    {
if(hola=='a')
{
    ltoa(decimal, cadena, 2);
    printf("El numero en binario es: %s\n", cadena);
    return 0;
}
if(hola=='b')
{
    ltoa(decimal, cadena, 8);
    printf("El numero en octal es: %s\n", cadena);
    return 0;
}
if(hola=='c')
{
    ltoa(decimal, cadena, 16);
    printf("El numero en exadecimal es: %s\n", cadena);
    return 0;
}
}
printf("Presione 1 para hacerlo de nuevo... otro para salir");
fflush(stdin);
scanf("%d", &salir);
if(salir==1)
{
	return main();
}
return (0);
}
