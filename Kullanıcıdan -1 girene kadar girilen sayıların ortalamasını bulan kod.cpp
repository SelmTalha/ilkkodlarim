//Kullan�c�dan -1 girene kadar girilen say�lar�n ortalamas�n� bulan kod
#include <stdio.h>
#include <conio.h>
int main(){
    int girilen=0;
    float tane=0;
    float toplam=0;
    while(girilen!=-1){
    scanf("%d",&girilen);
    tane++;
    toplam=toplam+girilen;
    }
    tane--;
    toplam++;
    printf("Kac sayi girildi : %.f ",tane);
    printf("\nToplam : %.f ",toplam);
    printf("\nOrtalama : %3.2f ",toplam/tane);
    getch();
}
    
