#include <stdio.h>
void check(int datanumber,int maxmin[],int data[]);

int main(void){
    int data[10] = {1,2,-1,4,5,6,7,8,9,-1};
    int maxmin[2];
    int datanumber = sizeof(data)/sizeof(data[0]);
    check(datanumber,maxmin,data);
    printf("max = %d,min = %d",maxmin[0],maxmin[1]);
}

void check(int datanumber,int maxmin[],int data[]){
    maxmin[0] = -1;
    maxmin[1] = 101;
    for(int i = 0;i<datanumber;i++){
        if(data[i] == -1){
            break;
        }
        if(data[i] > maxmin[0]){
            maxmin[0] = data[i];
        }
        if(data[i] < maxmin[1]){
            maxmin[1] = data[i];
        }
    }
    return;
}