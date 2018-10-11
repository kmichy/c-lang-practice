#include <stdio.h>

int main(void){
    const double EXCISETAX = 0.08;
    int price;
    printf("–{‘Ì‰¿Ši:");
    scanf("%d",&price);
    price = (int)((1+EXCISETAX) * price);
    printf("Å‚İ‰¿Ši:%d\n",price);

    return 0;
}