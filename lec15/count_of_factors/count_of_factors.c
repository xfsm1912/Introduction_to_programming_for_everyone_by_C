#include <stdio.h>
#define MAX_N 10000
int prime[MAX_N + 5] = {0};

void init_prime() {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (prime[i]) continue;
        // 素数中最小的素因子是其本身
        prime[i] = i;  
        for (int j = 2 * i; j <= MAX_N; j += i) {
            if (prime[j]) continue;
            // 如果 j 没有被标记过，就标记成 i
            prime[j] = i;
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i] == 0) prime[i] = i;
    }
    return ;
}

int g_cnt[MAX_N + 5];
void init_g_cnt() {
    // 1 的因数数量就是 1 个
    g_cnt[1] = 1;
    for (int i = 2; i <= MAX_N; i++) {
        int n = i, cnt = 0, p = prime[i];
        // 得到数字 n 中，包含 cnt 个最小素因子 p
        while (n % p == 0) {
            cnt += 1;
            n /= p;
        }
        // 此时数字 n 和最小素数 p 部分，就是互素的
        g_cnt[i] = g_cnt[n] * (cnt + 1);   
    }
    return ;
}

int main() {
    init_prime();
    init_g_cnt();
    int n;
    scanf("%d", &n);
    printf("%d\n", g_cnt[n]);
    return 0;
}