#include <stdio.h>

int main(void){
    char *mnthp[3] = {"January","February","March"};
    char **p1,**p2,**p3;
    int i,j;

    p1 = p2 = p3 = mnthp;

    //case1
    for(i = 0;i<3;i++){
        printf("%s\n",*(p1+i));
    }
    //case2
    for(i = 0;i<3;i++){
        printf("%s\n",*p2);
        ++p2;
    }
    //case3
    for(i = 0;i<3;i++){
        j = 0;
        while(*(*p3 + j) != '\0'){
            printf("%c",*(*p3+j));
            j++;
        }
        printf("\n");
        ++p3;
    }
}