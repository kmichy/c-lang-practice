#include <stdio.h>
 
int main(void) {
    // 宣言と同時に初期化する方法
    int int_arr1[5] = {0, 1, 2, 3, 4};
 
    // 全ての要素をゼロで初期化する方法
    int int_arr2[5] = {};
    for(int i = 0; i < 5; i++) {
        if(i < 4) {
            printf("%d,", int_arr2[i]);
        } else {
            printf("%d\n", int_arr2[i]);
        }
    }
 
    // 途中まで初期化
    int int_arr3[5] = {0, 1, 2};
    for(int i = 0; i < 5; i++) {
        if(i < 4) {
            printf("%d,", int_arr3[i]);
        } else {
            printf("%d\n", int_arr3[i]);
        }
    }
 
    // ひとつの要素だけゼロ以外を指定
    int int_arr4[5] = {[2] = 2};
    for(int i = 0; i < 5; i++) {
        if(i < 4) {
            printf("%d,", int_arr4[i]);
        } else {
            printf("%d\n", int_arr4[i]);
        }
    }
 
    // 要素数の記述を省略
    char char_arr1[] = {'H', 'e', 'l', 'l', 'o'};
    printf("%s\n", char_arr1);
 
    // 文字列で初期化
    char char_arr2[16] = "Hello";
 
    // 要素の型の範囲外で初期化する場合
    signed char schar_arr1[200];
    for(int i = 0; i < 200; i++) {
        schar_arr1[i] = i;
    }
    printf("%d\n", schar_arr1[199]);
 
    return 0;
}