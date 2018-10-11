#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum{
    MAN,
    WOMAN
};

typedef struct {
    char name[64];
    int age;
    int sex;
}human;

void inputHuman(human *data);
void outputHuman(human data);

int main(void){
    human *data;
    int count = 0;
    int datasize = 10;
    data = (human*)malloc(sizeof(human) * datasize);
    while(1){
        inputHuman(&data[count]);
        if(data[count].age == -1){
            break;
        }
        count++;
        if(count >= datasize){
            datasize+= 10;
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
    printf("名前を入力してください\n");
    scanf("%s",&data->name);
    printf("年齢を入力してください\n");
    scanf("%d",&data->age);
    printf("性別を入力してください 男性:0,女性:1\n");
    if(data->age != -1){
        scanf("%d",&data->sex);
    }
}

void outputHuman(human data){
    printf("名前:%s\n",data.name);
    printf("年齢:%d\n",data.age);
    printf("性別:");
    switch(data.sex){
        case MAN:
            printf("男性\n");
            break;
        case WOMAN:
            printf("女性\n");
            break;
        default:
            printf("その他\n");
    }
}