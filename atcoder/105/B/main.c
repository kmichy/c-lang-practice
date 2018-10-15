#include <stdio.h>
#include <string.h>

int main(void){
    //整数Nを読み込む
    int N;
    scanf("%d",&N);

    //Nが正しい値かチェックするための配列を用意し、0で初期化する
    int a[110];
    memset(&a,0,sizeof(a));

    //a[4]とa[7]は正しい値として、1を代入する
    a[4] = 1;
    a[7] = 1;

    //for文を回し、a[i-4]もしくはa[i-7]が1の場合はa[i]を1にする
    for(int i = 7;i<=100;i++){
        if(a[i - 4] == 1 || a[i - 7] == 1){
            a[i] = 1;
        }
    }

    //もしa[N]が1ならYes、それ以外ならNoと出力する
    if(a[N] == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    
    return 0;
}