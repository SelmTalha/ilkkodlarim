#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	
	char isim[30];
	char *soyisim;
	soyisim=(char*)malloc(sizeof(char));
	printf("Isminizi giriniz :");
	scanf("%s",isim);
	printf("Soyisminizi giriniz :");
	scanf("%s",soyisim);
	printf("Tanistigimiza memnun oldum %s %s",isim,soyisim);
	printf("\nBosluk karaktere izin vermiyo \nsebebini arastir cozum yolu ara ! 08.12.2017");
	
	getch();
}
