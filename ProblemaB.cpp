#include<stdio.h>


int main(){
  int X = 0; 
	int Y = 0;
	int contador = 0;
	int pot = 1;

    printf("Ingresa un numero\n");
    scanf("%d",&X);
    printf("Ingresa una potencia\n");
    scanf("%d",&Y);
    while (contador < Y)
    {
        pot = pot * X;
        contador=contador+1;
    }
    printf("Resultado %d", pot);
    
	return 0;
}
