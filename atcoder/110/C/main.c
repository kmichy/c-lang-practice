#include <stdio.h>
#include <string.h>

int main(void){
    char S[200000];
    char T[200000];
    scanf("%s",S);
    scanf("%s",T);
    char alphabet[26];
    memset(alphabet,'\0',sizeof(alphabet));

    int size = strlen(S);

    for(int i = 0;i<size;i++){
        /////////////////////////
        if(alphabet[S[i] - 'a'] == '\0'){
            alphabet[S[i] - 'a'] = T[i];
        }else if(alphabet[S[i] - 'a'] != alphabet[T[i] - 'a']){
            printf("No");
            return 0;
        }
        if(alphabet[T[i] - 'a'] == '\0'){
            alphabet[T[i] - 'a'] = S[i];
        }
        printf("T%c\n",alphabet[T[i] - 'a']);
        printf("S%c\n",alphabet[S[i] - 'a']);
    }
    // printf("Yes\n");

    return 0;
}