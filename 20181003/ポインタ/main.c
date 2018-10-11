#include <stdio.h>

int main(void){
    int ary[2] = {1000,2000};
    int *po;

    po = ary;
    printf("po\t = %p\n",po);
    (*po)++;
    printf("po++\t = %p\n",po);
    printf("*po++\t = %d\n",*po);

}