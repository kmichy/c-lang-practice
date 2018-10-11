#include <stdio.h>
#include <string.h>

int main(void){
  char moji[20],*pmoji;

  printf("10文字程度の英数字の文字列を入力してください（スペースなしで）\n");
  scanf("%s",moji);
  pmoji = moji;


  int mojisize = strlen(moji);
  char test = 'A';
  printf("%c",test);
  for(int i = mojisize;i>=0;i--){
      printf("%c",moji[i]);
      printf("\n");
      printf("%p",&moji[i]);
      printf("\n");
  }

  return 0;
}
