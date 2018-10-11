#include <stdio.h>

int main(void){
  char n[3];
  scanf("%s",n);
  if((n[0] < n[1]) ||( n[0] < n[2])){
    n[0] += 1;
  }
  printf("%c%c%c\n",n[0],n[0],n[0]);
}
