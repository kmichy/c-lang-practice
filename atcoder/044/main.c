#include <stdio.h>
#include <string.h>

int main(void){
    char data[101] = {};
    int az[26] = {};
    scanf("%s",data);
    int size = strlen(data);
    int a = 'a';
    int i;
    for(i = 0;i<size;i++){
        az[data[i] - a]++;
    }
    for(i = 0;i<26;i++){
        if(az[i] % 2 != 0){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");

    return 0;
}