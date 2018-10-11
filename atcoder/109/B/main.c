#include <stdio.h>
#include <string.h>

int main(void){
    int n;
    scanf("%d\n",&n);
    char name[n][101];
    char flag = '0';
    for(int i = 0;i<n;i++){
        fgets(name[i],sizeof(name[i]),stdin);
        if(i != 0 && name[i][0] != name[i-1][strlen(name[i-1])-2]){
            flag++;
            break;
        }
        for(int j = 0;j<i;j++){
            if(strcmp(name[j],name[i]) == 0){
                flag++;
                break;
            }
        }
        if(flag != '0'){
            break;
        }
    }
    if(flag == '0'){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}