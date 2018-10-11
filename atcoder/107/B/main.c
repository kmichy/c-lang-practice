#include <stdio.h>
#include <string.h>
int main(void){
    int h,w;
    scanf("%d %d",&h,&w);
    char gazou[h][w+1];

    for(int i = 0;i<h;i++){
        scanf("%s",gazou[i]);
    }

    for(int i = 0;i<h;i++){
        for(int j = 0;j<w;j++){
            for(int k = 0;k<h;k++){
                if(strstr(gazou[i],"#") != NULL && gazou[k][j] == '#'){
                    printf("%c",gazou[i][j]);
                    break;
                }
            }
            if(j == w-1 && strstr(gazou[i],"#") != NULL){
                printf("\n");
            }
        }
    }
}