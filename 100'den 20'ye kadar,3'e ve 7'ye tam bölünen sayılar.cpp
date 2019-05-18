//100'den 20'ye kadar,3'e ve 7'ye tam bölünen sayýlarý,büyükten küçüðe doðru yazdýralým.
#include <stdio.h>
#include <conio.h>
int main(){
    for(int i=100;i>=20;i--){
            if(i%3==0&&i%7==0)
            printf(" %d ",i);
            }
            getch();
    }
