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
    for(int i = 0;i<size;i++){
        if(alpha[T[i] - 'a'] == S[i] && alpha[S[i] - 'a'] == T[i]){
            printf("test\n");
            continue;
        }
        // printf("alpha %c\n",alpha[S[i] - 'a']);
        // T[i]に値が入っていない場合
        if(alpha[T[i] - 'a'] == '\0'){
            if(alpha[T[i] - 'a'] != '\0'){
                alpha[alpha[T[i] - 'a'] - 'a'] = S[i];
            }else{
                alpha[T[i] - 'a'] = S[i];
            }
            alpha[S[i] - 'a'] = T[i];
        }
        // S[i]に中身が入っていない場合
        else if(alpha[S[i] - 'a'] == '\0'){
            alpha[alpha[T[i] - 'a'] - 'a'] = S[i];
            alpha[S[i] - 'a'] = T[i];
        }
        //両方中身が入っている場合
        else{

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