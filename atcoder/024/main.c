#include <stdio.h>
#include <string.h>

int main(void){
    int n,t;
    scanf("%d %d",&n,&t);
    int data[n];
    memset(data,0,sizeof(int) * n);
    int count = 0;
    int tmp;
    for(int i = 0;i<n;i++){
        scanf("%d",&data[i]);
        tmp = data[i] - data[i-1];
        if(i != 0 && tmp < t){
            count += tmp;
        }else{
            count += t;
        }
    }
    printf("%d\n",count);
}