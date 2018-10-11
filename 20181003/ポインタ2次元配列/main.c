#include <stdio.h>

int main(void){
    char str[3][7] = {
        "ABCDEF", "GHIJKLM", "OP"
    };
    
    printf("%s\n",str[0]);
    // EOSを入れるスペースがない為str[2]の内容も表示されてしまう
    printf("%s\n\n",str[1]);

    printf("%p\n",str[0]);
    printf("%p\n",str[1]);
    printf("%p\n\n",str[2]);
    
    printf("%p\n",&str[0][0]);
    printf("%p\n\n",&str[1][0]);

    printf("%p\n",&str[0][0]);
    printf("%p\n",&str[0][1]);
    printf("%p\n",&str[0][2]);
    printf("%p\n",&str[0][3]);
    printf("%p\n",&str[0][4]);
    printf("%p\n",&str[0][5]);
    printf("%p\n",&str[0][6]);
    printf("%p\n",&str[0][7]);
}