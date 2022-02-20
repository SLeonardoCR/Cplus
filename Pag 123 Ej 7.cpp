#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 int main()
 {
 	int i=0;
	 system("COLOR 0D");
	 
	 for(i=0;i<=119;i++)
	 {
	 gotoxy(i,0);
	 printf("*");
	 }
	 
	 for(i=0;i<=25;i++)
	 {
	 gotoxy(0,i);
	 printf("*");
	 }
	 
	 for(i=0;i<=119;i++)
	 {
	 gotoxy(i,26);
	 printf("*");
	 }
	 
	 for(i=1;i<=25;i++)
	 {
	 gotoxy(119,i);
	 printf("*");
	 }
	 
	 gotoxy(20,12);
	 printf("SORRY MAESTRA");
	 Sleep(1000);
	 system("COLOR 0A");
	 printf(" NO SUPE COMO PONER");
	 Sleep(1000);
	 system("COLOR 0B");
	 printf(" CADA ASTERISCO DE");
	 Sleep(1000);
	 system("COLOR 0C");
	 printf(" DIFERENTE COLOR,");
	 Sleep(1000);
	 system("COLOR 0D");
	 printf(" SOY UN FRACASO T-T");
	 gotoxy(55,15);
	 Sleep(1000);
	 printf("ATTE:");
	 Sleep(900);
	 printf(" LEO :)");
	 Sleep(300);
	 
	 gotoxy(0,26);
	 
	 return(0);
}
