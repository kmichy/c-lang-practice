#include <stdio.h>

#define GET_TRAPEZOID_AREA(A,B,H) (A+B) * H / 2

int main(void){
    int up,down,h,s;
    printf("���A����A����:");
    scanf("%d,%d,%d",&up,&down,&h);
    s = GET_TRAPEZOID_AREA(up,down,h);
    printf("�ʐ�:%d\n",s);
    return 0;
}