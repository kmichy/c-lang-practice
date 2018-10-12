#include <stdio.h>
#include <string.h>

int main(void){
    char str[1024];
    fgets(str,1024, stdin);
    // printf("%s",str);
    char *ptr;

    int *p;
    int a[1000];
    p = a;
    ptr = strtok(str," ,");
    *p = atoi(ptr);
    printf("%d\n",*p);

    while(ptr != NULL){
        ptr = strtok(NULL, ", \n");

        if(ptr != NULL ){
            *p = atoi(ptr);
            printf("%d\n",*p);
        }
    }
}