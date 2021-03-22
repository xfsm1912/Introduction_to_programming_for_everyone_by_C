#include <stdio.h>
#define log(frm, args...) { \
    printf("[%s : %d] ", __func__, __LINE__);\
    printf(frm, ##args);\
}

void func(int a) {
    log("a = %d\n", a);
}

int main() {
    int a = 123;
    printf("a = %d\n", a);
    log("a = %d\n", a);
    func(a);
    log("hello world\n");
    return 0;
}

