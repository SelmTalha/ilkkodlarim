#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef enum{
	bay,
	bayan,
}cinsiyet;
typedef struct{
	int yas;
	char *isim;
	cinsiyet c;
}insan;
int emeklimi(insan *birey){
	
	if(birey->c == bay && birey->yas >55)
	return 1;
	if(birey->c == bayan && birey->yas >50)
	return 1;
	return 0;
}

int main(){
	int a;
	insan ali;
	ali.yas=32;
    ali.c=bay;
	printf("Alinin yasi %d \n",ali.yas);
	insan *mahmud;
	mahmud =(insan*)malloc(sizeof(insan));
	mahmud -> yas =56;
	printf("Mahmudun yasi %d",mahmud->yas);
	printf("\n(Emekli:1 , Emekli degil:0)");
	printf("\n(Baylarda 55 yas uzeri,bayanlarda 50 yas uzeri Emekli sayilir)");
	printf("\nAli emekli mi ?    -->\t%d",emeklimi(&ali));
	mahmud -> c=bay;
	printf("\nMahmud emekli mi ? -->\t%d",emeklimi(mahmud));
	getch();
}
