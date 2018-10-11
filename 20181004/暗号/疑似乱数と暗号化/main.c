#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int getRandom(int min,int max);
void codeExorRandom(char finame[],char foname[],char key[]);

int main(void){
    char finame[] = "test.txt";
    char foname[] = "testbinary.txt";
    char key[] = "key";
    codeExorRandom(finame,foname,key);
    return 0;
}

int getRandom(int min,int max){
    return min + (int)(rand() * (max-min+1.0) / (1.0+RAND_MAX));
}

void codeExorRandom(char finame[],char foname[],char key[]){
    FILE *fi,*fo;
    int value,early = 0,i;

    fi = fopen(finame,"rb");
    if(fi == NULL) return;
    fo = fopen(foname,"wb");
    if(fo == NULL) return;

    for(i = 0;key[i] != '\0';i++){
        early += key[i];
    }

    srand(early);

    i = 0;
    while ((value = getc(fi)) != EOF){
        putc(value ^ getRandom(0,255),fo);
        i++;
        if(key[i] == '\0') i = 0;
    }

    fclose(fi);
    fclose(fo);
}