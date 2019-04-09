#include <stdio.h>

int main(void) {
    float n = 1;
    int* p = (int*)&n;
    // printf("%ld", sizeof(float));
    for(int i = 8 * sizeof(float) - 1; i >=0; i--) {
        printf("%d", *p >> i & 1);
        if(i == 31 || i == 23)
            printf(" ");
    }
    
    printf("\n%d %d %d",(*p)>>31, (*p)>>23 & 0xFF, (*p) & 0x7FFFFF);
    
}