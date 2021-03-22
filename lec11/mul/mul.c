#include <stdio.h>
#define mul(a, b) a * b

int main() {
    printf("mul(3, 5) = %d\n", mul(3, 5));
    printf("mul(3 + 4, 5) = %d\n", mul(3 + 4, 5));
    return 0;
}