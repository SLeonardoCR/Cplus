/*E3p154N_6A_5        Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:06/12/2019*/
#include <stdio.h>
#include <windows.h>
int matriz[5][5], vect[10];
void ColumnasPares(), ColumnasImpares(), Final();
void LlenarVector(){
	int x=0, select=0;
	for(int i=0; i<10; i++){
		do
		x=(rand()%75);
		while(x<=25||x>=75);
		
		if(x>=25&&x<=75)
		vect[i]=x;
		printf("%d ", vect[i]);
	}
	printf("\n\n(2) para llenar las columnas impares de una matriz con numeros aleatorios entre 1 y 50	");
	scanf("%d", &select);
	if(select==2)
	ColumnasImpares();
}

void ColumnasImpares(){
	int x=0, select=0;
	for(int i=0; i<5; i++){
	for(int j=0; j<5; j++){
			if(j%2==0){
			do{
			x=(rand()%100);
			}while(x>=50||x<=1);
			matriz[i][j]=x;
			printf("%d	", matriz[i][j]);
			}
	}
	printf("\n");
}
	printf("\nIngrese (3) para Llenar columnas pares de una matriz con numeros aleatorios entre 51 y 100	");
	scanf("%d", &select);
	if(select==3){
		ColumnasPares();
	}
}

void ColumnasPares(){
	int x=0, select=0;
	for(int i=0; i<5; i++){
	for(int j=0; j<5; j++){
			if(j%2==1){
			do{
			x=(rand()%100);
			}while(x>=100||x<=51);
			matriz[i][j]=x;
			printf("     %d", matriz[i][j]);
			}
	}
	printf("\n");
}
	printf("Ingrese 4 para el paso final	");
	scanf("%d", &select);
	if(select==4)
	Final();
}

void Final(){
	printf("\n\nMATRIZ\n");
	for(int i=0; i<5; i++){
	for(int j=0; j<5; j++){
		printf("%d ", matriz[i][j]);
}
printf("\n");
}
	printf("\nVECTOR\n");
	for(int i=0; i<10; i++)
	printf("%d ", vect[i]);
}


int main(){
	int selec=0;
	printf("(1) para Llenar e imprimir un vector con números aleatorios entre 25 y 75	");
	scanf("%d", &selec);
	if(selec==1)
	LlenarVector();

}
