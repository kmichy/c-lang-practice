#include <stdio.h>
#include "define.h"

int all =4;

int main(void){
    int buf;
    scanf("%d",&buf);
    buf = calc(buf,4);
    printf("%d\n",buf);
    printf("%d\n",sum(1,3,5));
    return 0;
}