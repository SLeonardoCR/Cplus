#include <stdio.h> 
#include <math.h> 
#include <windows.h>
#include <iostream>
 
 int main(){
 	int grado=0, salir=0, eleccion=0;
	printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
	printf("\n\nIngrese: \n1-salir\n(Cualquier Numero)-Iniciar Programa\n");
	scanf("%d",&salir);
	if(salir==1){
		exit(-1);
	}
	system("cls");
	do{
		printf("Introduzca el grado del polinomio: \n");
		scanf("%d",&grado);
		if(grado<=0){
		printf("\nEl grado tiene que ser mayor a 0\n");
		Sleep(2000);
		system("cls");
		}
	}while(grado<=0);	
	int potencias[grado];
	printf("\nEl polinomio va a tener %d coeficientes", (grado+1));
	double Coeficiente[grado];
	double DerCoeficiente[grado-1];
	printf("\n\nIntroduzca los %d coeficientes del polinomio de grado %d: \n", (grado+1), grado);
	for(int i=0;i<=grado;i++){
		printf("%d: ", (i+1));
		scanf("%lf", &Coeficiente[i]);
	}
	DerCoeficiente[0]=Coeficiente[1];
	DerCoeficiente[1]=Coeficiente[2]*2;
	for(int i=3;i<=grado;i++){
		DerCoeficiente[i-1]=Coeficiente[i]*i;
	}
	do{
		printf("\nEscoja que metodo usar:\n1)Simpson 2)Trapecios\n---");
		scanf("%d", &eleccion);
		if(eleccion!=1&&eleccion!=2){
		printf("\nLEA BIEN, JOVEN\n");
		eleccion=0;
		Sleep(2000);
		system("cls");
		}
	}while(eleccion<=0);
	
	
	if(eleccion==1){
	//SIMPSON
	double fx, fx2, a, b, integracion=0.0, paso, k;
 	int j, subIntervalos=500;

 	printf("\n\n-----------------------------------------\n\n");
 	printf("\nIngresa a del intervalo [a,b]: ");
 	scanf("%lf", &a);
 	printf("\nIngresa b del intervalo [a,b]: ");
 	scanf("%lf", &b);

	paso = (b - a)/subIntervalos;

 	//Evaluando
	fx=DerCoeficiente[0]+DerCoeficiente[1]*a;
	for(int i=2;i<=grado;i++){
		fx=fx+DerCoeficiente[i]*pow(a,i);
	}
	fx=pow(fx,2)+1;
	fx=sqrt(fx);

	fx2=DerCoeficiente[0]+DerCoeficiente[1]*b;
	for(int i=2;i<=grado;i++){
		fx2=fx2+DerCoeficiente[i]*pow(b,i);	
	}
	fx2=pow(fx2,2)+1;
	fx2=sqrt(fx2);
	
	integracion = fx + fx2;
	fx=0;
	
 	for(j=1; j<= subIntervalos-1; j++)
 	{
  	k = a + j*paso;
  	fx=DerCoeficiente[0]+DerCoeficiente[1]*k;
	for(int i=2;i<=grado;i++){
		fx=fx+DerCoeficiente[i]*pow(k,i);
		fx=pow(fx,2)+1;
		fx=sqrt(fx);	
	}

  	if(j%2==0)
  	{
    	integracion = integracion + 2 * (fx);
  	}
  	else
  	{
    	integracion = integracion + 4 * (fx);
  	}

 	}

 	integracion = integracion * paso/3;

 	printf("\n-----------------------------------------\nLa longitud de arco es: %lf \n\n\n", integracion);
 }
 if(eleccion==2){
 	//TRAPECIO
 	double fx, fx2, a, b, integracion=0.0, paso, k;
 	int i, subIntervalo=100;

 	printf("\n\n-----------------------------------------\n\n");
 	printf("\nIngresa a del intervalo [a,b]: ");
 	scanf("%lf", &a);
 	printf("\nIngresa b del intervalo [a,b]: ");
 	scanf("%lf", &b);

 	paso = (b - a)/subIntervalo;

 	//Evaluando
 	fx=DerCoeficiente[0]+DerCoeficiente[1]*a;
	for(int i=2;i<=grado;i++){
		fx=fx+DerCoeficiente[i]*pow(a,i);
	}
	fx=pow(fx,2)+1;
	fx=sqrt(fx);

	fx2=DerCoeficiente[0]+DerCoeficiente[1]*b;
	for(int i=2;i<=grado;i++){
		fx2=fx2+DerCoeficiente[i]*pow(b,i);	
	}
	fx2=pow(fx2,2)+1;
	fx2=sqrt(fx2);
	
 	integracion = fx + fx2;
 	fx=0;

 	for(i=1; i<= subIntervalo-1; i++)
 	{
  	k = a + i*paso;
  	fx=DerCoeficiente[0]+DerCoeficiente[1]*k;
	for(int i=2;i<=grado;i++){
		fx=fx+DerCoeficiente[i]*pow(k,i);
		fx=pow(fx,2)+1;
		fx=sqrt(fx);	
	}
  	integracion = integracion + 2 * fx;
 	}

 	integracion = integracion * paso/2;

	printf("\n-----------------------------------------\nLa longitud de arco es: %lf \n\n\n", integracion);

 }
	return main();
 	return 0;
 }
