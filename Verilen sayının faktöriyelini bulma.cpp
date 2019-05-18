//Verilen sayýnýn faktöriyelini bulma
#include <stdio.h>
#include <conio.h>
int fact(int);
int main(){
    printf("Bir sayý giriniz:");
    int x;
    scanf("%d",&x);
    printf("Faktöriyeli: %d",fact(x));
    getch();
}
int fact(int x){
    int sonuc=1;
    int i;
    for(i=1;i<=x;i++)
    sonuc*=i;
    return sonuc;
}
    
