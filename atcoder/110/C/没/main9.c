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
    memset(&alpha,'\0',sizeof(alpha));
    for(int i = 0;i<size;i++){
        // printf("alpha %c\n",alpha[T[i] - 'a']);
        // printf("alalpha %c\n",alpha[alpha[T[i] - 'a'] - 'a']);
        // for(int j = 0;j<26;j++){
        //     if(alpha[j] == S[i] && alpha[alpha[j] - 'a'] != T[i]){
        //         printf("No\n");
        //         return 0;
        //     }
        // }
        if(alpha[S[i] - 'a'] != '\0'){
            T[i] = alpha[S[i] - 'a'];
        }
        if(alpha[T[i] - 'a'] == '\0'){
            alpha[T[i] - 'a'] = S[i];
        }
        if(alpha[T[i] - 'a'] != S[i]){
            printf("No\n");
            return 0;
        }else{
            continue;
        }
        // if(alpha[T[i] - 'a'] == '\0'){
        //     alpha[T[i] - 'a'] = S[i];
        // }
        // if(alpha[S[i] - 'a'] == '\0'){
        //     alpha[S[i] - 'a'] = T[i];
        // }
        // printf("al t%c\n",alpha[T[i] - 'a']);
        // printf("al s%c\n",alpha[S[i] - 'a']);
        // printf("s %c\n",S[i]);
        // printf("t %c\n",T[i]);
        // if(alpha[T[i] - 'a'] != S[i]){
        //     printf("No\n");
        //     return 0;
        // }
        // if(alpha[S[i] - 'a'] != T[i]){
        //     printf("No\n");
        //     return 0;
        // }
        // if(alpha[S[i] - 'a'] == '\0'){
        //     alpha[S[i] - 'a'] = T[i];
        // }else if(alpha[S[i] - 'a'] != T[i]){
        //     printf("No\n");
        //     return 0;
        // }else{
        //     continue;
        // }
    }
    // printf("S %s\n",S);
    // printf("T %s\n",T);
    printf("Yes\n");
    return 0;
}