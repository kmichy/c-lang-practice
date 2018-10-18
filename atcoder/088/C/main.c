#include <stdio.h>

int main(void){

    //読み取ったデータを保存する箱を用意する
    int ab[3][3+1];
    //一番左の列にある数値のうち、最小値を格納する箱を用意する
    int min = 101;
    
    //3行読み込み、値をabに代入する
    for(int i = 0;i<3;i++){
        scanf("%d %d %d",&ab[i][0],&ab[i][1],&ab[i][2]);
        //一番左の列にある数値のうち、最小値をabに代入する
        if(ab[i][0] < min){
            min = ab[i][0];
        }
    }
    //a1~a3、b1~b3を入れる箱を用意する
    int a[3];
    int b[3];
    
    //リセット用のフラグを用意する
    int flag = 0;

    //a[0]の値を0~minであると仮定し、仮定した値からa[1]~b[2]を求める
    //求めた値を利用して、abがすべて成り立つか確認する
    //成り立つ場合はYesを出力し、プログラムを終了する
    //成り立たない場合はそのままfor文を抜ける
    for(int i = 0;i<=min;i++){
        //配列a,bを初期化する
        memset(&a,0,sizeof(a));
        memset(&b,0,sizeof(b));
        //a[0]に仮定した値を代入し、a[0]~b[2]の値を求める
        a[0] = i;
        b[0] = ab[0][0] - i;
        b[1] = ab[0][1] - i;
        b[2] = ab[0][2] - i;
        a[1] = ab[1][0] - b[0];
        a[2] = ab[2][0] - b[0];
        
        //求めた値a[j]、b[k]をそれぞれ足し合わせ、ab[j][k]と一致するか確認する
        //一致しない場合flagを加算し、for文を抜ける
        for(int j = 0;j<3;j++){
            if(flag != 0){
                break;
            }
            for(int k = 0;k<3;k++){
                if(ab[j][k] != a[j] + b[k]){
                    flag++;
                    break;
                }
            }
        }
        //flagが0ならYesを出力し、プログラムを終了する
        if(flag == 0){
            printf("Yes\n");
            return 0;
        }
        //flagを初期化する
        flag = 0;
    }

    //Yesが出力されなかったので、Noを出力する
    printf("No\n");
    return 0;
}