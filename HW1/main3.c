#include <stdio.h>
#include <string.h>

int main() {
    char arr[] = "ABC123";
    int len = strlen(arr);
    int shift = 4;

    printf("%s\n", arr);

    // Shift array elements to left
    for (int i = 0; i < shift; i++) {
        char temp = arr[0];
        for (int j = 1; j < len; j++) {
            arr[j - 1] = arr[j];
        }
        arr[len - 1] = temp;
    }

    printf("%d\n", shift);
    printf("%s\n", arr);

    return 0;
}
