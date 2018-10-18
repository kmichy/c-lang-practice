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
    char alpha[26];
    memset(&alpha,'\0',sizeof(alpha));
    for(int i = 0;i<size;i++){
        if(S[i] != T[i] && alpha[T[i] - 'a'] != S[i]){
            tmp = S[i];
            alpha[T[i] - 'a'] = S[i];
                if(S[j] == tmp){
                    S[j] = T[i];
                    continue;
                }
                if(S[j] == T[i]){
                    S[j] = tmp;
                }
            }
        }
    }
    printf("S %s\n",S);
    printf("T %s\n",T);
    if(strcmp(S,T) == 0){
        printf("Yes\n");
        return 0;
    }
    printf("No\n");
    return 0;
}