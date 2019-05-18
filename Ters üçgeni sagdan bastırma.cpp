//Ters üçgeni saðdan bastýrma
#include <stdio.h>
#include <conio.h>
int main(){
    for(int i=5;i>=1;i--){
            for(int a=0;a<5-i;a++)
            printf(" ");
            for(int j=1;j<=i;j++)
                    printf("*");
                    printf("\n");
                    }
                    getch();
}
