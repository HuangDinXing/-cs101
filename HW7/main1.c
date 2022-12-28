#include <stdio.h>

int main(){
    int number=7;
    int a;
    for(int i=1;i<number+1;i++){
        for(int n=7;n>i;n--){
            printf(" ");
        }
        for(a=1;a<=i;a++){
            printf("%d ",i);
        }
         printf("\n");
    }    
}
