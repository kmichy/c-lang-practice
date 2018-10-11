#include <stdio.h>
#include <string.h>

int main(void){
    int n = 100;
    int a[n];
    //memsetで初期化しておかないと、0以外の数字が配列に最初から入ってしまう
    memset(&a,0,sizeof(a));
    for(int i = 0;i<n;i++){
        printf("%d\n",a[i]);
    }
}