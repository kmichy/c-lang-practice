#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *ip;
    int i,n;
    printf("Input a number :");
    scanf("%d",&n);

    ip = (int *)malloc(n * sizeof(int));

    for(i = 0;i<n;i++){
        ip[i] = i;
    }

    for(i = 0;i<n;i++){
        printf("%d ",ip[i]);
    }
    printf("\n");

    free(ip);
    return 0;
}