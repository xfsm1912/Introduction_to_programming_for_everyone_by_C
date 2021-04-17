#include <stdio.h>

struct Node {
    int data;
    struct Node *next; 
};

int hasCycle(struct Node *head) {
    if (head  == NULL) {
        return 0;
    }
    // p is slow pointer, q is fast pointer 
    struct Node *p = head, *q = head;
    // p runs by 1 step, q runs by 2 steps
    do {
        p = p->next;
        q = q->next;
        if (q == NULL) {
            return 0;
        }
        q = q->next;
    } while (p != q && q);

    return p == q;
}