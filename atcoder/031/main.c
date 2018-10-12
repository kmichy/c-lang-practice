#include <stdio.h>

int main(void){
    int l,h,n;
    scanf("%d %d",&l,&h);
    scanf("%d",&n);
    int data[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&data[i]);
    }
    for(int i = 0;i<n;i++){
        if(data[i] < l){
            printf("%d\n",l-data[i]);
        }else if(data[i] <= h){
            printf("0\n");
        }else{
            printf("-1\n");
        }
    }
}