
#include <stdio.h>
void add(int n, int m) {
    n += m;
    return ;
}
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    add(n, m);
    printf("%d\n", n);
    return 0;
}
