#include <stdio.h>

int main(void){
    int h,w;
    scanf("%d %d",&h,&w);
    char data[h][w+1];
    for(int i = 0;i<h;i++){
        scanf("%s",data[i]);
    }
    int count = 0;
    for(int i = 0;i<h;i++){
        for(int j = 0;j<w;j++){
            count = 0;
            if(data[i][j] == '#'){
                continue;
            }
            if(i != h-1){
                if(data[i+1][j] == '#'){
                    count++;
                }
                if(data[i+1][j+1] == '#'){
                    count++;
                }
                if(data[i+1][j-1] == '#'){
                    count++;
                }
            }
            if(i != 0){
                if(data[i-1][j] == '#'){
                    count++;
                }
                if(data[i-1][j+1] == '#'){
                    count++;
                }
                if(data[i-1][j-1] == '#'){
                    count++;
                }
            }
            if(data[i][j+1] == '#'){
                count++;
            }
            if(data[i][j-1] == '#'){
                count++;
            }
            if(count == 0){
                data[i][j] = '0';
            }else{
                data[i][j] = '0' + count;
            }
        }
    }
    
    for(int i = 0;i<h;i++){
        printf("%s\n",data[i]);
    }
}