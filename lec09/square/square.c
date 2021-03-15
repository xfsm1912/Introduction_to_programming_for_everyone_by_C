#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", square(n));
    return 0;
}
