#include <stdio.h>
#define MAX_N 1000
int q[MAX_N + 5], head, tail;

void interval_max_number(int *a, int n, int m) {
    head = tail = 0;
    for (int i = 0; i < n; i++) {
        // a[i] 入队，将违反单调性的从队列q中踢出
        while (head < tail && a[q[tail - 1]] < a[i]) {
            tail--;
        }

        // i入队;
        q[tail++] = i;
        // 判断队列头部元素是否出了窗口范围
        if (i - m == q[head]) {
            head++;
        }

        // 输出区间内最大值
        if (i + 1 >= m) {
            printf("interval(%d, %d)", i - m + 1, i);
            printf(" = %d\n", a[q[head]]);
        }
    }
    return ;
}

int main() {
    int a[] = {6, 4, 2, 10, 3, 8, 5, 9};
    // sizeof(数组名) / sizeof(数组类型);
    int n = sizeof(a) / sizeof(int), m = 3;
    interval_max_number(a, n, m);
    return 0;
}
