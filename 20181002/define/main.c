#include <stdio.h>

#define GET_TRAPEZOID_AREA(A,B,H) (A+B) * H / 2

int main(void){
    int up,down,h,s;
    printf("è„íÍÅAâ∫íÍÅAçÇÇ≥:");
    scanf("%d,%d,%d",&up,&down,&h);
    s = GET_TRAPEZOID_AREA(up,down,h);
    printf("ñ êœ:%d\n",s);
    return 0;
}