#include <stdio.h>

int main(void){
    char *p = "ABC";
    printf("%c\n",*p);
    printf("%c\n",*p+1);
    printf("%c\n",*p+2);
    puts(p);
}