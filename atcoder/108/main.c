#include <stdio.h>

int main(void){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int ansa,ansb;
    ansa = c-a;
    ansb = d-b;
    printf("%d %d %d %d\n",c-ansb,d+ansa,a-ansb,b+ansa);
}