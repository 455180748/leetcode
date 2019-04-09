#include <stdio.h>

int main(int argc,char *argv[]) {
    int i = 0;
    if(printf("%d ", i++) && printf("%d ", i++) && printf("%d ", i++))
        {}
}