#include <stdio.h>

typedef struct{
    int number;
    char name[64];
    char yakushoku[64];
    int year;
    int salary;
}shain;

int main(void){
    shain *data;
    int count = 7;
    data = (shain*)malloc(sizeof(shain) * count);
    for(int i = 0;i<count;i++){
        printf("ŽÐˆõ”Ô†");
        scanf("%d",&data[i].number);
        printf("–¼‘O");
        scanf("%s",data[i].name);
        printf("–ðE");
        scanf("%s",data[i].yakushoku);
        printf("‹Î‘±”N”");
        scanf("%d",&data[i].year);
        printf("‹‹—¿");
        scanf("%d",&data[i].salary);
    }
    printf("ŽÐˆõ”Ô†\tŽ–¼\t–ðE\t‹Î‘±”N”\tŠî–{‹‹\n");
    for(int i = 0;i<count;i++){
        printf("%d\t",data[i].number);
        printf("%s\t",data[i].name);
        printf("%s\t",data[i].yakushoku);
        printf("%d\t",data[i].year);
        printf("%d\n",data[i].salary);
    }
    free(data);
}
