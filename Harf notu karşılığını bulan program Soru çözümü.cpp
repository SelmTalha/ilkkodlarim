//Bir ��rencinin notu,100 �zerinden girildi�inde a�a��daki de�erlere g�re 
//harf notu kar��l���n� hesaplayan program� yaz�n�z:
//90 ve �zeri AA -->if
//80 ile 90 aras� BA -->else if
//70 ile 80 aras� BB -->else if
//70 ve alt� F -->else
#include <stdio.h>
#include <conio.h>
int main (){
    int a;
    printf("Ogrencinin notunu giriniz :");
    scanf("%d",&a);
    if(a>=90)
    printf("Notun duzeyi AA");
    else if(a>=80)
    printf("Notun duzeyi BA");
    else if(a>=70)
    printf("Notun duzeyi BB");
    else
    printf("Notun duzeyi F");
    getch();
}
