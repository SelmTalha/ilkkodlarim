//Bast���n�z say�n�n 8den b�y�k,k���k yada e�it olma durumunu hesaplayan program� yaz�n�z.
#include <stdio.h>
#include <conio.h>
#include <windows.h>//sleep ve clear komutlar�n� kullanmak i�in eklenen k�t�phane
int main(){
    int i;
    scanf("%d",&i);
    system("CLS");//Ekrandaki yaz�lar� silmeyi sa�lar.
    printf("Kontrol ediliyor...");
    Sleep(1000);//S her zaman b�y�k harfle yaz�lmal�d�r.(1000=1 saniye)
    if(i>8){
            printf("\n8'den buyuk");
            }
            else if(i<8){
                 printf("\n8'den kucuk");
                 }
                 else{
                           printf("\n8'e esit");
                           }
                           Sleep(1000);
                           system("cls");//CLS yada cls --> yaz� boyu fark etmez.
                 printf("\nBitti");
                 getch();
                 }

                 
