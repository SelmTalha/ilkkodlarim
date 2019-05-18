//Bir öðrencinin notu,100 üzerinden girildiðinde aþaðýdaki deðerlere göre 
//harf notu karþýlýðýný hesaplayan programý yazýnýz:
//90 ve üzeri AA -->if
//80 ile 90 arasý BA -->else if
//70 ile 80 arasý BB -->else if
//70 ve altý F -->else
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
