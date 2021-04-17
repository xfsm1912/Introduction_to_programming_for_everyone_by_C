#include <stdio.h>

#define MAX_N 100
#define MAX_V 10000
int v[MAX_N + 5] = {10,20,7,14,12,8,16,32}, w[MAX_N + 5] =  {4,8,3,6,12,9,18,36};
int dp[MAX_N + 5][MAX_N + 5];

int get_dp(int n, int W) {
    // initialize dp[0]
    for (int i = 0; i <= W; i++) {
        dp[0][i] = 0;
    };

    // if dp[i-1] is true, calculate out the dp[i]
    // i is the ith item, j is the weight limitation of backpack 
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            // not select the ith item
            dp[i][j] = dp[i - 1][j];
            // compare with the maximum dp which select the ith item
            if (j >= w[i] && dp[i][j] < dp[i-1][j-w[i]] + v[i]) {
                dp[i][j] = dp[i-1][j-w[i]] + v[i];
            }
        }
    }
    return dp[n][W];
}

int main() {
    int a;
    a = get_dp(5, 25);
    printf("%d\n", a);
}