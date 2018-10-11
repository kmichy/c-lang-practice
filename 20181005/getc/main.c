#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;
    char *filename = "sample.txt";
    int ch;

    if((fp = fopen(filename,"rb")) == NULL){
        fprintf(stderr,"%sÇÃÉIÅ[ÉvÉìÇ…é∏îsÇµÇ‹ÇµÇΩ\n",filename);
        return EXIT_FAILURE;
    }

    while((ch = getc(fp)) != EOF){
        putchar(ch);
    }

    fclose(fp);

    return EXIT_SUCCESS;
}