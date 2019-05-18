//Bir þirket çalýþanlarýna,fazla mesai ücreti ödemektedir.Sizden ücreti hesaplayan bir program yazmanýz isteniyor.
//Programýn özellikleri aþaðýdaki gibidir:
//10 saate kadar saat baþýna 5 lira --> 10 saat çalýþan kiþi 50 lira alýr.
//10-20 saat arasýnda,saat baþýna 3 lira --> 20 saate kadar 53-56-59-62...80 lira alýr.
//20 saatten sonrasý için,saat baþýna 2 lira --> 82-84-86-88... diye devam eder.
#include <stdio.h>
#include <conio.h>
int main(){
    int saat;
    printf("Lutfen mesai saatini giriniz :");
    scanf("%d",&saat);
    if(saat<=10)//eþit olduðunda da verelim.
    printf("Ucret :%d",saat*5);
    else if(saat>10&&saat<=20)//Burdada eþit olana parayý tam verdik.
    printf("Ucret :%d",10*5+(saat-10)*3);
    else
    printf("Ucret :%d",10*5+10*3+(saat-20)*2);
    getch();
}
    
