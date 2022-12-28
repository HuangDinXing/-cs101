#include <stdio.h>

int main(){
    int i=12345;
    int a,b,c;
    a=(i/1000)-((i/10000)*10);//a=2
    b=i%10;//b=5
    c=i-(a*1000)-b+a+(b*1000);
    printf("%d",c);
    return 0;
}
