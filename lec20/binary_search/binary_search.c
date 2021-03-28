#include <stdio.h>
#include <math.h>
#define EPS 1e-7
double arr[100] = {4, 5, 6}, n;

// 切线段函数
int f(double x) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += (int)floor(arr[i] / x);
    }
    return cnt;
}

double binary_search(double *arr, double l, double r, int k) {
    if (r - l <= EPS) {
        return r;
    }

    double mid = (l + r) / 2.0;
    if (f(mid) < k) {
        return binary_search(arr, l, mid, k);
    }
    return binary_search(arr, mid, r, k);
}

int main() {
    n = 3;
    double l = 0, r = 6;
    int k = 4;
    double res; 
    res = binary_search(arr, l, r, k);
    printf("The longest segment is %lf\n", res);
    return 0;
}
