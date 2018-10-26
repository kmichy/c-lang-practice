#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
    queue<string> que;
    string tmp = "tmp";
    while(tmp.length() != 0){
        cout << "文字列を入力:";
        getline(cin,tmp);
        if(tmp.length() != 0){
            que.push(tmp);
        }
    }
    cout << endl;

    while(!que.empty()){
        cout << que.front() << endl;
        que.pop();
    }

    return 0;
}