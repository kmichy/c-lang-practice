#include <stdio.h>
enum{
    STATE_NORMAL,
    STATE_POISON,
    STATE_NUMBLY,
    STATE_CURSE
};
enum{
    STATE_NORMAL2 = 1
};
int main(void){
    printf("%d",STATE_NORMAL2);
    return 0;
}