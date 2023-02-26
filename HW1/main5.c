#include <stdio.h>

int main() {
    char a[] = {-9, 8, 7, 6, 5, -4, 3, -2, 1};
    int i = 4;
    int n = sizeof(a) / sizeof(char); // 計算陣列大小

    for (int k = 0; k < i; k++) { // 逐步找出前 i 大的數
        char max = a[0];
        int max_index = 0;

        for (int j = 1; j < n; j++) { // 找出目前未找到的最大值
            if (a[j] > max) {
                max = a[j];
                max_index = j;
            }
        }

        a[max_index] = a[n-1]; // 將已找到的最大值移至陣列末端
        n--; // 更新未找到最大值的陣列大小
    }

    printf("%d\n", (int)a[n]); // 最後剩下的數即為第 i 大的數

    return 0;
}
