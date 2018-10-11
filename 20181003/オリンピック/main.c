#include <stdio.h>
enum{
    WINTER_OLYMPIC,
    SUMMER_OLYMPIC,
    NO_OLYMPIC
};

int olympic(int year);

int main(void){
    int year;
    scanf("%d",&year);
    year = olympic(year);
    switch(year){
        case WINTER_OLYMPIC:
            printf("冬季オリンピックが開催されます");
            break;
        case SUMMER_OLYMPIC:
            printf("夏季オリンピックが開催されます");
            break;
        case NO_OLYMPIC:
            printf("オリンピックは開催されません");
            break;
        default:
            printf("仕様です");
    }
    return 0;
}

int olympic(int year){
    if(year % 2 == 0){
        if(year % 4 == 0){
            return SUMMER_OLYMPIC;
        }else{
            return WINTER_OLYMPIC;
        }
    }else{
        return NO_OLYMPIC;
    }
}