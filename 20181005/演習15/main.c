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
        printf("�Ј��ԍ�");
        scanf("%d",&data[i].number);
        printf("���O");
        scanf("%s",data[i].name);
        printf("��E");
        scanf("%s",data[i].yakushoku);
        printf("�Α��N��");
        scanf("%d",&data[i].year);
        printf("����");
        scanf("%d",&data[i].salary);
    }
    printf("�Ј��ԍ�\t����\t��E\t�Α��N��\t��{��\n");
    for(int i = 0;i<count;i++){
        printf("%d\t",data[i].number);
        printf("%s\t",data[i].name);
        printf("%s\t",data[i].yakushoku);
        printf("%d\t",data[i].year);
        printf("%d\n",data[i].salary);
    }
    free(data);
}
