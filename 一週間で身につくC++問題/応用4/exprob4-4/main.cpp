#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> min;
    vector<string> max;
    string tmp;
    cout << "文字列を入力:";
    getline(cin,tmp,'\n');

    while(tmp.length() != 0){
        if(max.empty() == true){
            max.push_back(tmp);
            min.push_back(tmp);
            cout << "文字列を入力:";
            getline(cin,tmp);
            continue;
        }
        if(tmp.length() > max[0].length()){
            max.clear();
            max.push_back(tmp);
        }else if(tmp.length() == max[0].length()){
            max.push_back(tmp);
        }
        if(tmp.length() < min[0].length()){
            min.clear();
            min.push_back(tmp);
        }else if(tmp.length() == min[0].length()){
            min.push_back(tmp);
        }
        cout << "文字列を入力:";
        getline(cin,tmp);
    }

    cout << "最長の単語:";
    vector<string>::iterator itr;
    for(itr = max.begin(); itr != max.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;
    cout << "最短の単語:";
    for(itr = min.begin(); itr != min.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;
}