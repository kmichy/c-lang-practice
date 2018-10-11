#include <stdio.h>
#include <string.h>

int main(void){
    char str[64] = "Hello Tokyo, Osaka, Nagoya.Fukuoka";
    char *ptr;

    ptr = strtok(str," ,");
    printf("%s\n",ptr);

    while(ptr != NULL){
        ptr = strtok(NULL, ", ");

        if(ptr != NULL){
            printf("%s\n",ptr);
        }
    }

    printf("strの変更後の値: %s\n",str);
    
    return 0;
}