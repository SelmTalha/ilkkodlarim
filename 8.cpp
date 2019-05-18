#include <stdio.h>
#include <conio.h>
int main(){
	FILE *fp;
	fp=fopen("8.txt","a");
	char isim[30];
	char soyisim[30];
	printf("Isminizi giriniz:");
	scanf("%s",isim);
	printf("Soyisminizi giriniz:");
	scanf("%s",soyisim);
	fprintf(fp,"\n%s\t\t%s",isim,soyisim);
}
