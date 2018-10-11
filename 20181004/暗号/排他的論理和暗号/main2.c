#include <stdio.h>

void codeExor(char finame[],char foname[],int key);

int main(void){
    char finame[] = "testa.txt";
    char foname[] = "testb.txt";
    int key = 100;
    codeExor(finame,foname,key);
    return 0;
}

void codeExor(char finame[],char foname[],int key){
    FILE *fi,*fo;
    int value;

    fi = fopen(finame,"rb");
    if(fi == NULL) return;
    fo = fopen(foname,"wb");
    if(fo == NULL) return;

    while((value = getc(fi)) != EOF){
        putc(value ^ key,fo);
    }

    fclose(fi);
    fclose(fo);
}