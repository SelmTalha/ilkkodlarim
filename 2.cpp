#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main(){
	//SAGLIK PÝDE ÜCRETLENDÝRME ASADFJSDFSADJF :D
	int mesai;
	int y;
	printf("\t\t\tSAGLIK PIDE");
	printf("\n\t\t    UCRETLENDIRME SISTEMI");
	printf("\n\n8 SAAT VE ALTINDA CALISANLAR (PART-TIME) 	-->	SAATLIK 3 LIRA");
	printf("\n8 VE 16 SAAT ARASI CALISANLAR (16 SAAT DAHIL) 	--> 	SAATLIK 5 LIRA");
	printf("\n16 SAAT VE 24 SAAT ARASI FULL CALISANLAR 	-->	SAATLIK 10 LIRA");
	printf("\n\n\tUcretlendirme Paneline Yonlendiriliyorsunuz..");
	Sleep(11000);
	system("CLS");
			Sleep(1000);
	printf("Mesai Saatini giriniz:");//saat baþý 3 lira 8 saat üzeri çalýþanlara 4 lira 16 saat ve üzeri 6
	scanf("%d",&mesai);
	Sleep(1000);
	if(mesai<=8)
	printf("Part - Time ucretiniz :%d",mesai*3);
		else if(mesai<=16)
		printf("Part - Time ucretiniz :%d",mesai*5);
			else if(mesai<=24)
			printf("Part - Time ucretiniz :%d",mesai*10);
				else {
				printf("Fatal Error!");
				printf("\n\tMesai Saatini yanlis yada hatali girdiniz.\n\t\tLutfen kontrol ediniz !");
			}
			Sleep(3000);
			system("CLS");
			printf("\t\t\tSAGLIK PIDE");
			printf("\n\t\t    UCRETLENDIRME SISTEMI");
			printf("\n\n\t     (Emeginize saglik.Tesekkur ederiz.)\n\n\n\n");
			
	getch();
			
}
