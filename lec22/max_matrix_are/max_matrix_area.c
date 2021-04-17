#include <stdio.h>
#define MAX_N 1000
#define max(a, b) ((a) > (b) ? (a) : (b))

int s[MAX_N + 5], top;
int l[MAX_N + 5], r[MAX_N + 5];
int max_matrix_area(int *h, int n) {
    h[0] = h[n + 1] = -1;
    top = -1, s[++top] = 0;
    // 找到每一块木板，左边第一块比其矮的木板编号
    for (int i = 1; i <= n; i++) {
        while (top >= 0 && h[s[top]] >= h[i]) --top;
        l[i] = s[top];
        s[++top] = i;
    }
    // 找到每一块木板，右边第一块比其矮的木板编号
    top = -1, s[++top] = n + 1;
    for (int i = n; i >= 1; i--) {
        while (top >= 0 && h[s[top]] >= h[i]) --top;
        r[i] = s[top];
        s[++top] = i;
    }
    // 在所有木板中，找到面积最大的矩形
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, (r[i] - l[i] - 1) * h[i]);
    }
    return ans;
}

int main() {
    int h[] = {-1, 2, 1, 4, 5, 1, 3, 3, -1};
    int n = sizeof(h) / sizeof(int) - 2;
    int res;
    res = max_matrix_area(h, n);
    printf("最大面积为：%d\n", res);
    return 0;
}