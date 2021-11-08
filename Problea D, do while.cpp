#include <stdio.h>
#define break 100
int num=10;
int main(){
    do {
        printf("%d\n",num);
        num+=10;
        
    }while(num <= break);
}
