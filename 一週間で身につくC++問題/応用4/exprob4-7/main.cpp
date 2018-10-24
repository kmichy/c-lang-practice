#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(){
    list<string> li;
    string tmp = "a";
    while(tmp.length() != 0){    
        cout << "文字列を入力:";
        getline(cin,tmp);
        li.push_back(tmp);
    }
    cout << "5文字未満の単語:";
    list<string>::iterator itr = li.begin();
    while(itr != li.end()){
        tmp = *itr;
        if(tmp.length() < 5){
            cout << *itr << " ";
        }
        itr++;
    }
}