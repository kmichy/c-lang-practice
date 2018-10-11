#include <stdio.h>
#include <string.h>

int main(void){
    int N,q;
    scanf("%d %d",&N,&q);
    int data[N];
    memset(&data[0],0,sizeof(data));
    int a,b,c;
    for(int i = 0;i<q;i++){
        scanf("%d %d %d",&a,&b,&c);
        for(int j = a-1;j<=b-1;j++){
            data[j] = c;
        }
    }
    for(int i = 0;i<N;i++){
        printf("%d\n",data[i]);
    }
}