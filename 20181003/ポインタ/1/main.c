#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *buff,*work;
    int i;

    buff = (char*)malloc(sizeof(char) * 100);
    work = buff;
    printf("%p\n",work);
    printf("%p\n",buff);

    for(i=0;i<100;i++){
        *work='0';
        work++;
    }
    printf("%p\n",work);
    printf("%p\n",buff);

    free(buff);
    printf("%p\n",work);
    printf("%p\n",buff);
    return 0;
}