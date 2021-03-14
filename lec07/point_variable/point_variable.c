#include <stdio.h>

int main() {
    int a = 123, *p = &a;
    printf("%d %p %d\n", a, p, *p);
    return 0;
}