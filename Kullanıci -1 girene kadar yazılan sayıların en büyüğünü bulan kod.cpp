//Kullan�ci -1 girene kadar yaz�lan say�lar�n en b�y���n� bulan kod
#include <stdio.h>
#include <conio.h>
int main(){
    int girilen=0;
    int eb=0;
    while(girilen!=-1){
                       scanf("%d",&girilen);
                       if(girilen>eb)
                       eb=girilen;
                       }
    printf("eb: %d",eb);
    getch();
}
