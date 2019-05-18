//Girilen sayýnýn asal sayý olup olmadýðýný bulan kod
#include <stdio.h>
#include <conio.h>
int main(){
    int a=1,b;
    scanf("%d",&b);
    int flag=0;
    while(a<b-1){
                 a++;
                 if(b%a==0){
                            flag=1;
                            break;
                            }
                            }
     if(flag==0)
     printf("sayi asaldir");
     else
     printf("sayi asal degildir");
     getch();
     }                       
                 
