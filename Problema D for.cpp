#include <stdio.h>
#define break 100
int num=10;
int main(){
    for (int i = 0; i < break; i+=10){
        printf("%d\n",num);
        num+=10;

    }
}
