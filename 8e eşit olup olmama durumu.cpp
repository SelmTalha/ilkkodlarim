//Bastýðýnýz sayýnýn 8den büyük,küçük yada eþit olma durumunu hesaplayan programý yazýnýz.
#include <stdio.h>
#include <conio.h>
#include <windows.h>//sleep ve clear komutlarýný kullanmak için eklenen kütüphane
int main(){
    int i;
    scanf("%d",&i);
    system("CLS");//Ekrandaki yazýlarý silmeyi saðlar.
    printf("Kontrol ediliyor...");
    Sleep(1000);//S her zaman büyük harfle yazýlmalýdýr.(1000=1 saniye)
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
                           system("cls");//CLS yada cls --> yazý boyu fark etmez.
                 printf("\nBitti");
                 getch();
                 }

                 
