#include <stdio.h>
#include <string.h>
int main() {
    char a[] = "AABBBCCCCddd";
    int count[256] = {0}; // 初始化计数数组
    int len = strlen(a);
    int i, j;
    
    // 计算每个字符出现的次数
    for (i = 0; i < len; i++) {
        char c = a[i];
        for (j = 0; j < 256; j++) {
            if (c == j) {
                count[j]++;
                break;
            }
        }
    }
    
    // 输出每个字符及其出现次数
    for (i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c%d", i, count[i]);
        }
    }
    printf("\n");
    
    return 0;
}
