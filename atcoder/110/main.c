#include <stdio.h>
#include <stdlib.h>

int main(void){
    int data[3];
    scanf("%d %d %d",&data[0],&data[1],&data[2]);
    int max = 0;
    for(int i = 0;i<3;i++){
        if(data[i]>max){
            max = data[i];
        }
    }
    int ans;
    ans = max * 10 + data[0] + data[1] + data[2] - max;
    printf("%d",ans);
    return 0;
}