#include <stdio.h>
#include <string.h>
int main(void){
    int n;
    scanf("%d",&n);
    int a[110];
    memset(a,1,sizeof(a));
    a[4] = 0;
    a[7] = 0;
    for(int i = 1;i<=100;i++){
        if(a[i - 4] == 0 || a[i - 7] == 0){
            a[i] = 0;
        }
        // printf("a[%d]=%d\n",i,a[i]);
    }
    // printf("%d\n",a[2 % 4]);
    // printf("%d\n",a[2 % 7]);
    if(a[n] == 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}