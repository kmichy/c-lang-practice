#include <stdio.h>

int main(void){
    const double EXCISETAX = 0.08;
    int price;
    printf("�{�̉��i:");
    scanf("%d",&price);
    price = (int)((1+EXCISETAX) * price);
    printf("�ō��݉��i:%d\n",price);

    return 0;
}