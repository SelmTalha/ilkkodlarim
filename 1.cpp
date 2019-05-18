#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main(){
	int a;
	int b;
	printf("Bir sayi giriniz:");    
	scanf("%d",&a);
		printf("Bir sayi daha giriniz:");
		scanf("%d",&b);
			printf("1.Girilen Sayi:%d\n",a);
			Sleep(1000);
				printf("2.Girilen Sayi:%d",b);
				Sleep(1000);
					printf("\nToplama Islemi:%d\n",a+b);
					Sleep(4000);
					system("CLS");//Ekrandaki yazýlarý silmeyi saðlar.
    				printf("Esitlik kontrol ediliyor.\n");
    				Sleep(1000);//S her zaman büyük harfle yazýlmalýdýr.(1000=1 saniye)
	if(a>b)
	printf("1.girilen 2.girilenden buyuktur.");
		else if(a<b)
		printf("1.girilen 2.girilenden kucuktur.");
			else
			printf("1.girilen 2.girilene esittir.");
			Sleep(1000);
			system("CLS");
			Sleep(1000);
			printf("Bitti");
			Sleep(1000);
			system("CLS");
	getch();
}

