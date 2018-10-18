#include <stdio.h>
#include <string.h>

int main(void){
    char S[200000];
    char T[200000];
    scanf("%s",S);
    scanf("%s",T);
    char alphabet[26];
    char alphaflag[26];
    memset(alphabet,'\0',sizeof(alphabet));
    memset(alphabet,'\0',sizeof(alphaflag));
    
    int size = strlen(S);

    char *p,c,h;
    int flag = 0;
    int count;
    for(int i = 0;i<size;i++){
        c = S[i];
        h = T[i];
        count = 0;
        while ((p = strchr(S, c)) != NULL && c != h){
            printf("%c\n",*p);
            *p = h;
            printf("%s\n\n",S);
        }
    }
    return 0;
}