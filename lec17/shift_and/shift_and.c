#include <stdio.h>

int shift_and(const char *str, const char *p_str) {
    int code[256] = {0}, m = 0;
    //初始化每一个字符的编码
    // |:按位或运算符，按二进制位进行“或”运算
    // 1 << i，1向左位移i位
    for (int i = 0; p_str[i]; i++, m++) {
        code[p_str[i]] |= (1 << i);
    }

    int p = 0;
    for (int i = 0; str[i]; i++) {
        p = (p << 1 | 1) & code[str[i]];
        // 如果p所对应的模式串最高位四1， 代表匹配成功
        if (p & (1 << (m - 1))) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char str[50] = "Hello World";
    char pattern[50] = "llo";
    if (shift_and(str, pattern)) {
        printf("The string text includes the pattern\n");
    }
    else {
        printf("The pattern is not in string text\n");
    }
}