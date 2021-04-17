#include <stdio.h>

int main() {
    struct point {
        int x, y;
    };

    struct point p1, p2;
    p1.x = 2;
    p1.y = 3;
    p2.x = 7;
    p2.y = 9;

    printf("%zu\n", sizeof(p1));
    printf("%zu\n", sizeof(struct point));
    return 0;
}
