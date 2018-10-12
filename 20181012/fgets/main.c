#include <stdio.h>

int main(void){
    char str[1024];
    fgets(str,1024, stdin);
    printf("%s",str);
    
    return 0;
}