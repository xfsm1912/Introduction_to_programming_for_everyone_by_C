#include <stdio.h>
# define swap(a, b) {\
    __typeof(a) __temp = a;\
    a = b, b = __temp; \
}

int main() {
    int num_a = 123, num_b = 456;
    swap(num_a, num_b);
    printf("num_a = %d\n", num_a);
    printf("num_b = %d\n", num_b);
    return 0;
}

