#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a,const void*b){
    return *(int*)a - *(int*)b;
}

int main(void){
    int data[] = {4,2,3,6,3,2,1,3,5,7};
    int i;
    //ソート
    qsort(data,10,sizeof(int),compare_int);

    //データの確認
    for(i = 0;i<10;i++){
        printf("%d ",data[i]);
    }
    printf("\n");
}