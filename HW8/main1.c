#include <stdio.h>

int main(){
    int number=10;
    for (int i=0;i<number;i++){
        for(int a=10;a>i;a--){
            printf(" ");
        }
        for(int b=0;b<=i*2;b++){
            printf("*");
        }
        printf("\n");
    }    
}
