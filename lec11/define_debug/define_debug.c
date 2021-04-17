#include <stdio.h>
#define Debug
#ifdef Debug
#define MAX_N 1000
#else
#define MAX_N 5000
#endif 

int main() {
    printf("MAX_N = %d\n", MAX_N);
    return 0;
}


