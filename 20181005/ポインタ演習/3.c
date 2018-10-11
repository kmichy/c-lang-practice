#include <stdio.h>

int main(void){
    int i;
    char name[]="Tokyo Joho University";
    char *p;

    p=name;
    printf("*** case1 ***\n");
    printf("adress: name=%p,p=%p\n",name,p);
    printf("value: name=%s,p=%s\n\n",name,p);

    printf("*** case2 ***\n");
    putchar(*p);
    putchar(*p+1);
    putchar(*p+2);
    putchar(*p+3);
    putchar(*p+4);
    putchar(*p+5);
    putchar(*p+6);
    putchar(*p+7);
    putchar(*p+8);
    printf("\n\n");

    printf("*** case3 ***\n");
    i=0;
    while(name[i]){
        name[i] = name[i]+1;
        i++;
    }
    printf("値: name=%s\n\n",name);

    printf("*** case4 ***\n");
    while(*p){
        *p = *p -1;
        ++p;
    }
    printf("値: name =%s\n",name);

    return 0;
}