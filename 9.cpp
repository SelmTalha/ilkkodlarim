#include <stdio.h>
#include <conio.h>
typedef enum{
	BilimKurgu,
	Korku,
	Gerilim,
	Romantik,
	Dramatik,
	Macera,
	Polisiye,
}filmturleri;
typedef enum{
	bay,
	bayan,
}cinsiyet;
typedef struct{
	
	int yas;
	char *isim;
	char *kangrubu;
	filmturleri film;
	cinsiyet c;
}insan;
int main(){
	insan selim;
	selim.yas=18;
	selim.c=bay;
	selim.kangrubu="0RH+";
	selim.film=BilimKurgu;
	printf("\n\t\tAdi:Selim\n");
	printf("\t\tYas:%d\n\t\tCinsiyet:%u\n\t\tKangrubu:%s\n\t\tFilm Turu:%u\n",selim.yas,selim.c,selim.kangrubu,selim.film);
	printf("\n(0:Bay , 1:Bayan)\n");
	printf("(0-BilimKurgu)\n(1-Korku)\n(2-Gerilim)\n(3-Romantik)\n(4-Dramatik)\n(5-Macera)\n(6-Polisiye)");
}
