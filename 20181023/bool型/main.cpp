#include <iostream>

using namespace std;

bool judge(int);

int main(){
    int n;
    cout << "整数の入力:";
    cin >> n;
    if(judge(n)){
        cout << "この数は0以上です。" << endl;
    }else{
        cout << "この数は0未満です。" << endl;
    }

    return 0;
}

bool judge(int n){
    if(n >= 0){
        return true;
    }else{
        return false;
    }
}