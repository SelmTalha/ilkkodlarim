//Kullan�c�dan 5 adet say� okuyup en b�y���n� ekrana yazan kod
#include <stdio.h>
#include <conio.h>
int main(){
    int girilen;
    int eb=0;
    for(int i=0;i<5;i++){
            scanf("%d",&girilen);
            if(girilen>eb)
            eb=girilen;
            }
            printf("eb: %d",eb);
            getch();
}
            
