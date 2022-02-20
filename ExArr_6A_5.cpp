/*ExArr_6A_5        Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:15/11/2019*/
#include <stdio.h>
#include <windows.h>
main()
{
	int vector[20], tama=0, lista1[20], lista2[20], lista3[20];
	printf("Que tamano quiere el vector? MAX 20\n");
	scanf("%d", &tama);
	if(tama>=2&&tama<=20){
	for(int i=0; i<tama; i++){
		printf("Ingresa el numero vector[%d]", i+1);
		scanf("%d", &vector[i]);
	}
	printf("\nVECTOR\n");
		for(int i=0; i<tama; i++){
		printf("%d ", vector[i]);
	}
	int x=0;
	for(int i=0; i<tama; i++){
		if(vector[i]<=50&&vector[i]>=0)
			if(vector[i]%2==0){
				lista1[x]=vector[i];
				x++;
			}
	}
	printf("\nLISTA 1\n");
	for(int i=0; i<x; i++){
		printf("%d ", lista1[i]);
	}
	x=0;
	for(int i=0; i<tama; i++){
		if(vector[i]<=100&&vector[i]>=51)
		if(vector[i]%2==1){
			lista2[x]=vector[i];
			x++;
		}
	}
	printf("\nLISTA 2\n");
	for(int i=0; i<x; i++){
		printf("%d ", lista2[i]);
	}
	x=0;
	for(int i=0; i<tama; i++){
		if(vector[i]>=101){
			lista3[x]=vector[i];
			x++;
		}
	}
	printf("\nLISTA 3\n");
	for(int i=0; i<x; i++){
		printf("%d ", lista3[i]);
	}
}
else{
	system("CLS");
	printf("MINIMO 2 Y MAXIMO 20!!!");
	Sleep(1000);
	system("CLS");
	return main();
}

}
