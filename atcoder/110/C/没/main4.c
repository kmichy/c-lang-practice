#include <stdio.h>
#include <string.h>

int main(void){
    char S[200001];
    char T[200001];
    memset(&S,'\0',sizeof(S));
    memset(&T,'\0',sizeof(T));
    scanf("%s",S);
    scanf("%s",T);
    
    int size = strlen(S);

    char tmp;
    char tmpT;

    for(int i = 0;i<size;i++){
        if(S[i] != T[i]){
            tmp = S[i];
            // tmpT = T[i];
            // printf("%c\n",tmpS);
            // printf("%c\n",tmpT);
        }
        if(S[i] == '\0'){
            break;
        }
    }
    if(strcmp(S,T) == 0){
        printf("Yes\n");
        return 0;
    }
    printf("No\n");
    // printf("S %s\n",S);
    // printf("T %s\n",T);
    return 0;
}