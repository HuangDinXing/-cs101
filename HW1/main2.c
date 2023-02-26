#include <stdio.h>

#define MAX_LEN 1000

int main() {
    char input[] = "A3B2C4A9";
    char output[MAX_LEN] = {0};
    int len = 0;
    int max_len = MAX_LEN;

    for (int i = 0; input[i]; i += 2) {
        char c = input[i];
        int freq = input[i + 1] - '0';
        for (int j = 0; j < freq; j++) {
            output[len++] = c;
            if (len == max_len) {
                printf("Error: Output buffer overflow!\n");
                return 1;
            }
        }
    }

    printf("%s\n", output);

    return 0;
}
