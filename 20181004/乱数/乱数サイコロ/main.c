#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom(int min,int max);

int main(void){
    int i;

    for(i = 0;i<10;i++){
        printf("%d\n",getRandom(1,6));
    }
    return 0;
}

int getRandom(int min,int max){
    static int flag;
    if(flag == 0){
        srand((unsigned int)time(NULL));
        flag = 1;
    }
    return min + (int)(rand() * (max-min+1.0) / (1.0+RAND_MAX));
}