#include <stdio.h>

int main(){
    double pi=4.0f;
    double b;
    double a=0;
    for(double i=1;i<272250;i=i+4){
        pi=(4/i)-(4/(i+2));
        b=a+pi;
        a=b;
        printf("x=%f  ",i);
        printf("%f\n",a);
    }
    return 0;
}
