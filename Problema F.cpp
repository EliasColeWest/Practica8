#include<stdio.h>


int main(){
    int hola =1;
    int contador = 0 ;
    while (contador < 10)
    {
        if (hola == 1 )
        {
            printf("Hola\n");
            hola=0;
        }else{
            printf("Adios\n");
            hola=1;
        }
        
        
        contador=contador+1;
    }
    
    
	return 0;
}
