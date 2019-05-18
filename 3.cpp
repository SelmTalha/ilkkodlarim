#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main(){
	
			printf("SORU-1:\n");
			printf("1'den 1000'e kadar 3 ve 7'ye tam bolunen sayilari ekrana bastirin ?\n");
	int a;
	for(a=1;a<=1000;a++){
		if(a%3==0&&a%7==0)
		printf("%d\n",a);
	}
	
			printf("SORU-2:\n");
			printf("27'ye kadarki tek sayilarla beraber adini yazdir ?\n");
	int b;
	for(b=1;b<=27;b+=2){
		printf("%d-Selim Talha Caglar\n",b);
	}
	
			printf("SORU-3:\n");
			printf("Girilen sayinin asal olup olmadigini bulunuz?\n");
	int i=1,j;
	printf("Test etmek istediginiz sayiyi giriniz :");
	scanf("%d",&j);
	int flag=0;
	while(i<j-1){
		i++;
		if(j%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("Sayi asaldir.");
	else
	printf("Sayi asal degildir.");
	Sleep(3000);
	system("CLS");
	getch();
}
