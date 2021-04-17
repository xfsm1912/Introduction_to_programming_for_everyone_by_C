
/*************************************************************************
  > File Name: calc.cpp
  > Author: hug
  > Created Time: 五  3/27 22:13:04 2020
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define INF 0x3f3f3f3f

/*
* 计算表达式 str 从 l 到 r 位置的值
* */
int calc(const char *str, int l, int r) {
    /*
    * pos : 根节点运算符的位置，初始化为 -1
    * priority : 根节点运算符的权重
    * temp : 由括号产生的额外权重
    * */
    int pos = -1, priority = INF - 1, temp = 0;
    for (int i = l; i <= r; i++) {
        int cur_priority = INF;
        switch (str[i]) {
            case '(': temp += 100; break;
            case ')': temp -= 100; break;
            case '+':
            case '-': cur_priority = 1 + temp;
            case '*':
            case '/': cur_priority = 2 + temp;
            default: break;
        }
        /*
        * cur_priority : 当前运算符的优先级
        * 更新区间内最低优先级的运算符的位置
        * */
        if (cur_priority <= priority) {
            pos = i;
            priority = cur_priority;
        }
    }

    /*
    * 如果 pos == -1，说明这一段表达式中没有运算符
    * 说明，这一段表达式中只有数字，也就是递归到了树的叶子结点
    * */
    if (pos == -1) {
        int num = 0;
        for (int i = l; i <= r; i++) {
            if (str[i] < '0' || str[i] >= '9') continue;
            num = num * 10 + (str[i] - '0');
        }
        return num;
    }

    /*
    * 递归计算得到运算符左边及右边表达式的值
    * 再根据当前运算符，得到当前表达式的值
    * */
    int a = calc(str, l, pos - 1);
    int b = calc(str, pos + 1, r);
    switch (str[pos]) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0;
}

int get_val(const char *str) {
    return calc(str, 0, strlen(str) - 1);
}

int main() {
    char str[1000];
    while (scanf("%[^\n]", str) != EOF) {
        getchar();
        printf("%s = %d\n", str, get_val(str));
    }
    return 0;
}