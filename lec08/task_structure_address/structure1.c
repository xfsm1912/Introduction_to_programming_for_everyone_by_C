#include <stdio.h>

int main() {
    struct Data {
        /* data */
        int x, y;
    } a[2];

    struct Data *p = a;
    printf("%p\n", &a[1].x);
    printf("%p\n", &((a + 1)->x));
    printf("%p\n", &(a[0].y) + 1);
    printf("%p\n", &((p + 1)->x));
    printf("%p\n", &(p->y) + 1);
    return 0;
}

// 兰亮亮的回复:
// #include <iostream>

// using namespace std;

// struct Date
// {
//     int x, y;
// } a[2];

// int main(void)
// {
//     struct Date *p = a;
//       printf("%p\n",&((p+1)->x ));
//     printf("%p\n", &(a+1)->x);
//     printf("%p\n",&(a[1].x ));
//     printf("%p\n",&(a->y)+1 );
//     printf("%p\n",&(p->y )+1);
//     printf("%p\n",&(p->x )+2);
//     printf("%p\n",&(a->x )+2);
//     printf("%p\n",&((a+1)->y )-1);
//     printf("%p\n",&((p+1)->y )-1);
//     printf("%p\n",&a[0]+1);
//     printf("%p\n",p+1);
//     printf("%p\n",a+1);
//     return 0;
// }

