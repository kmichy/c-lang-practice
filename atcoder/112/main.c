#include <stdio.h>

int main(void){
  int n;
  scanf("%d",&n);
  if(n == 1){
    printf("Hello World\n");
  }else{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d\n",a+b);
  }
}
