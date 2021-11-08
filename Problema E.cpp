#include<stdio.h>


int main(){
    int contador = 0 ;
    while (contador <= 7)
    {
        if (contador==1 || contador==7)
        {
            printf("1\n");
            
        }

        if (contador==2 || contador==6)
        {
            printf("1  2\n");
            
        }

        if (contador==3 || contador==5)
        {
            printf("1  2  3\n");
            
        }

        if (contador==4)
        {
            printf("1  2  3  4\n");
            
        }
        contador=contador+1;
    }
    
    
	return 0;
}
