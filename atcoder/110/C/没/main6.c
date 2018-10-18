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

    char alpha[26];
    char tmps;
    char tmpt;
    for(int i = 0;i<size;i++){
        // printf("aaS %c\n",alpha[alpha[S[i] - 'a'] - 'a']);
        // printf("aaT %c\n",alpha[alpha[T[i] - 'a'] - 'a']);
        // printf("aS %c\n",alpha[S[i] - 'a']);
        // printf("aT %c\n",alpha[T[i] - 'a']);
        // if(alpha[S[i] - 'a'] == '\0'){
            if(alpha[S[i] - 'a'] != '\0'){
                tmps = alpha[S[i] - 'a'];
                alpha[tmps - 'a'] = T[i];
            }else{
                alpha[S[i] - 'a'] = T[i];
            }
            if(alpha[T[i] - 'a'] != '\0'){
                tmps = alpha[S[i] - 'a'];
                alpha[T[i] - 'a'] = tmps;
            }else{
                alpha[T[i] - 'a'] = S[i];
            }
        // }else{
        //     alpha[alpha[S[i] - 'a'] - 'a'] = T[i];
        //     alpha[alpha[T[i] - 'a'] - 'a'] = S[i];
        // }
        // printf("sonogo\n");
        // printf("aaS %c\n",alpha[alpha[S[i] - 'a'] - 'a']);
        // printf("aaT %c\n",alpha[alpha[T[i] - 'a'] - 'a']);
        // printf("aS %c\n",alpha[S[i] - 'a']);
        // printf("aT %c\n",alpha[T[i] - 'a']);
    }
    for(int i = 0;i<size;i++){
        if(alpha[S[i] - 'a'] != '\0'){
            S[i] = alpha[S[i] - 'a'];
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