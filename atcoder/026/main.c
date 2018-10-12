#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare_int(const void *a,const void *b){
    return *(int *)a - *(int *)b;
}

int main(void){
    int n;
    scanf("%d",&n);
    int data[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&data[i]);
    }
    qsort(data,n,sizeof(int),compare_int);
    double ans = 0;
    for(int i = 0;i<n;i++){
        if(n % 2 != 1){
            ans += (double)data[i] * (double)data[i] * pm;
        }else{
            ans += (double)data[i] * (double)data[i] * pm;
        }
        pm *= -1;
    }
    printf("%-.7lf\n",ans * M_PI);
}