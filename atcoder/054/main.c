#include <stdio.h>

int main(void){
    int h,w;
    scanf("%d %d",&h,&w);
    char data1[h][h+1];
    char data2[w][w+1];
    int i,j,k,l;
    for(i = 0;i<h;i++){
        scanf("%s",data1[i]);
    }
    for(i = 0;i<w;i++){
        scanf("%s",data2[i]);
    }
    for(i = 0;i<h;i++){
        int flag = 0;
        for(j = 0;j<h;j++){
            for(k = 0;k<w;k++){
                if(flag != 0){
                    flag = 0;
                    break;
                }
                for(l = 0;l<w;l++){
                    if(data1[i][j] != data2[k][l]){
                        flag++;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}