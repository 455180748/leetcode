#include  <stdio.h>
struct test{
    int a;
    int *p;
};

int main() {
    struct test n;
    n.a = 1;
    int num = 100;
    n.p = &num;
    printf("%d %d", n.a, *n.p);
    
}