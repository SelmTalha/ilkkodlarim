//Soru:Kullan�c�dan iki say�y� bast�rarak b�y�k olan� ekrana bast�ran kod
#include <stdio.h>
#include <conio.h>
int main(){
    int a;
    int b;
    printf("Birinci sayiyi giriniz:");
    scanf("%d",&a);
    printf("Ikinci sayiyi giriniz:");
    scanf("%d",&b);
    if(a>b){
            printf("Buyuk sayi:%d",a);
            }
    else if(a<b){
         printf("Buyuk sayi:%d",b);
         }
    else{
         printf("Sayilar esittir");
         }
    getch();
    }

