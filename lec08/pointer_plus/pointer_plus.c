#include <stdio.h>

int main() {
    int a, *p = &a;
    char *q = (char *)&a;
    printf("%p %p\n", p, q);
    printf("%p %p\n", p + 1, q + 1);


    int arr[100] = {1, 2, 3, 4};
    int *r = arr;
    printf("%d %d\n", arr[1], r[1]);
    return 0;
}