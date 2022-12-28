#include <stdio.h>

int main(){
    for(int y=1,x=1; y<=9 ;x++){
        printf("%d*%d=%d\t",y,x,y*x);
        x<9 ? x:(x=0,y++,printf("\n"));
        }
    return 0;
}
