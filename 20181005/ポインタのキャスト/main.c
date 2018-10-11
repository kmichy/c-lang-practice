#include <stdio.h>

int main(void){
    char s[4] = {'1','2','3','4'};
    printf("%c %c %c %c\n",s[0],s[1],s[2],s[3]);
    int *p;
    p = (int *)s;
    *p = 0;
    s[0] = 10;
    s[1] = 20;
    s[2] = 30;
    s[3] = 40;
    printf("%d %d %d %d\n",s[0],s[1],s[2],s[3]);
}