/*E21p170N_6A_5        Elaboro: Campos Rangel Sergio Leonardo
No. De Lista:5        Fecha:11/10/2019*/
#include <stdio.h>
#include <windows.h>
#include <string.h>
int main(){
	char pais[11][11], capital[11][14], choose[13];
	strcpy(pais[0],"alemania"); strcpy(pais[1],"argentina"); strcpy(pais[2],"brasil"); strcpy(pais[3],"canada"); strcpy(pais[4],"chile"); 
	strcpy(pais[5],"acuador"); strcpy(pais[6],"inglaterra"); strcpy(pais[7],"francia"); strcpy(pais[8],"italia"); strcpy(pais[9],"japon"); 
	strcpy(pais[10],"mexico");
	strcpy(capital[0],"berlin"); strcpy(capital[1],"buenos aires"); strcpy(capital[2],"brasilia"); strcpy(capital[3],"ottawa"); strcpy(capital[4],"santiago"); 
	strcpy(capital[5],"quito"); strcpy(capital[6],"londres"); strcpy(capital[7],"paris"); strcpy(capital[8],"roma"); strcpy(capital[9],"tokio"); 
	strcpy(capital[10],"d.f.");
	printf("CAPITALES DISPONIBLES:\tPAISES DISPONIBLES:\nBerlin\t\t\tMexico\nBuenos Aires\t\tJapon\nBrasilia\t\tItalia\nOttawa\t\t\tFrancia\nSantiago\t\tInglaterra\nQuito\t\t\tEcuador\nLondres\t\t\tChile\nParis\t\t\tItalia\nRoma\t\t\tBrasil\nTokio\t\t\tArgentina\nD.F\t\t\tAlemania\n\n");
	/*lA IMPRESION DE LA LISTA FUE IDEA DE CARLOS MANUEL PÉREZ MALLARD
	LE PEDÍ SOLO LA LISTA A EL E INVESTIGAMOS COMO USAR LA LIBRERIA STRING.H*/
	printf("Ingrese el pa%cs que quisiera saber su capital o viceversa\n", 161);
	scanf("%[^\n]", choose);
	strlwr(choose);
	for(int i=0;i<11;i++){
		if(strcmp(choose, pais[i])==0){
			printf("%s", capital[i]);
			int x=0;
			printf("\n1 para hacerlo de nuevo 2 para salir\n");
			scanf("%d", &x);
			fflush(stdin);
			if(x==1){
				system("CLS");
				return main();
			}
		}
	}
	for(int i=0;i<11;i++){
		if(strcmp(choose, capital[i])==0){
			puts(pais[i]);
			int x=0;
			printf("\n1 para hacerlo de nuevo 2 para salir");
			scanf("%d", &x);
			fflush(stdin);
			if(x==1){
				system("CLS");
				return main();
			}
		}
	}
}

