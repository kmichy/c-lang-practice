#include <iostream>
#include <string>
#include <queue>
#include <regex>

using namespace std;

int main(){
    queue<char> que;
    string tmp;
    cout << "整数の値を入力してください";
    cin >> tmp;
    int len = tmp.length();
    int i;
    for(i = 0; i < len; i++){
        que.push(tmp[i]);
    }
    cout << endl;
    cout << "変換結果";
    for(i = 0; i < len; i++){
        if(len % 3 == i % 3 && i != 0){
            cout << ",";
        }
        switch(que.front()){
            case '1':
                cout << "一";
                break;
            case '2':
                cout << "二";
                break;
            case '3':
                cout << "三";
                break;
            case '4':
                cout << "四";
                break;
            case '5':
                cout << "五";
                break;
            case '6':
                cout << "六";
                break;
            case '7':
                cout << "七";
                break;
            case '8':
                cout << "八";
                break;
            case '9':
                cout << "九";
                break;
            default:
                cout << "〇";  
        }
        que.pop();
    }
    cout << endl;
}