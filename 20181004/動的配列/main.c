#include <stdio.h>

int main(void){
    int *data;
    data = (int*)malloc(sizeof(int) * 1000);
    data[999] = 100;
    printf("%d\n",data[999]);
    data = (int*)realloc(data,sizeof(int) * 10000);
    printf("%d\n",data[999]);
    data[999] = 101;
    printf("%d\n",data[999]);
    data[10999] = 10000;
    printf("%d\n",data[10999]);
    free(data);
}