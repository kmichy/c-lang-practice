#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    map<string,string> map;
    map["cat"] = "猫";
    map["dog"] = "犬";
    map["bird"] = "鳥";
    map["tiger"] = "トラ";
    string tmp;
    cout << "英語で動物の名前を入力してください:";
    cin >> tmp;
    if(!map[tmp].empty()){
        cout << "「" << map[tmp] << "」です。";
    }else{
        cout << "対応するデータは登録されていません。";
    }
    cout << endl;
}