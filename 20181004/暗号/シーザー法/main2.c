#include <stdio.h>

void codeCaesar(char finame[],char foname[],int key);

int main(void){
    char finame[] = "testa.txt";
    char foname[] = "testb.txt";
    int key = -128;
    codeCaesar(finame,foname,key);
    return 0;
}

void codeCaesar(char finame[],char foname[],int key){
    FILE *fi,*fo;
    int value;

    fi = fopen(finame,"rb");
    if(fi == NULL) return;
    fo = fopen(foname,"wb");
    if(fo == NULL) return;

    while((value = getc(fi)) != EOF){
        putc(value + key,fo);
    }

    fclose(fi);
    fclose(fo);
}
