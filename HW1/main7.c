#include <stdio.h>

int main() {
    char a[] = "10001111";
    char b[] = "10011110";
    int x = strtol(a, NULL, 2);
    int y = strtol(b, NULL, 2);
    printf("%02X\n", x);
    printf("%02X\n", y);
    return 0;
}
