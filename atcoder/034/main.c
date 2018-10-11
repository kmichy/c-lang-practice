#include <stdio.h>

int main(void){
  long n;
  scanf("%ld",&n);
  if(n % 2 == 0){
    printf("%ld\n",n-1);
  }else{
    printf("%ld\n",n+1);
  }
}