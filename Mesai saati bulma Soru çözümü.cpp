//Bir �irket �al��anlar�na,fazla mesai �creti �demektedir.Sizden �creti hesaplayan bir program yazman�z isteniyor.
//Program�n �zellikleri a�a��daki gibidir:
//10 saate kadar saat ba��na 5 lira --> 10 saat �al��an ki�i 50 lira al�r.
//10-20 saat aras�nda,saat ba��na 3 lira --> 20 saate kadar 53-56-59-62...80 lira al�r.
//20 saatten sonras� i�in,saat ba��na 2 lira --> 82-84-86-88... diye devam eder.
#include <stdio.h>
#include <conio.h>
int main(){
    int saat;
    printf("Lutfen mesai saatini giriniz :");
    scanf("%d",&saat);
    if(saat<=10)//e�it oldu�unda da verelim.
    printf("Ucret :%d",saat*5);
    else if(saat>10&&saat<=20)//Burdada e�it olana paray� tam verdik.
    printf("Ucret :%d",10*5+(saat-10)*3);
    else
    printf("Ucret :%d",10*5+10*3+(saat-20)*2);
    getch();
}
    
