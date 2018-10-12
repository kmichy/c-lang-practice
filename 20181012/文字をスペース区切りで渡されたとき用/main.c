#include <stdio.h>
#include <string.h>

int main(void){
    char str[1024];
    fgets(str,1024, stdin);
    printf("%s",str);
    char *ptr;

    ptr = strtok(str," ,");
    printf("%s\n",ptr);

    while(ptr != NULL){
        ptr = strtok(NULL, ", ");

        if(ptr != NULL){
            printf("%s\n",ptr);
        }
    }
}