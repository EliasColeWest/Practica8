#include<stdio.h>


int main(){

    int contador = 1 ;
    int x, y;
    int tablax=1;
	int tablay=1;
    printf("Primer numero\n");
    scanf("%d",&x);
    printf("Segundo numero\n");
    scanf("%d",&y);
    while(contador<=10){
        tablax=x*contador;
        printf("\n%d Por %d contador es %d",x,contador,tablax);
        tablay=y*contador;
        printf("\n%d Por %d contador es %d",y,contador,tablay);
        contador=contador+1;
    }
	return 0;
}
