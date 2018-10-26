#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    stack<string> stk;
    string tmp = "tmp";
    while(tmp.length() != 0){
        cout << "文字列を入力:";
        getline(cin,tmp);
        if(tmp.length() != 0){
            stk.push(tmp);
        }
    }
    cout << endl;
    while(!stk.empty()){
        cout << stk.top() << endl;
        stk.pop();
    }

    return 0;
}