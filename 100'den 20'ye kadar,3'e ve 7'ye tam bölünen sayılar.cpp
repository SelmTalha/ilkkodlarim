//100'den 20'ye kadar,3'e ve 7'ye tam b�l�nen say�lar�,b�y�kten k����e do�ru yazd�ral�m.
#include <stdio.h>
#include <conio.h>
int main(){
    for(int i=100;i>=20;i--){
            if(i%3==0&&i%7==0)
            printf(" %d ",i);
            }
            getch();
    }
