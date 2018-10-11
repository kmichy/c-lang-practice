#include <stdio.h>

int main(void){
    int arr[3];
    int * p;
    arr[0] = 260;
    arr[1] = 259;
    arr[2] = 8;
    p = arr;
    printf("%d\n\n",p[1]);
    printf("%p\n",p);
    printf("%p\n",&p[0]);
    printf("%p\n",&p[1]);
    printf("%p\n",&p[2]);
    printf("%p\n",&p[3]);
}