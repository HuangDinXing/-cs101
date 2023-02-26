#include <stdio.h>

int main() {
    char a[] = "-99acbc";
    char b[] = "99acbc";
    char c[] = "ac-99bc";
    int i, j, num;

    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            j = i;
            while (a[j-1] == '-' && j > 0) { // Check if there is a negative sign before the number
                j--;
            }
            if (j != i) { // If there was a negative sign before the number
                printf("-");
            }
            while (a[i] >= '0' && a[i] <= '9') { // Extract the number
                printf("%c", a[i]);
                i++;
            }
            
            printf(" ");
            printf("\n");
        }
    }

    for (i = 0; b[i] != '\0'; i++) {
        if (b[i] >= '0' && b[i] <= '9') {
            j = i;
            while (b[j-1] == '-' && j > 0) {
                j--;
            }
            if (j != i) {
                printf("-");
            }
            while (b[i] >= '0' && b[i] <= '9') {
                printf("%c", b[i]);
                i++;
            }
            
            printf(" ");
            printf("\n");
        }
    }

    for (i = 0; c[i] != '\0'; i++) {
        if (c[i] >= '0' && c[i] <= '9') {
            j = i;
            while (c[j-1] == '-' && j > 0) {
                j--;
            }
            if (j != i) {
                printf("-");
            }
            while (c[i] >= '0' && c[i] <= '9') {
                printf("%c", c[i]);
                i++;
            }
            
            printf(" ");
            printf("\n");
        }
    }

    return 0;
}
