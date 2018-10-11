#include <stdio.h>

int main(void){
	int k;
	scanf("%d",k);
	int odd = 0;
	int even = 0;
	for(int i = 1;i<=k;i++){
		if(i%2 == 0){
			even++;
		}else{
			odd++;
		}
	}
	printf("%d",even*odd);
}