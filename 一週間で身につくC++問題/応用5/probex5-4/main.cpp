#include <string>
#include <set>
#include <iostream>

using namespace std;

int main(){
    set<char> sets;
    string str;
    cout << "英単語を入力:";
    cin >> str;
    int len = str.length();
    int i;
    for(i = 0; i<len; i++){
        sets.insert(str[i]);
    }
    cout << "使用されているアルファベット";
    set<char>::iterator itr;
    itr = sets.begin();
    while(itr != sets.end()){
        cout << *itr << " ";
        itr++;
    }
    cout << endl;
}