#include <stdio.h>
#include <string.h>
int atmatches(char c){
    if(c == 'a'){
        return 1;
    }else if(c == 't'){
        return 1;
    }else if(c == 'c'){
        return 1;
    }else if(c == 'o'){
        return 1;
    }else if(c == 'd'){
        return 1;
    }else if(c == 'e'){
        return 1;
    }else if(c == 'r'){
        return 1;
    }
    return 0;
}

int main(void){
    char a[11];
    char b[11];
    scanf("%s",a);
    scanf("%s",b);
    int size = strlen(a);
    int flag = 0;
    for(int i = 0;i<size;i++){
        if(a[i] != b[i]){
            if(a[i] == '@' && atmatches(b[i]) == 0){
                    flag++;
                    break;
            }else if(b[i] == '@' && atmatches(a[i]) == 0){
                    flag++;
                    break;
            }else if(a[i] != '@' && b[i] != '@'){
                flag++;
                break;
            }
        }
    }
    if(flag != 0){
        printf("You will lose\n");
    }else{
        printf("You can win\n");
    }
}