#include <stdio.h>

int main(void){
    int n,a;
    scanf("%d %d",&n,&a);
    int c[n];
    int t[a];
    int mincost = 1001;
    int mintime = 1001;
    for(int i = 0;i<n;i++){
        scanf("%d %d",&c[i],&t[i]);
        if(c[i] <= mincost && t[i] <= a){
            mincost = c[i];
            mintime = c[i];
        }
    }
    if(mincost == 1001){
        printf("TLE\n");
    }else{
        printf("%d\n",mincost);
    }
}