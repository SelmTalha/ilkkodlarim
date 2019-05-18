#include <stdio.h>
#include <conio.h>
int main(){
	char ch;
	FILE *fp;
	fp=fopen("7.txt","r");
	while(!feof(fp)){
		ch=getc(fp);
		printf("\n\t%c",ch);
	}
	getch();
}
