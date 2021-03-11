#include <stdio.h>
int main() {
    double num;
    int n;
    char str[100];
    scanf("%lf%d", &num, &n);
    // for example, %.1lf, 1 <- %d <- n 
    sprintf(str, "%%.%dlf\n", n); // %% outputs one %
    printf(str, num);
    return 0;
}