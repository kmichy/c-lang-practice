#include <stdio.h>

void codeExorLong(char finame[],char foname[],char key[]);

int main(void){
    char finame[] = "test.txt";
    char foname[] = "testbinary.txt";
    char key[] = "aiueokakikukekosasisusesotatituteto";
    codeExorLong(finame,foname,key);
    return 0;
}

void codeExorLong(char finame[],char foname[],char key[]){
    FILE *fi,*fo;
    int value,i = 0;

    fi = fopen(finame,"rb");
    if(fi == NULL) return;
    fo = fopen(foname,"wb");
    if(fo == NULL) return;

    while((value = getc(fi)) != EOF){
        putc(value ^ key[i],fo);
        i++;
        if(key[i] == '\0') i = 0;
    }

    fclose(fi);
    fclose(fo);
}