#include <stdio.h>

int main(void){
  int n;
  scanf("%d",&n);
  int count = 0;
  int tmp,i;
  char city[21];
  int max = 0;
  char tmp2[21];
  for(i = 0;i<n;i++){
    scanf("%s %d",tmp2,&tmp);
    count += tmp;
    if(max < tmp){
      memset(city,'\0',sizeof(char) * 21);
      max = tmp;
      memcpy(city,tmp2,sizeof(char) * 21);
    }
  }
  if(count / 2 < max){
    printf("%s\n",city);
  }else{
    printf("atcoder\n");
  }
}