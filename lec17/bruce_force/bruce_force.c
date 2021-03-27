#include <stdio.h>

// 暴力匹配算法程序
int bruce_force(const char *text, const char *p) {
    // 遍历文本串每一位
    // 这里的遍历方法是从i=0开始，一直提取text[i],如果有字符，就返回非0数字，继续循环，如果没有字符
    //，就返回0，停止循环
    for (int i = 0; text[i]; i++) {
        int flag = 1;
        // 从文本串的第 i 位开始与模式串进行匹配
        for (int j = 0; p[j]; j++) {
            if (text[i + j] == p[j]) continue;
            // 当代码到了这里，说明某一位不匹配
            flag = 0;
            break;
        }
        if (flag) return 1;
    }
    return 0;
}

int main() {
    char text[12] = "hello world";
    char pattern[12] = "llo";
    bruce_force(text, pattern);
    return 0;
}