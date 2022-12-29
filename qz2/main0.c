#include <stdio.h>

int main()
{
    for (int row=5;row>0;row--){
        for(int a=5;a>row;a--){
            printf("  ");
        }
        for(int i=(row*2)-1;i>0;i--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
