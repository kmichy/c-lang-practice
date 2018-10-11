#include <stdio.h>

int main(void){
    int n;
    if(scanf("%d",&n) == EOF){
        printf("int:ctrl+z:%d",n);
    }
    char a[12];
    if(scanf("%s",a) == EOF){
        printf("char:ctrl+z:%s",a); 
    }
}