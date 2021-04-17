#include <stdio.h>

struct Node {
    int data;
    struct Node *next; 
};

struct Node *insert(struct Node *head, int ind, struct Node *a) {
    /* data */
    struct Node ret, *p = &ret;
    ret.next = head;
    // 从【虚拟头节点】开始后走ind步
    // -> 与*.不同。
    // 比如，a = p -> next这句话的意思就是取出p所指向的结构体中包含的数据项next赋值给a
    while (ind--) {
        p = p -> next;
    };
    a -> next = p -> next;
    p -> next = a;
    // 返回真正的链表头节点的地址;
    return ret.next;
}
