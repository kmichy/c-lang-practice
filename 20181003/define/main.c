#include <stdio.h>
#define EXCISTETAX 0.08

int main(void){
    int price;
    printf("�{�̉��i:");
    scanf("%d",&price);
    price = (int)((1+EXCISTETAX)*price);
    printf("�ō��݉��i:%d\n",price);
    return 0;
}