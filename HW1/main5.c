#include <stdio.h>

int main() {
    char a[] = {-9, 8, 7, 6, 5, -4, 3, -2, 1};
    int i = 4;
    int n = sizeof(a) / sizeof(char); 

    for (int k = 0; k < i; k++) { 
        char max = a[0];
        int max_index = 0;

        for (int j = 1; j < n; j++) { 
            if (a[j] > max) {
                max = a[j];
                max_index = j;
            }
        }

        a[max_index] = a[n-1];
        n--; 
    }

    printf("%d\n", (int)a[n]); 

    return 0;
}
