#include <stdio.h>

void sortBubble(int array[],int n);

int main(void){
    int array[] = {3,423,2342,3};
    int n = 4;
    printf("%d\n",array[0]);
    printf("%d\n",array[1]);
    printf("%d\n",array[2]);
    printf("%d\n",array[3]);
    sortBubble(array,n);
    printf("%d\n",array[0]);
    printf("%d\n",array[1]);
    printf("%d\n",array[2]);
    printf("%d\n",array[3]);
    return 0;
}

void sortBubble(int array[],int n){
    int i,j,temp;

    for(i = 0;i<n-1;i++){
        for(j = 0;j<n-1;j++){
            if(array[j+1]<array[j]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}