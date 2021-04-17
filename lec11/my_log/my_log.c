#include <stdio.h>
#define log(frm, args...) { \
    printf("[%s : %d] ", __func__, __LINE__);\
    printf(frm, ##args);\
}

// log中"##"的作用是对token进行连接，这里的args就是token,如果token为空，那么不进行连接，所以允许省略可变参数

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

