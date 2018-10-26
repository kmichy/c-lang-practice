#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main(){
    stack<char> stk;
    string tmp;
    cout << "英単語を入力:";
    cin >> tmp;
    int len = tmp.length();
    int i;
    for(i = 0;i<len;i++){
        stk.push(tmp[i]);
    }
    cout << endl;
    while(!stk.empty()){
        cout << stk.top();
        stk.pop();
    }
    cout << endl;

    return 0;
}