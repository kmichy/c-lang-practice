#include <stdio.h>
#include <string.h>

int main(void){
  char moji[20],*pmoji;

  printf("10�������x�̉p�����̕��������͂��Ă��������i�X�y�[�X�Ȃ��Łj\n");
  scanf("%s",moji);
  pmoji = moji;


  int mojisize = strlen(moji);
  for(int i = 0;i<mojisize;i++){
    for(int j = i;j<mojisize;j++){
      printf("%c",moji[j]);
    }
    printf("\n");
  }

  return 0;
}