
#include <stdio.h>
void add(int *p, int n) {
    for (int i = 1; i < n; i++) {
        p[0] += p[i];
    }
    return ;
}
int main() {
    int arr[10] = {1, 2, 3};
    add(arr, 3);
    printf("%d\n", arr[0]);
    return 0;
}