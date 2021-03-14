#include <stdio.h>

int main() {
    int a = 0x61626364;
    int *p = &a;
    char *q = (char *)&a; // 使用强制类型转换
    printf("%x %c\n", *p, *q);
    return 0;
}