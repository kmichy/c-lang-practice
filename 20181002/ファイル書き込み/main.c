#include<stdio.h>

int main(void){
    FILE *file;
    file = fopen("test.csv","w");
    fprintf(file,"�ԍ�,���O,�e�X�g�̕��ϓ_,\n");
    fprintf(file,"1,���̂ё�,0,\n");
    fprintf(file,"2,���Í�,90,\n");
    fprintf(file,"3,���c��,40,\n");
    fprintf(file,"4,����X�l�v,70,\n");
    fclose(file);

    return 0;
}