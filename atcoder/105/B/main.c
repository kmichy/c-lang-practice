#include <stdio.h>

int main(void){
    //整数Nを読み込む
    int N;
    scanf("%d",&N);

    //Nがtrueかチェックするための配列を用意し、\0で初期化する
    char a[101] = {'\0'};

    //a[4]とa[7]はtrueとして、1を代入する
    a[4] = '1';
    a[7] = '1';

    //for文を回し、a[i-4]もしくはa[i-7]が1の場合はa[i]をtrueとして、1にする
    for(int i = 7;i<=100;i++){
        if(a[i - 4] == '1' || a[i - 7] == '1'){
            a[i] = '1';
        }
    }

    //もしa[N]が1ならYes、それ以外ならNoと出力する
    if(a[N] == '1'){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    
    return 0;
}