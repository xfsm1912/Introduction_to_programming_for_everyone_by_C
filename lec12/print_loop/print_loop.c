#include <stdio.h>


int arr[100];
void print_loop(int k, int n, int total_k) {
    if (k == 0) {
        for (int i = total_k; i >= 1; i--) {
            if (i != total_k) printf(" ");
            printf("%d", arr[i]);
        }
        printf("\n");
        return ;
    }
    for (int i = 1; i <= n; i++) {
        arr[k] = i;
        print_loop(k - 1, n, total_k);
    }
    return ;
}

int main() {
    print_loop(2, 3, 2);
    return 0;
}