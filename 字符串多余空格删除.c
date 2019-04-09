#include <stdio.h>

int main(void) {
    char s[] = "a good   example";
    int count = 0;
    int i = 0;

    while(s[count] == ' ') // 计数开头的空格
        count++;
    printf("%d\n", count);

    while(s[count]) {
        s[i] = s[count];
        if(s[count] == ' ')
            while(s[count] == ' ')
                count++;
        else
            count++;
        i++;      
    }
    if(s[i - 1] = ' ')
        s[i - 1] = 0;
    else
        s[i] = 0;
    printf("%s\n", s);
}