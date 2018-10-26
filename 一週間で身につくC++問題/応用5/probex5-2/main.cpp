#include <iostream>
#include <string>
#include <regex>
#include <cstdlib>

using namespace std;

int main(){
    cout << "整数の値を入力してください:";
    map<int,string> number;
    number[0] = "〇";
    number[1] = "一";
    number[2] = "二";
    number[3] = "三";
    number[4] = "四";
    number[5] = "五";
    number[6] = "六";
    number[7] = "七";
    number[8] = "八";
    number[9] = "九";
    string tmp;
    cin >> tmp;
    cout << endl;
    regex num("^[0-9]+$");
    if(regex_search(tmp,num)){
        cout << "変換結果:";
        int len = tmp.length();
        int i;
        for(i = 0; i<len; i++){
            if(len % 3 == i % 3 && i != 0){
                cout << ",";
            }
            cout << number[tmp[i] - '0'];
            // cout << number[i];
        }
    }else{
        cout << "整数の値を入力してください。";
    }
    cout << endl;
    return 0;
}