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
    char tmp1,tmp2;
    for(int i = 0;i<size;i++){
        if(alpha[S[i] - 'a'] != '\0' || alpha[S[i] - 'a'] != '\0'){
            if(alpha[S[i] - 'a'] == '\0'){
                for(int j = 0;j<26;j++){
                    if(T[i] == alpha[j]){
                        alpha[j] = T[i];
                        break;
                    }
                }
                alpha[S[i] - 'a'] = T[i];
            }else if(alpha[T[i] - 'a'] != '\0'){
                for(int j = 0;j<26;j++){
                    if(S[i] == alpha[j]){
                        alpha[j] = S[i];
                        break;
                    }
                }
                alpha[S[i] - 'a'] = T[i];
            }else{
                if(S[i] > T[i]){
                    for(int j = 0;j<26;j++){
                        if(S[i] == alpha[j]){
                            alpha[j] = S[i];
                            break;
                        }
                    }
                    for(int j = 0;j<26;j++){
                        if(T[i] == alpha[j]){
                            alpha[j] = T[i];
                            break;
                        }
                    }
                }else{
                    for(int j = 0;j<26;j++){
                        if(S[i] == alpha[j]){
                            alpha[j] = S[i];
                            break;
                        }
                    }
                    for(int j = 0;j<26;j++){
                        if(T[i] == alpha[j]){
                            alpha[j] = T[i];
                            break;
                        }
                    }
                }
            }
        }
        else{
            alpha[S[i] - 'a'] = T[i];
            alpha[T[i] - 'a'] = S[i];
        }
    }
    for(int i = 0;i<size;i++){
        S[i] = alpha[S[i] - 'a'];
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