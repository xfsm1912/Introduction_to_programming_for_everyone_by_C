
#include <stdio.h>
void calc(int x, int *p) {
    *p = x * x;
    return ;
}
int main() {
    int n, m;
    scanf("%d", &n);
    calc(n, &m);
    printf("%d\n", m);
    return 0;
}