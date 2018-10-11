#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[64];
    int age;
    int sex;
}human;

enum{
    MAN,
    WOMAN
};

void inputHuman(human *data);
void outputHuman(human data);

int main(void){
    human *data;
    int datasize = 10;
    data = (human*)malloc(sizeof(human) * datasize);

    int count = 0;
    while(1){
        inputHuman(&data[count]);
        if(data[count].age == -1){
           break;
        }
        count++;
        if(count>= datasize){
            datasize += 10;
            data = (human*)realloc(data,sizeof(human) * datasize);
        }
    }
    for(int i = 0;i<count;i++){
        outputHuman(data[i]);
    }
    free(data);

    return 0;
}

void inputHuman(human *data){
    printf("名前:");
    scanf("%s",data->name);
    printf("年齢:");
    scanf("%d",&data->age);
    printf("性別:");
    scanf("%d",&data->sex);
}

void outputHuman(human data){
    printf("名前:%s\n",data.name);
    printf("年齢:%d\n",data.age);
    printf("性別:%d\n",data.sex);
}