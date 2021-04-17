#include <stdio.h>

int main() {
    int y, m, d, X; // define variables of year, month, day and X 
    scanf("%d%d%d", &y, &m, &d); // read the year, month and day 
    scanf("%d", &X); // read X
    for (int i = 0; i < X; i++) {
        d += 1;
        switch (m)
        {
        case 1: {
            if (d > 31) d = 1, m += 1;
        } break;
        case 2: {
            if ((y % 4 == 0 && y % 100 != 0) || y % 400  == 0) {
                if (d > 29) d = 1, m += 1;
            } else if (d > 28) {
                d = 1, m += 1;
            }
        } break;
        case 3: {
            if (d > 31) d = 1, m += 1;
        } break;
        case 4: {
            if (d > 30) d = 1, m += 1;
        } break;
        case 5: {
            if (d > 31) d = 1, m += 1;
        } break;
        case 6: {
            if (d > 30) d = 1, m += 1;
        } break;
        case 7: {
            if (d > 31) d = 1, m += 1;
        } break;
        case 8: {
            if (d > 31) d = 1, m += 1;
        } break;
        case 9: {
            if (d > 30) d = 1, m += 1;
        } break;
        case 10: {
            if (d > 31) d = 1, m += 1;
        } break;
        case 11: {
            if (d > 30) d = 1, m += 1;
        } break;
        case 12: {
            if (d > 31) d = 1, m += 1;
            if (m == 13) m = 1, y += 1;
        }; break;
        }
    }
    printf("%d %d %d\n", y, m, d);
    return 0;
}
