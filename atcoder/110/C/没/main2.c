#include <stdio.h>
#include <string.h>

int main(void){
    char S[200000];
    char T[200000];
    scanf("%s",S);
    scanf("%s",T);
    char alpha[26];
    memset(alpha,'\0',sizeof(alpha));

    int size = strlen(S);
    char tmp;
    int flag = 0;
    for(int i = 0;i<size;i++){
            alpha[S[i] - 'a'] = T[i];
    }
    for(int i = 0;i<size;i++){
        if(alpha[T[i] - 'a'] != '\0' && alpha[S[i] - 'a'] != T[i]){
            tmp = alpha[S[i] - 'a'];
            while(alpha[tmp - 'a'] != T[i] && flag <= 26){
                // printf("test");
                tmp = alpha[tmp - 'a'];
                flag++;
            }
            if(flag > 26){
                printf("No\n");
                return 0;
            }else{
                flag = 0;
            }
        // printf("alpha S[%d] %c\n",i,alpha[T[i] - 'a']);
        // printf("T[%d] %c\n",i,S[i]);
        }
        printf("alpha S[%d] %c\n",i,alpha[S[i] - 'a']);
        printf("T[%d] %c\n",i,T[i]);
    }
    printf("Yes\n");
    return 0;
}