#include <stdio.h>
#include <string.h>

int main(void){
    char data[3][101] = {};
    // memset(a,'\0',sizeof(int) * 101);
    // memset(b,'\0',sizeof(int) * 101);
    // memset(c,'\0',sizeof(int) * 101);
    int datan[3] = {};
    scanf("%s",data[0]);
    // printf("%s",a);
    scanf("%s",data[1]);
    scanf("%s",data[2]);
    char tmp = 'a';
    char ans = '0';
    while(tmp != '\0'){
        if(tmp == 'a'){
            tmp = data[0][datan[0]];
            datan[0]++;
            ans = 'A';
        }else if(tmp == 'b'){
            tmp = data[1][datan[1]];
            datan[1]++;
            ans = 'B';
        }else{
            tmp = data[2][datan[2]];
            datan[2]++;
            ans = 'C';
        }
    }
    printf("%c",ans);
    return 0;
}