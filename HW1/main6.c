#include <stdio.h>

void toRoman(char c) {
    switch(c) {
        case '1':
            printf("I ");
            break;
        case '2':
            printf("II ");
            break;
        case '3':
            printf("III ");
            break;
        case '4':
            printf("IV ");
            break;
        case '5':
            printf("V ");
            break;
        case '6':
            printf("VI ");
            break;
        case '7':
            printf("VII ");
            break;
        case '8':
            printf("VIII ");
            break;
        case '9':
            printf("IX ");
            break;
        default:
            break;
    }
}

int main() {
    char a[] = "81c8g8u168";
    int i = 0;
    while(a[i] != '\0') {
        switch(a[i]) {
            case 'c':
                printf("c ");
                break;
            case 'g':
                printf("g ");
                break;
            case 'u':
                printf("u ");
                break;
            default:
                toRoman(a[i]);
                break;
        }
        i++;
    }
    return 0;
}
