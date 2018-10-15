#include <stdio.h>

int main(void){
    double dir,w;
    scanf("%lf %lf",&dir,&w);
    dir /= 10; w /= 60;
    printf("%lf %lf",dir,w);
}